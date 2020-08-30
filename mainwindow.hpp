#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include "contours.hpp"
#include "defects.hpp"
#include "handGesture.hpp"
#include "myImage.hpp"
#include "ui_mainwindow.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //VideoCapture capWebcam;
    Mat matOriginal;
    Mat matPreProcessed;
    Mat matProcessed;
    QImage qimgOriginal;
    QImage qimgPreProcessed;
    QImage qimgProcessed;
    QTimer *tmrTimer;
    MyImage m;
    HandGesture hg;
    Contours c;
    Defects df;
    int h_min, s_min, v_min, h_max, s_max, v_max;
    int GaussHeightKernel, GaussWidthKernel;
    int GaussDeviationX, GaussDeviationY;
    int MedianSizeKernel;
    Mat erodeElement, dilateElement, closeElement, openElement;
    int erodeIteration, dilateIteration, closeIteration, openIteration;
    QString strHand, strNumberOfDefects, strRectHeight, strRectWidth, strModeSelect;
    bool startGesture;
    int flagStart, applyMode;
    QString bool2Qstring(bool tf);

public slots:
    void processFrameAndUpdateGUI();

private slots:
    void on_sldr_H_min_valueChanged(int value);
    void on_spnBx_H_min_valueChanged(int arg1);
    void on_sldr_H_max_valueChanged(int value);
    void on_spnBx_H_max_valueChanged(int arg1);
    void on_sldr_S_min_valueChanged(int value);
    void on_spnBx_S_min_valueChanged(int arg1);
    void on_sldr_S_max_valueChanged(int value);
    void on_spnBx_S_max_valueChanged(int arg1);
    void on_sldr_V_min_valueChanged(int value);
    void on_spnBx_V_min_valueChanged(int arg1);
    void on_sldr_V_max_valueChanged(int value);
    void on_spnBx_V_max_valueChanged(int arg1);
    void on_sldr_GaussHeightKernel_valueChanged(int value);
    void on_spnBx_GaussHeightKernel_valueChanged(int arg1);
    void on_sldr_GaussWidthKernel_valueChanged(int value);
    void on_spnBx_GaussWidthKernel_valueChanged(int arg1);
    void on_sldr_GaussDeviationX_valueChanged(int value);
    void on_spnBx_GaussDeviationX_valueChanged(int arg1);
    void on_sldr_GaussDeviationY_valueChanged(int value);
    void on_spnBx_GaussDeviationY_valueChanged(int arg1);
    void on_sldr_MedianSizeKernel_valueChanged(int value);
    void on_spnBx_MedianSizeKernel_valueChanged(int arg1);
    void on_sldr_DilationSizeKernel_valueChanged(int value);
    void on_spnBx_DilationSizeKernel_valueChanged(int arg1);
    void on_sldr_DilationIteration_valueChanged(int value);
    void on_spnBx_DilationIteration_valueChanged(int arg1);
    void on_sldr_ErosionSizeKernel_valueChanged(int value);
    void on_spnBx_ErosionSizeKernel_valueChanged(int arg1);
    void on_sldr_ErosionIteration_valueChanged(int value);
    void on_spnBx_ErosionIteration_valueChanged(int arg1);
    void on_sldr_ClosingSizeKernel_valueChanged(int value);
    void on_spnBx_ClosingSizeKernel_valueChanged(int arg1);
    void on_sldr_ClosingIteration_valueChanged(int value);
    void on_spnBx_ClosingIteration_valueChanged(int arg1);
    void on_sldr_OpeningSizeKernel_valueChanged(int value);
    void on_spnBx_OpeningSizeKernel_valueChanged(int arg1);
    void on_sldr_OpeningIteration_valueChanged(int value);
    void on_spnBx_OpeningIteration_valueChanged(int arg1);
    void on_bttn_Pause_clicked();
    void on_bttn_Close_clicked();
    void on_bttn_Start_clicked();
};

#endif // MAINWINDOW_HPP
