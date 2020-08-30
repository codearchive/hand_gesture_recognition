#include "mainwindow.hpp"

#include <iostream>
#include <math.h>
#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    m = MyImage(0);
    hg = HandGesture();
    c = Contours();
    df = Defects();
    startGesture = false;
    flagStart = 0;
    tmrTimer = new QTimer(this);
    connect(tmrTimer, SIGNAL(timeout()), this, SLOT(processFrameAndUpdateGUI()));
    tmrTimer->start(40);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processFrameAndUpdateGUI()
{
    hg.fingerTips.clear();
    hg.frameNumber++;
    m.cap.set(CV_CAP_PROP_FPS,25);
    m.cap >> m.src;
    flip(m.src,m.src,1);
    if (ui->rdBttn_GlobalBin->isChecked() == true){
        applyMode = 0;
        cvtColor(m.src, m.src, CV_BGR2HSV);
    }else if (ui->rdBttn_Otsu->isChecked() == true){
        applyMode = 1;
        cvtColor(m.src, m.src, CV_BGR2GRAY);
    }
    pyrDown(m.src, m.srcPreProcessed);

    if (ui->chckBx_GaussApply->isChecked() == true){
        if ((ui->sldr_GaussHeightKernel->value() == 0) && 
			(ui->sldr_GaussWidthKernel->value() == 0) && 
			(ui->sldr_GaussDeviationX->value() == 0) ||
			(ui->sldr_GaussHeightKernel->value() == 0) && 
			(ui->sldr_GaussDeviationX->value() == 0) || 
			(ui->sldr_GaussWidthKernel->value() == 0) && 
			(ui->sldr_GaussDeviationX->value() == 0)) {
            QMessageBox::information(this,
                                     "Предупреждение",
                                     "Для того, чтобы применить размытие установите "
                                     "ненулевые значения высоты и ширины ядра или отклонение по X,"
                                     "и нажмите Применить");
            ui->chckBx_GaussApply->setCheckState(Qt::Unchecked);
        }
        else{
            if (((ui->sldr_GaussHeightKernel->value()%2) == 1) || 
				(ui->sldr_GaussHeightKernel->value() == 0)) {
                GaussHeightKernel = ui->sldr_GaussHeightKernel->value();
            }
            else{
                GaussHeightKernel = ui->sldr_GaussHeightKernel->value() - 1;
            }
            if (((ui->sldr_GaussWidthKernel->value()%2) == 1) || 
				(ui->sldr_GaussWidthKernel->value() == 0)){
                GaussWidthKernel = ui->sldr_GaussWidthKernel->value();
            }
            else{
                GaussWidthKernel = ui->sldr_GaussWidthKernel->value() - 1;
            }
            GaussDeviationX = ui->sldr_GaussDeviationX->value();
            GaussDeviationY = ui->sldr_GaussDeviationY->value();
            cv::GaussianBlur(m.srcPreProcessed, m.srcPreProcessed, 
							 Size(GaussHeightKernel,GaussWidthKernel), 
							 GaussDeviationX, GaussDeviationX);
        }
    }
    matPreProcessed = m.srcPreProcessed;
    cv::resize(matPreProcessed, matPreProcessed, Size(320,240));

    if (applyMode == 0){
        QImage qimgPreProcessed((uchar*)matPreProcessed.data, 
								 matPreProcessed.cols, 
								 matPreProcessed.rows, 
								 matPreProcessed.step, 
								 QImage::Format_RGB888);
        ui->lbl_PreProcessed->setPixmap(QPixmap::fromImage(qimgPreProcessed));
		
        h_min = ui->sldr_H_min->value();
        s_min = ui->sldr_S_min->value();
        v_min = ui->sldr_V_min->value();
        h_max = ui->sldr_H_max->value();
        s_max = ui->sldr_S_max->value();
        v_max = ui->sldr_V_max->value();

        cv::inRange(m.srcPreProcessed, cv::Scalar(h_min, s_min, v_min),
					cv::Scalar(h_max, s_max, v_max), m.srcProcessed);
    }else{
        QImage qimgPreProcessed((uchar*)matPreProcessed.data, matPreProcessed.cols, 
								matPreProcessed.rows, matPreProcessed.step, 
								QImage::Format_Grayscale8);
        ui->lbl_PreProcessed->setPixmap(QPixmap::fromImage(qimgPreProcessed));

        cv::threshold(m.srcPreProcessed, m.srcProcessed, 0, 255, THRESH_OTSU);
    }

    if (ui->sldr_MedianSizeKernel->value()%2 == 1){
        MedianSizeKernel = ui->sldr_MedianSizeKernel->value();
    }else{
        MedianSizeKernel = ui->sldr_MedianSizeKernel->value() - 1;
    }
    medianBlur(m.srcProcessed, m.srcProcessed, MedianSizeKernel);

    if (ui->chckBx_DilationApply->isChecked() == true){
        if (ui->rdBttn_DilationRect->isChecked() == true){
            dilateElement = getStructuringElement(MORPH_RECT, 
												  Size(ui->sldr_DilationSizeKernel->value(), 
												  ui->sldr_DilationSizeKernel->value()));
        } else{
            dilateElement = getStructuringElement(MORPH_ELLIPSE, 
												  Size(ui->sldr_DilationSizeKernel->value(), 
												  ui->sldr_DilationSizeKernel->value()));
        }
        dilateIteration = ui->sldr_DilationIteration->value();
        cv::dilate(m.srcProcessed, m.srcProcessed, 
				   dilateElement, Point (-1,-1), dilateIteration);
    }

    if (ui->chckBx_ErosionApply->isChecked() == true){
        if (ui->rdBttn_ErosionRect->isChecked() == true){
            erodeElement = getStructuringElement(MORPH_RECT, 
												 Size(ui->sldr_ErosionSizeKernel->value(), 
												 ui->sldr_ErosionSizeKernel->value()));
        } else{
            erodeElement = getStructuringElement(MORPH_ELLIPSE, 
											     Size(ui->sldr_ErosionSizeKernel->value(), 
												 ui->sldr_ErosionSizeKernel->value()));
        }
        erodeIteration = ui->sldr_ErosionIteration->value();
        cv::erode(m.srcProcessed, m.srcProcessed, erodeElement, Point (-1,-1), erodeIteration);
    }

    if (ui->chckBx_ClosingApply->isChecked() == true){
        if (ui->rdBttn_ClosingRect->isChecked() == true){
            closeElement = getStructuringElement(MORPH_RECT, 
												 Size(ui->sldr_ClosingSizeKernel->value(), 
												 ui->sldr_ClosingSizeKernel->value()));
        } else{
            closeElement = getStructuringElement(MORPH_ELLIPSE, 
												 Size(ui->sldr_ClosingSizeKernel->value(), 
												 ui->sldr_ClosingSizeKernel->value()));
        }
        closeIteration = ui->sldr_ClosingIteration->value();
        cv::morphologyEx(m.srcProcessed, m.srcProcessed, 
						 MORPH_CLOSE, closeElement, Point (-1,-1), 
						 closeIteration);
    }

    if (ui->chckBx_OpeningApply->isChecked() == true){
        if (ui->rdBttn_OpeningRect->isChecked() == true){
            openElement = getStructuringElement(MORPH_RECT, 
												Size(ui->sldr_OpeningSizeKernel->value(), 
												ui->sldr_OpeningSizeKernel->value()));
        } else{
            openElement = getStructuringElement(MORPH_ELLIPSE, 
												Size(ui->sldr_OpeningSizeKernel->value(), 
												ui->sldr_OpeningSizeKernel->value()));
        }
        openIteration = ui->sldr_OpeningIteration->value();
        cv::morphologyEx(m.srcProcessed, m.srcProcessed, MORPH_OPEN, 
						 openElement, Point (-1,-1), openIteration);
    }

    strHand = bool2Qstring(hg.Hand);
    strNumberOfDefects = QString::number(df.numberOfDefects);
    strRectHeight = QString::number(hg.bRectHeight);
    strRectWidth = QString::number(hg.bRectWidth);
    ui->ln_Hand->setText(strHand);
    ui->ln_NumberOfDefects->setText(strNumberOfDefects);
    ui->ln_Height->setText(strRectHeight);
    ui->ln_Width->setText(strRectWidth);

    if (startGesture == false){
        cv::putText(m.src, "Input 5", Point(50,50), 
					FONT_HERSHEY_PLAIN, 3.0f, (245,200,200), 3, 8);
        c.makeContours(&m, &hg, &df);
        hg.getGesture(&m);
        ui->label_6->setStyleSheet("background-color: red");
        if (hg.mostFrequentNumberOfFingers == 5){
            ui->label_6->setStyleSheet("background-color: white");
            startGesture = true;
            flagStart = 1;
        }
    } else{
        cv::putText(m.src, "Choose mode", Point(50,50), 
					FONT_HERSHEY_PLAIN, 3.0f, (245,200,200), 3, 8);
        c.makeContours(&m, &hg, &df);
        hg.getGesture(&m);
        strModeSelect = QString::number(hg.mostFrequentNumberOfFingers);
        if (flagStart > 25){
            ui->lineEdit->setText(strModeSelect);
        }else{
            ui->lineEdit->setText("Wow");
            hg.mostFrequentNumberOfFingers = 0;
        }
        flagStart++;
    }

    if (applyMode == 0){
        cvtColor(m.src, m.src, CV_HSV2RGB);
    }else{
        cvtColor(m.src, m.src, CV_GRAY2RGB);
    }
    matOriginal = m.src.clone();
    QImage qimgOriginal((uchar*)matOriginal.data, matOriginal.cols,
						 matOriginal.rows, matOriginal.step, 
						 QImage::Format_RGB888);
    ui->lbl_Original->setPixmap(QPixmap::fromImage(qimgOriginal));

    matProcessed = m.srcProcessed.clone();
    cv::resize(matProcessed, matProcessed, Size(320,240));
    QImage qimgProcessed((uchar*)matProcessed.data, matProcessed.cols, 
						  matProcessed.rows, matProcessed.step, 
						  QImage::Format_Indexed8);
    ui->lbl_Processed->setPixmap(QPixmap::fromImage(qimgProcessed));
}

QString MainWindow::bool2Qstring(bool tf){
    if(tf) {
		return "true";
	} 
	else {
		return "false";
	}
}

void MainWindow::on_bttn_Start_clicked()
{
    if (tmrTimer->isActive() == false)
        tmrTimer->start(40);
}

void MainWindow::on_bttn_Pause_clicked()
{
    if (tmrTimer->isActive() == true)
        tmrTimer->stop();
}

void MainWindow::on_bttn_Close_clicked()
{
    close();
}

void MainWindow::on_sldr_H_min_valueChanged(int value)
{
    ui->spnBx_H_min->setValue(value);
}

void MainWindow::on_spnBx_H_min_valueChanged(int arg1)
{
    ui->sldr_H_min->setValue(arg1);
}

void MainWindow::on_sldr_H_max_valueChanged(int value)
{
    ui->spnBx_H_max->setValue(value);
}

void MainWindow::on_spnBx_H_max_valueChanged(int arg1)
{
    ui->sldr_H_max->setValue(arg1);
}

void MainWindow::on_sldr_S_min_valueChanged(int value)
{
    ui->spnBx_S_min->setValue(value);
}

void MainWindow::on_spnBx_S_min_valueChanged(int arg1)
{
    ui->sldr_S_min->setValue(arg1);
}


void MainWindow::on_sldr_S_max_valueChanged(int value)
{
    ui->spnBx_S_max->setValue(value);
}

void MainWindow::on_spnBx_S_max_valueChanged(int arg1)
{
    ui->sldr_S_max->setValue(arg1);
}


void MainWindow::on_sldr_V_min_valueChanged(int value)
{
    ui->spnBx_V_min->setValue(value);
}


void MainWindow::on_spnBx_V_min_valueChanged(int arg1)
{
    ui->sldr_V_min->setValue(arg1);
}


void MainWindow::on_sldr_V_max_valueChanged(int value)
{
    ui->spnBx_V_max->setValue(value);
}

void MainWindow::on_spnBx_V_max_valueChanged(int arg1)
{
    ui->sldr_V_max->setValue(arg1);
}

void MainWindow::on_sldr_GaussHeightKernel_valueChanged(int value)
{
    ui->spnBx_GaussHeightKernel->setValue(value);
}

void MainWindow::on_spnBx_GaussHeightKernel_valueChanged(int arg1)
{
    ui->sldr_GaussHeightKernel->setValue(arg1);
}

void MainWindow::on_sldr_GaussWidthKernel_valueChanged(int value)
{
    ui->spnBx_GaussWidthKernel->setValue(value);
}

void MainWindow::on_spnBx_GaussWidthKernel_valueChanged(int arg1)
{
    ui->sldr_GaussWidthKernel->setValue(arg1);
}

void MainWindow::on_sldr_GaussDeviationX_valueChanged(int value)
{
    ui->spnBx_GaussDeviationX->setValue(value);
}

void MainWindow::on_spnBx_GaussDeviationX_valueChanged(int arg1)
{
    ui->sldr_GaussDeviationX->setValue(arg1);
}

void MainWindow::on_sldr_GaussDeviationY_valueChanged(int value)
{
    ui->spnBx_GaussDeviationY->setValue(value);
}

void MainWindow::on_spnBx_GaussDeviationY_valueChanged(int arg1)
{
    ui->sldr_GaussDeviationY->setValue(arg1);
}

void MainWindow::on_sldr_MedianSizeKernel_valueChanged(int value)
{
    ui->spnBx_MedianSizeKernel->setValue(value);
}

void MainWindow::on_spnBx_MedianSizeKernel_valueChanged(int arg1)
{
    ui->sldr_MedianSizeKernel->setValue(arg1);
}

void MainWindow::on_sldr_DilationSizeKernel_valueChanged(int value)
{
    ui->spnBx_DilationSizeKernel->setValue(value);
}

void MainWindow::on_spnBx_DilationSizeKernel_valueChanged(int arg1)
{
    ui->sldr_DilationSizeKernel->setValue(arg1);
}

void MainWindow::on_sldr_DilationIteration_valueChanged(int value)
{
    ui->spnBx_DilationIteration->setValue(value);
}

void MainWindow::on_spnBx_DilationIteration_valueChanged(int arg1)
{
    ui->sldr_DilationIteration->setValue(arg1);
}

void MainWindow::on_sldr_ErosionSizeKernel_valueChanged(int value)
{
    ui->spnBx_ErosionSizeKernel->setValue(value);
}

void MainWindow::on_spnBx_ErosionSizeKernel_valueChanged(int arg1)
{
    ui->sldr_ErosionSizeKernel->setValue(arg1);
}

void MainWindow::on_sldr_ErosionIteration_valueChanged(int value)
{
    ui->spnBx_ErosionIteration->setValue(value);
}

void MainWindow::on_spnBx_ErosionIteration_valueChanged(int arg1)
{
    ui->sldr_ErosionIteration->setValue(arg1);
}

void MainWindow::on_sldr_ClosingSizeKernel_valueChanged(int value)
{
    ui->spnBx_ClosingSizeKernel->setValue(value);
}

void MainWindow::on_spnBx_ClosingSizeKernel_valueChanged(int arg1)
{
    ui->sldr_ClosingSizeKernel->setValue(arg1);
}

void MainWindow::on_sldr_ClosingIteration_valueChanged(int value)
{
    ui->spnBx_ClosingIteration->setValue(value);
}

void MainWindow::on_spnBx_ClosingIteration_valueChanged(int arg1)
{
    ui->sldr_ClosingIteration->setValue(arg1);
}

void MainWindow::on_sldr_OpeningSizeKernel_valueChanged(int value)
{
    ui->spnBx_OpeningSizeKernel->setValue(value);
}

void MainWindow::on_spnBx_OpeningSizeKernel_valueChanged(int arg1)
{
    ui->sldr_OpeningSizeKernel->setValue(arg1);
}

void MainWindow::on_sldr_OpeningIteration_valueChanged(int value)
{
    ui->spnBx_OpeningIteration->setValue(value);
}

void MainWindow::on_spnBx_OpeningIteration_valueChanged(int arg1)
{
    ui->sldr_OpeningIteration->setValue(arg1);
}
