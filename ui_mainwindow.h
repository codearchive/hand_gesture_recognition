/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *grpBx_4;
    QWidget *layoutWidget;
    QHBoxLayout *hrzntlLt_5;
    QLabel *lbl_H_min;
    QSlider *sldr_H_min;
    QSpinBox *spnBx_H_min;
    QWidget *layoutWidget1;
    QHBoxLayout *hrzntlLt_6;
    QLabel *lbl_H_max;
    QSlider *sldr_H_max;
    QSpinBox *spnBx_H_max;
    QWidget *layoutWidget2;
    QHBoxLayout *hrzntlLt_7;
    QLabel *lbl_S_min;
    QSlider *sldr_S_min;
    QSpinBox *spnBx_S_min;
    QWidget *layoutWidget3;
    QHBoxLayout *hrzntlLt_8;
    QLabel *lbl_S_max;
    QSlider *sldr_S_max;
    QSpinBox *spnBx_S_max;
    QWidget *layoutWidget4;
    QHBoxLayout *hrzntlLt_9;
    QLabel *lbl_V_min;
    QSlider *sldr_V_min;
    QSpinBox *spnBx_V_min;
    QWidget *layoutWidget5;
    QHBoxLayout *hrzntlLt_10;
    QLabel *lbl_V_max;
    QSlider *sldr_V_max;
    QSpinBox *spnBx_V_max;
    QGroupBox *grpBx_7;
    QWidget *layoutWidget6;
    QHBoxLayout *hrzntlLt_15;
    QLabel *lbl_MedianSizeKernel;
    QSlider *sldr_MedianSizeKernel;
    QSpinBox *spnBx_MedianSizeKernel;
    QGroupBox *grpBx_1;
    QLabel *lbl_Original;
    QGroupBox *grpBx_3;
    QLabel *lbl_PreProcessed;
    QGroupBox *grpBx_6;
    QLabel *lbl_Processed;
    QGroupBox *grpBx_5;
    QWidget *layoutWidget7;
    QHBoxLayout *hrzntlLt_11;
    QLabel *lbl_GaussHeightKernel;
    QSlider *sldr_GaussHeightKernel;
    QSpinBox *spnBx_GaussHeightKernel;
    QWidget *layoutWidget8;
    QHBoxLayout *hrzntlLt_12;
    QLabel *lbl_GaussWidthKernel;
    QSlider *sldr_GaussWidthKernel;
    QSpinBox *spnBx_GaussWidthKernel;
    QWidget *layoutWidget9;
    QHBoxLayout *hrzntlLt_13;
    QLabel *lbl_GaussDeviationX;
    QSlider *sldr_GaussDeviationX;
    QSpinBox *spnBx_GaussDeviationX;
    QWidget *layoutWidget10;
    QHBoxLayout *hrzntlLt_14;
    QLabel *lbl_GaussDeviationY;
    QSlider *sldr_GaussDeviationY;
    QSpinBox *spnBx_GaussDeviationY;
    QCheckBox *chckBx_GaussApply;
    QGroupBox *grpBx_8;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *layoutWidget_3;
    QHBoxLayout *hrzntlLt_16;
    QLabel *lbl_DilationSizeKernel;
    QSlider *sldr_DilationSizeKernel;
    QSpinBox *spnBx_DilationSizeKernel;
    QWidget *layoutWidget_4;
    QHBoxLayout *hrzntlLt_17;
    QLabel *lbl_DilationIteration;
    QSlider *sldr_DilationIteration;
    QSpinBox *spnBx_DilationIteration;
    QCheckBox *chckBx_DilationApply;
    QRadioButton *rdBttn_DilationRect;
    QRadioButton *rdBttn_DilationEllipse;
    QWidget *tab_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *hrzntlLt_18;
    QLabel *lbl_ErosionSizeKernel;
    QSlider *sldr_ErosionSizeKernel;
    QSpinBox *spnBx_ErosionSizeKernel;
    QCheckBox *chckBx_ErosionApply;
    QWidget *layoutWidget_6;
    QHBoxLayout *hrzntlLt_19;
    QLabel *lbl_ErosionIteration;
    QSlider *sldr_ErosionIteration;
    QSpinBox *spnBx_ErosionIteration;
    QRadioButton *rdBttn_ErosionRect;
    QRadioButton *rdBttn_ErosionEllipse;
    QTabWidget *tabWidget_2;
    QWidget *tab_11;
    QWidget *layoutWidget_23;
    QHBoxLayout *hrzntlLt_21;
    QLabel *lbl_ClosingIteration;
    QSlider *sldr_ClosingIteration;
    QSpinBox *spnBx_ClosingIteration;
    QCheckBox *chckBx_ClosingApply;
    QWidget *layoutWidget_24;
    QHBoxLayout *hrzntlLt_20;
    QLabel *lbl_ClosingSizeKernel;
    QSlider *sldr_ClosingSizeKernel;
    QSpinBox *spnBx_ClosingSizeKernel;
    QRadioButton *rdBttn_ClosingRect;
    QRadioButton *rdBttn_ClosingEllipse;
    QWidget *tab_21;
    QWidget *layoutWidget_25;
    QHBoxLayout *hrzntlLt_23;
    QLabel *lbl_OpeningIteration;
    QSlider *sldr_OpeningIteration;
    QSpinBox *spnBx_OpeningIteration;
    QWidget *layoutWidget_26;
    QHBoxLayout *hrzntlLt_22;
    QLabel *lbl_OpeningSizeKernel;
    QSlider *sldr_OpeningSizeKernel;
    QSpinBox *spnBx_OpeningSizeKernel;
    QCheckBox *chckBx_OpeningApply;
    QRadioButton *rdBttn_OpeningRect;
    QRadioButton *rdBttn_ClosingEllipse_2;
    QGroupBox *grpBx_2;
    QWidget *layoutWidget11;
    QHBoxLayout *hrzntlLt_1;
    QLabel *lbl_IsHand;
    QLineEdit *ln_Hand;
    QWidget *layoutWidget12;
    QHBoxLayout *hrzntlLt_2;
    QLabel *lbl_NumberOfDefects;
    QLineEdit *ln_NumberOfDefects;
    QWidget *layoutWidget13;
    QHBoxLayout *hrzntlLt_4;
    QLabel *lbl_Height;
    QLineEdit *ln_Height;
    QWidget *layoutWidget14;
    QHBoxLayout *hrzntlLt_3;
    QLabel *lbl_Width;
    QLineEdit *ln_Width;
    QPushButton *bttn_Start;
    QPushButton *bttn_Pause;
    QPushButton *bttn_Close;
    QGroupBox *groupBox;
    QRadioButton *rdBttn_GlobalBin;
    QRadioButton *rdBttn_Otsu;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1360, 680);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        grpBx_4 = new QGroupBox(centralWidget);
        grpBx_4->setObjectName(QStringLiteral("grpBx_4"));
        grpBx_4->setGeometry(QRect(672, 272, 337, 217));
        grpBx_4->setMinimumSize(QSize(337, 50));
        grpBx_4->setMaximumSize(QSize(320, 1000));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        grpBx_4->setFont(font);
        grpBx_4->setAcceptDrops(true);
        grpBx_4->setAutoFillBackground(false);
        grpBx_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        grpBx_4->setFlat(false);
        grpBx_4->setCheckable(false);
        grpBx_4->setChecked(false);
        layoutWidget = new QWidget(grpBx_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(7, 24, 321, 25));
        hrzntlLt_5 = new QHBoxLayout(layoutWidget);
        hrzntlLt_5->setSpacing(6);
        hrzntlLt_5->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_5->setObjectName(QStringLiteral("hrzntlLt_5"));
        hrzntlLt_5->setContentsMargins(0, 0, 0, 0);
        lbl_H_min = new QLabel(layoutWidget);
        lbl_H_min->setObjectName(QStringLiteral("lbl_H_min"));
        lbl_H_min->setMinimumSize(QSize(60, 20));
        lbl_H_min->setMaximumSize(QSize(60, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        lbl_H_min->setFont(font1);

        hrzntlLt_5->addWidget(lbl_H_min);

        sldr_H_min = new QSlider(layoutWidget);
        sldr_H_min->setObjectName(QStringLiteral("sldr_H_min"));
        sldr_H_min->setMinimumSize(QSize(0, 22));
        sldr_H_min->setMaximumSize(QSize(16777215, 22));
        QFont font2;
        font2.setPointSize(12);
        sldr_H_min->setFont(font2);
        sldr_H_min->setMaximum(256);
        sldr_H_min->setPageStep(17);
        sldr_H_min->setTracking(true);
        sldr_H_min->setOrientation(Qt::Horizontal);
        sldr_H_min->setTickPosition(QSlider::NoTicks);
        sldr_H_min->setTickInterval(0);

        hrzntlLt_5->addWidget(sldr_H_min);

        spnBx_H_min = new QSpinBox(layoutWidget);
        spnBx_H_min->setObjectName(QStringLiteral("spnBx_H_min"));
        spnBx_H_min->setMinimumSize(QSize(50, 20));
        spnBx_H_min->setMaximumSize(QSize(50, 20));
        spnBx_H_min->setFont(font1);
        spnBx_H_min->setMaximum(256);

        hrzntlLt_5->addWidget(spnBx_H_min);

        layoutWidget1 = new QWidget(grpBx_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(8, 56, 321, 25));
        hrzntlLt_6 = new QHBoxLayout(layoutWidget1);
        hrzntlLt_6->setSpacing(6);
        hrzntlLt_6->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_6->setObjectName(QStringLiteral("hrzntlLt_6"));
        hrzntlLt_6->setContentsMargins(0, 0, 0, 0);
        lbl_H_max = new QLabel(layoutWidget1);
        lbl_H_max->setObjectName(QStringLiteral("lbl_H_max"));
        lbl_H_max->setMinimumSize(QSize(60, 20));
        lbl_H_max->setMaximumSize(QSize(60, 20));
        lbl_H_max->setFont(font1);

        hrzntlLt_6->addWidget(lbl_H_max);

        sldr_H_max = new QSlider(layoutWidget1);
        sldr_H_max->setObjectName(QStringLiteral("sldr_H_max"));
        sldr_H_max->setMinimumSize(QSize(0, 22));
        sldr_H_max->setMaximumSize(QSize(16777215, 22));
        sldr_H_max->setFont(font2);
        sldr_H_max->setMaximum(256);
        sldr_H_max->setPageStep(17);
        sldr_H_max->setSliderPosition(256);
        sldr_H_max->setTracking(true);
        sldr_H_max->setOrientation(Qt::Horizontal);
        sldr_H_max->setTickPosition(QSlider::NoTicks);
        sldr_H_max->setTickInterval(0);

        hrzntlLt_6->addWidget(sldr_H_max);

        spnBx_H_max = new QSpinBox(layoutWidget1);
        spnBx_H_max->setObjectName(QStringLiteral("spnBx_H_max"));
        spnBx_H_max->setMinimumSize(QSize(50, 20));
        spnBx_H_max->setMaximumSize(QSize(50, 20));
        spnBx_H_max->setFont(font1);
        spnBx_H_max->setMaximum(256);
        spnBx_H_max->setValue(256);

        hrzntlLt_6->addWidget(spnBx_H_max);

        layoutWidget2 = new QWidget(grpBx_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(8, 88, 321, 25));
        hrzntlLt_7 = new QHBoxLayout(layoutWidget2);
        hrzntlLt_7->setSpacing(6);
        hrzntlLt_7->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_7->setObjectName(QStringLiteral("hrzntlLt_7"));
        hrzntlLt_7->setContentsMargins(0, 0, 0, 0);
        lbl_S_min = new QLabel(layoutWidget2);
        lbl_S_min->setObjectName(QStringLiteral("lbl_S_min"));
        lbl_S_min->setMinimumSize(QSize(60, 20));
        lbl_S_min->setMaximumSize(QSize(60, 20));
        lbl_S_min->setFont(font1);

        hrzntlLt_7->addWidget(lbl_S_min);

        sldr_S_min = new QSlider(layoutWidget2);
        sldr_S_min->setObjectName(QStringLiteral("sldr_S_min"));
        sldr_S_min->setMinimumSize(QSize(0, 22));
        sldr_S_min->setMaximumSize(QSize(16777215, 22));
        sldr_S_min->setFont(font2);
        sldr_S_min->setMaximum(256);
        sldr_S_min->setPageStep(17);
        sldr_S_min->setTracking(true);
        sldr_S_min->setOrientation(Qt::Horizontal);
        sldr_S_min->setTickPosition(QSlider::NoTicks);
        sldr_S_min->setTickInterval(0);

        hrzntlLt_7->addWidget(sldr_S_min);

        spnBx_S_min = new QSpinBox(layoutWidget2);
        spnBx_S_min->setObjectName(QStringLiteral("spnBx_S_min"));
        spnBx_S_min->setMinimumSize(QSize(50, 20));
        spnBx_S_min->setMaximumSize(QSize(50, 20));
        spnBx_S_min->setFont(font1);
        spnBx_S_min->setMaximum(256);

        hrzntlLt_7->addWidget(spnBx_S_min);

        layoutWidget3 = new QWidget(grpBx_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(8, 120, 321, 25));
        hrzntlLt_8 = new QHBoxLayout(layoutWidget3);
        hrzntlLt_8->setSpacing(6);
        hrzntlLt_8->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_8->setObjectName(QStringLiteral("hrzntlLt_8"));
        hrzntlLt_8->setContentsMargins(0, 0, 0, 0);
        lbl_S_max = new QLabel(layoutWidget3);
        lbl_S_max->setObjectName(QStringLiteral("lbl_S_max"));
        lbl_S_max->setMinimumSize(QSize(60, 20));
        lbl_S_max->setMaximumSize(QSize(60, 20));
        lbl_S_max->setFont(font1);

        hrzntlLt_8->addWidget(lbl_S_max);

        sldr_S_max = new QSlider(layoutWidget3);
        sldr_S_max->setObjectName(QStringLiteral("sldr_S_max"));
        sldr_S_max->setMinimumSize(QSize(0, 22));
        sldr_S_max->setMaximumSize(QSize(16777215, 22));
        sldr_S_max->setFont(font2);
        sldr_S_max->setMaximum(256);
        sldr_S_max->setPageStep(17);
        sldr_S_max->setSliderPosition(256);
        sldr_S_max->setTracking(true);
        sldr_S_max->setOrientation(Qt::Horizontal);
        sldr_S_max->setTickPosition(QSlider::NoTicks);
        sldr_S_max->setTickInterval(0);

        hrzntlLt_8->addWidget(sldr_S_max);

        spnBx_S_max = new QSpinBox(layoutWidget3);
        spnBx_S_max->setObjectName(QStringLiteral("spnBx_S_max"));
        spnBx_S_max->setMinimumSize(QSize(50, 20));
        spnBx_S_max->setMaximumSize(QSize(50, 20));
        spnBx_S_max->setFont(font1);
        spnBx_S_max->setMaximum(256);
        spnBx_S_max->setValue(256);

        hrzntlLt_8->addWidget(spnBx_S_max);

        layoutWidget4 = new QWidget(grpBx_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(8, 152, 321, 25));
        hrzntlLt_9 = new QHBoxLayout(layoutWidget4);
        hrzntlLt_9->setSpacing(6);
        hrzntlLt_9->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_9->setObjectName(QStringLiteral("hrzntlLt_9"));
        hrzntlLt_9->setContentsMargins(0, 0, 0, 0);
        lbl_V_min = new QLabel(layoutWidget4);
        lbl_V_min->setObjectName(QStringLiteral("lbl_V_min"));
        lbl_V_min->setMinimumSize(QSize(60, 20));
        lbl_V_min->setMaximumSize(QSize(60, 20));
        lbl_V_min->setFont(font1);

        hrzntlLt_9->addWidget(lbl_V_min);

        sldr_V_min = new QSlider(layoutWidget4);
        sldr_V_min->setObjectName(QStringLiteral("sldr_V_min"));
        sldr_V_min->setMinimumSize(QSize(0, 22));
        sldr_V_min->setMaximumSize(QSize(16777215, 22));
        sldr_V_min->setFont(font2);
        sldr_V_min->setMaximum(256);
        sldr_V_min->setPageStep(17);
        sldr_V_min->setTracking(true);
        sldr_V_min->setOrientation(Qt::Horizontal);
        sldr_V_min->setTickPosition(QSlider::NoTicks);
        sldr_V_min->setTickInterval(0);

        hrzntlLt_9->addWidget(sldr_V_min);

        spnBx_V_min = new QSpinBox(layoutWidget4);
        spnBx_V_min->setObjectName(QStringLiteral("spnBx_V_min"));
        spnBx_V_min->setMinimumSize(QSize(50, 20));
        spnBx_V_min->setMaximumSize(QSize(50, 20));
        spnBx_V_min->setFont(font1);
        spnBx_V_min->setMaximum(256);

        hrzntlLt_9->addWidget(spnBx_V_min);

        layoutWidget5 = new QWidget(grpBx_4);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(8, 184, 321, 25));
        hrzntlLt_10 = new QHBoxLayout(layoutWidget5);
        hrzntlLt_10->setSpacing(6);
        hrzntlLt_10->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_10->setObjectName(QStringLiteral("hrzntlLt_10"));
        hrzntlLt_10->setContentsMargins(0, 0, 0, 0);
        lbl_V_max = new QLabel(layoutWidget5);
        lbl_V_max->setObjectName(QStringLiteral("lbl_V_max"));
        lbl_V_max->setMinimumSize(QSize(60, 20));
        lbl_V_max->setMaximumSize(QSize(60, 20));
        lbl_V_max->setFont(font1);

        hrzntlLt_10->addWidget(lbl_V_max);

        sldr_V_max = new QSlider(layoutWidget5);
        sldr_V_max->setObjectName(QStringLiteral("sldr_V_max"));
        sldr_V_max->setMinimumSize(QSize(0, 22));
        sldr_V_max->setMaximumSize(QSize(16777215, 22));
        sldr_V_max->setFont(font2);
        sldr_V_max->setMaximum(256);
        sldr_V_max->setPageStep(17);
        sldr_V_max->setSliderPosition(256);
        sldr_V_max->setTracking(true);
        sldr_V_max->setOrientation(Qt::Horizontal);
        sldr_V_max->setTickPosition(QSlider::NoTicks);
        sldr_V_max->setTickInterval(0);

        hrzntlLt_10->addWidget(sldr_V_max);

        spnBx_V_max = new QSpinBox(layoutWidget5);
        spnBx_V_max->setObjectName(QStringLiteral("spnBx_V_max"));
        spnBx_V_max->setMinimumSize(QSize(50, 20));
        spnBx_V_max->setMaximumSize(QSize(50, 20));
        spnBx_V_max->setFont(font1);
        spnBx_V_max->setMaximum(256);
        spnBx_V_max->setValue(256);

        hrzntlLt_10->addWidget(spnBx_V_max);

        grpBx_7 = new QGroupBox(centralWidget);
        grpBx_7->setObjectName(QStringLiteral("grpBx_7"));
        grpBx_7->setGeometry(QRect(1016, 272, 337, 57));
        grpBx_7->setFont(font);
        grpBx_7->setAcceptDrops(true);
        layoutWidget6 = new QWidget(grpBx_7);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(9, 24, 321, 25));
        hrzntlLt_15 = new QHBoxLayout(layoutWidget6);
        hrzntlLt_15->setSpacing(6);
        hrzntlLt_15->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_15->setObjectName(QStringLiteral("hrzntlLt_15"));
        hrzntlLt_15->setContentsMargins(0, 0, 0, 0);
        lbl_MedianSizeKernel = new QLabel(layoutWidget6);
        lbl_MedianSizeKernel->setObjectName(QStringLiteral("lbl_MedianSizeKernel"));
        lbl_MedianSizeKernel->setFont(font1);

        hrzntlLt_15->addWidget(lbl_MedianSizeKernel);

        sldr_MedianSizeKernel = new QSlider(layoutWidget6);
        sldr_MedianSizeKernel->setObjectName(QStringLiteral("sldr_MedianSizeKernel"));
        sldr_MedianSizeKernel->setFont(font1);
        sldr_MedianSizeKernel->setMinimum(3);
        sldr_MedianSizeKernel->setSingleStep(2);
        sldr_MedianSizeKernel->setOrientation(Qt::Horizontal);
        sldr_MedianSizeKernel->setTickInterval(0);

        hrzntlLt_15->addWidget(sldr_MedianSizeKernel);

        spnBx_MedianSizeKernel = new QSpinBox(layoutWidget6);
        spnBx_MedianSizeKernel->setObjectName(QStringLiteral("spnBx_MedianSizeKernel"));
        spnBx_MedianSizeKernel->setMinimumSize(QSize(50, 20));
        spnBx_MedianSizeKernel->setMaximumSize(QSize(50, 20));
        spnBx_MedianSizeKernel->setFont(font1);
        spnBx_MedianSizeKernel->setMinimum(3);
        spnBx_MedianSizeKernel->setSingleStep(2);

        hrzntlLt_15->addWidget(spnBx_MedianSizeKernel);

        grpBx_1 = new QGroupBox(centralWidget);
        grpBx_1->setObjectName(QStringLiteral("grpBx_1"));
        grpBx_1->setGeometry(QRect(8, 0, 657, 513));
        grpBx_1->setFont(font);
        grpBx_1->setAcceptDrops(true);
        grpBx_1->setAutoFillBackground(false);
        lbl_Original = new QLabel(grpBx_1);
        lbl_Original->setObjectName(QStringLiteral("lbl_Original"));
        lbl_Original->setGeometry(QRect(8, 24, 640, 480));
        lbl_Original->setMinimumSize(QSize(640, 480));
        lbl_Original->setMaximumSize(QSize(640, 480));
        lbl_Original->setAutoFillBackground(true);
        grpBx_3 = new QGroupBox(centralWidget);
        grpBx_3->setObjectName(QStringLiteral("grpBx_3"));
        grpBx_3->setGeometry(QRect(672, 0, 337, 273));
        grpBx_3->setFont(font);
        grpBx_3->setAcceptDrops(true);
        lbl_PreProcessed = new QLabel(grpBx_3);
        lbl_PreProcessed->setObjectName(QStringLiteral("lbl_PreProcessed"));
        lbl_PreProcessed->setGeometry(QRect(8, 24, 320, 240));
        lbl_PreProcessed->setMinimumSize(QSize(320, 240));
        lbl_PreProcessed->setMaximumSize(QSize(320, 240));
        lbl_PreProcessed->setAutoFillBackground(true);
        grpBx_6 = new QGroupBox(centralWidget);
        grpBx_6->setObjectName(QStringLiteral("grpBx_6"));
        grpBx_6->setGeometry(QRect(1016, 0, 337, 273));
        grpBx_6->setFont(font);
        grpBx_6->setAcceptDrops(true);
        grpBx_6->setAutoFillBackground(false);
        lbl_Processed = new QLabel(grpBx_6);
        lbl_Processed->setObjectName(QStringLiteral("lbl_Processed"));
        lbl_Processed->setEnabled(true);
        lbl_Processed->setGeometry(QRect(8, 24, 320, 240));
        lbl_Processed->setMinimumSize(QSize(320, 240));
        lbl_Processed->setMaximumSize(QSize(320, 240));
        lbl_Processed->setAutoFillBackground(true);
        grpBx_5 = new QGroupBox(centralWidget);
        grpBx_5->setObjectName(QStringLiteral("grpBx_5"));
        grpBx_5->setGeometry(QRect(672, 488, 337, 185));
        grpBx_5->setFont(font);
        grpBx_5->setCheckable(false);
        grpBx_5->setChecked(false);
        layoutWidget7 = new QWidget(grpBx_5);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(8, 56, 321, 25));
        hrzntlLt_11 = new QHBoxLayout(layoutWidget7);
        hrzntlLt_11->setSpacing(6);
        hrzntlLt_11->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_11->setObjectName(QStringLiteral("hrzntlLt_11"));
        hrzntlLt_11->setContentsMargins(0, 0, 0, 0);
        lbl_GaussHeightKernel = new QLabel(layoutWidget7);
        lbl_GaussHeightKernel->setObjectName(QStringLiteral("lbl_GaussHeightKernel"));
        lbl_GaussHeightKernel->setMinimumSize(QSize(130, 20));
        lbl_GaussHeightKernel->setMaximumSize(QSize(130, 20));
        lbl_GaussHeightKernel->setFont(font1);

        hrzntlLt_11->addWidget(lbl_GaussHeightKernel);

        sldr_GaussHeightKernel = new QSlider(layoutWidget7);
        sldr_GaussHeightKernel->setObjectName(QStringLiteral("sldr_GaussHeightKernel"));
        sldr_GaussHeightKernel->setFont(font1);
        sldr_GaussHeightKernel->setSingleStep(1);
        sldr_GaussHeightKernel->setValue(0);
        sldr_GaussHeightKernel->setOrientation(Qt::Horizontal);

        hrzntlLt_11->addWidget(sldr_GaussHeightKernel);

        spnBx_GaussHeightKernel = new QSpinBox(layoutWidget7);
        spnBx_GaussHeightKernel->setObjectName(QStringLiteral("spnBx_GaussHeightKernel"));
        spnBx_GaussHeightKernel->setMinimumSize(QSize(50, 20));
        spnBx_GaussHeightKernel->setMaximumSize(QSize(50, 20));
        spnBx_GaussHeightKernel->setFont(font1);

        hrzntlLt_11->addWidget(spnBx_GaussHeightKernel);

        layoutWidget8 = new QWidget(grpBx_5);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(8, 88, 321, 25));
        hrzntlLt_12 = new QHBoxLayout(layoutWidget8);
        hrzntlLt_12->setSpacing(6);
        hrzntlLt_12->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_12->setObjectName(QStringLiteral("hrzntlLt_12"));
        hrzntlLt_12->setContentsMargins(0, 0, 0, 0);
        lbl_GaussWidthKernel = new QLabel(layoutWidget8);
        lbl_GaussWidthKernel->setObjectName(QStringLiteral("lbl_GaussWidthKernel"));
        lbl_GaussWidthKernel->setMinimumSize(QSize(130, 20));
        lbl_GaussWidthKernel->setMaximumSize(QSize(130, 20));
        lbl_GaussWidthKernel->setFont(font1);

        hrzntlLt_12->addWidget(lbl_GaussWidthKernel);

        sldr_GaussWidthKernel = new QSlider(layoutWidget8);
        sldr_GaussWidthKernel->setObjectName(QStringLiteral("sldr_GaussWidthKernel"));
        sldr_GaussWidthKernel->setFont(font1);
        sldr_GaussWidthKernel->setOrientation(Qt::Horizontal);

        hrzntlLt_12->addWidget(sldr_GaussWidthKernel);

        spnBx_GaussWidthKernel = new QSpinBox(layoutWidget8);
        spnBx_GaussWidthKernel->setObjectName(QStringLiteral("spnBx_GaussWidthKernel"));
        spnBx_GaussWidthKernel->setMinimumSize(QSize(50, 20));
        spnBx_GaussWidthKernel->setMaximumSize(QSize(50, 20));
        spnBx_GaussWidthKernel->setFont(font1);

        hrzntlLt_12->addWidget(spnBx_GaussWidthKernel);

        layoutWidget9 = new QWidget(grpBx_5);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(8, 120, 321, 25));
        hrzntlLt_13 = new QHBoxLayout(layoutWidget9);
        hrzntlLt_13->setSpacing(6);
        hrzntlLt_13->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_13->setObjectName(QStringLiteral("hrzntlLt_13"));
        hrzntlLt_13->setContentsMargins(0, 0, 0, 0);
        lbl_GaussDeviationX = new QLabel(layoutWidget9);
        lbl_GaussDeviationX->setObjectName(QStringLiteral("lbl_GaussDeviationX"));
        lbl_GaussDeviationX->setMinimumSize(QSize(130, 20));
        lbl_GaussDeviationX->setMaximumSize(QSize(130, 20));
        lbl_GaussDeviationX->setFont(font1);

        hrzntlLt_13->addWidget(lbl_GaussDeviationX);

        sldr_GaussDeviationX = new QSlider(layoutWidget9);
        sldr_GaussDeviationX->setObjectName(QStringLiteral("sldr_GaussDeviationX"));
        sldr_GaussDeviationX->setFont(font1);
        sldr_GaussDeviationX->setOrientation(Qt::Horizontal);

        hrzntlLt_13->addWidget(sldr_GaussDeviationX);

        spnBx_GaussDeviationX = new QSpinBox(layoutWidget9);
        spnBx_GaussDeviationX->setObjectName(QStringLiteral("spnBx_GaussDeviationX"));
        spnBx_GaussDeviationX->setMinimumSize(QSize(50, 20));
        spnBx_GaussDeviationX->setMaximumSize(QSize(50, 20));
        spnBx_GaussDeviationX->setFont(font1);

        hrzntlLt_13->addWidget(spnBx_GaussDeviationX);

        layoutWidget10 = new QWidget(grpBx_5);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(8, 152, 321, 25));
        hrzntlLt_14 = new QHBoxLayout(layoutWidget10);
        hrzntlLt_14->setSpacing(6);
        hrzntlLt_14->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_14->setObjectName(QStringLiteral("hrzntlLt_14"));
        hrzntlLt_14->setContentsMargins(0, 0, 0, 0);
        lbl_GaussDeviationY = new QLabel(layoutWidget10);
        lbl_GaussDeviationY->setObjectName(QStringLiteral("lbl_GaussDeviationY"));
        lbl_GaussDeviationY->setMinimumSize(QSize(130, 20));
        lbl_GaussDeviationY->setMaximumSize(QSize(130, 20));
        lbl_GaussDeviationY->setFont(font1);

        hrzntlLt_14->addWidget(lbl_GaussDeviationY);

        sldr_GaussDeviationY = new QSlider(layoutWidget10);
        sldr_GaussDeviationY->setObjectName(QStringLiteral("sldr_GaussDeviationY"));
        sldr_GaussDeviationY->setFont(font1);
        sldr_GaussDeviationY->setOrientation(Qt::Horizontal);

        hrzntlLt_14->addWidget(sldr_GaussDeviationY);

        spnBx_GaussDeviationY = new QSpinBox(layoutWidget10);
        spnBx_GaussDeviationY->setObjectName(QStringLiteral("spnBx_GaussDeviationY"));
        spnBx_GaussDeviationY->setMinimumSize(QSize(50, 20));
        spnBx_GaussDeviationY->setMaximumSize(QSize(50, 20));
        spnBx_GaussDeviationY->setFont(font1);

        hrzntlLt_14->addWidget(spnBx_GaussDeviationY);

        chckBx_GaussApply = new QCheckBox(grpBx_5);
        chckBx_GaussApply->setObjectName(QStringLiteral("chckBx_GaussApply"));
        chckBx_GaussApply->setGeometry(QRect(8, 24, 105, 25));
        chckBx_GaussApply->setMinimumSize(QSize(105, 25));
        chckBx_GaussApply->setMaximumSize(QSize(105, 20));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        chckBx_GaussApply->setFont(font3);
        grpBx_8 = new QGroupBox(centralWidget);
        grpBx_8->setObjectName(QStringLiteral("grpBx_8"));
        grpBx_8->setGeometry(QRect(1016, 328, 337, 313));
        grpBx_8->setFont(font);
        grpBx_8->setCheckable(false);
        grpBx_8->setChecked(false);
        tabWidget = new QTabWidget(grpBx_8);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(8, 24, 321, 137));
        tabWidget->setFont(font1);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        layoutWidget_3 = new QWidget(tab_1);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(8, 40, 297, 25));
        hrzntlLt_16 = new QHBoxLayout(layoutWidget_3);
        hrzntlLt_16->setSpacing(6);
        hrzntlLt_16->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_16->setObjectName(QStringLiteral("hrzntlLt_16"));
        hrzntlLt_16->setContentsMargins(0, 0, 0, 0);
        lbl_DilationSizeKernel = new QLabel(layoutWidget_3);
        lbl_DilationSizeKernel->setObjectName(QStringLiteral("lbl_DilationSizeKernel"));
        lbl_DilationSizeKernel->setMinimumSize(QSize(118, 20));
        lbl_DilationSizeKernel->setMaximumSize(QSize(118, 20));
        lbl_DilationSizeKernel->setFont(font1);

        hrzntlLt_16->addWidget(lbl_DilationSizeKernel);

        sldr_DilationSizeKernel = new QSlider(layoutWidget_3);
        sldr_DilationSizeKernel->setObjectName(QStringLiteral("sldr_DilationSizeKernel"));
        sldr_DilationSizeKernel->setFont(font1);
        sldr_DilationSizeKernel->setMinimum(1);
        sldr_DilationSizeKernel->setOrientation(Qt::Horizontal);

        hrzntlLt_16->addWidget(sldr_DilationSizeKernel);

        spnBx_DilationSizeKernel = new QSpinBox(layoutWidget_3);
        spnBx_DilationSizeKernel->setObjectName(QStringLiteral("spnBx_DilationSizeKernel"));
        spnBx_DilationSizeKernel->setMinimumSize(QSize(50, 20));
        spnBx_DilationSizeKernel->setMaximumSize(QSize(50, 20));
        spnBx_DilationSizeKernel->setFont(font1);
        spnBx_DilationSizeKernel->setMinimum(1);
        spnBx_DilationSizeKernel->setValue(1);

        hrzntlLt_16->addWidget(spnBx_DilationSizeKernel);

        layoutWidget_4 = new QWidget(tab_1);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(8, 72, 297, 25));
        hrzntlLt_17 = new QHBoxLayout(layoutWidget_4);
        hrzntlLt_17->setSpacing(6);
        hrzntlLt_17->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_17->setObjectName(QStringLiteral("hrzntlLt_17"));
        hrzntlLt_17->setContentsMargins(0, 0, 0, 0);
        lbl_DilationIteration = new QLabel(layoutWidget_4);
        lbl_DilationIteration->setObjectName(QStringLiteral("lbl_DilationIteration"));
        lbl_DilationIteration->setMinimumSize(QSize(118, 20));
        lbl_DilationIteration->setMaximumSize(QSize(118, 20));
        lbl_DilationIteration->setFont(font1);

        hrzntlLt_17->addWidget(lbl_DilationIteration);

        sldr_DilationIteration = new QSlider(layoutWidget_4);
        sldr_DilationIteration->setObjectName(QStringLiteral("sldr_DilationIteration"));
        sldr_DilationIteration->setFont(font1);
        sldr_DilationIteration->setMinimum(1);
        sldr_DilationIteration->setOrientation(Qt::Horizontal);

        hrzntlLt_17->addWidget(sldr_DilationIteration);

        spnBx_DilationIteration = new QSpinBox(layoutWidget_4);
        spnBx_DilationIteration->setObjectName(QStringLiteral("spnBx_DilationIteration"));
        spnBx_DilationIteration->setMinimumSize(QSize(50, 20));
        spnBx_DilationIteration->setMaximumSize(QSize(50, 20));
        spnBx_DilationIteration->setFont(font1);
        spnBx_DilationIteration->setMinimum(1);

        hrzntlLt_17->addWidget(spnBx_DilationIteration);

        chckBx_DilationApply = new QCheckBox(tab_1);
        chckBx_DilationApply->setObjectName(QStringLiteral("chckBx_DilationApply"));
        chckBx_DilationApply->setGeometry(QRect(8, 8, 105, 25));
        chckBx_DilationApply->setMinimumSize(QSize(105, 25));
        chckBx_DilationApply->setMaximumSize(QSize(105, 20));
        chckBx_DilationApply->setFont(font3);
        rdBttn_DilationRect = new QRadioButton(tab_1);
        rdBttn_DilationRect->setObjectName(QStringLiteral("rdBttn_DilationRect"));
        rdBttn_DilationRect->setGeometry(QRect(152, 8, 82, 25));
        rdBttn_DilationRect->setChecked(true);
        rdBttn_DilationEllipse = new QRadioButton(tab_1);
        rdBttn_DilationEllipse->setObjectName(QStringLiteral("rdBttn_DilationEllipse"));
        rdBttn_DilationEllipse->setGeometry(QRect(240, 8, 65, 25));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget_5 = new QWidget(tab_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(8, 40, 297, 25));
        hrzntlLt_18 = new QHBoxLayout(layoutWidget_5);
        hrzntlLt_18->setSpacing(6);
        hrzntlLt_18->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_18->setObjectName(QStringLiteral("hrzntlLt_18"));
        hrzntlLt_18->setContentsMargins(0, 0, 0, 0);
        lbl_ErosionSizeKernel = new QLabel(layoutWidget_5);
        lbl_ErosionSizeKernel->setObjectName(QStringLiteral("lbl_ErosionSizeKernel"));
        lbl_ErosionSizeKernel->setMinimumSize(QSize(118, 20));
        lbl_ErosionSizeKernel->setMaximumSize(QSize(118, 20));
        lbl_ErosionSizeKernel->setFont(font1);

        hrzntlLt_18->addWidget(lbl_ErosionSizeKernel);

        sldr_ErosionSizeKernel = new QSlider(layoutWidget_5);
        sldr_ErosionSizeKernel->setObjectName(QStringLiteral("sldr_ErosionSizeKernel"));
        sldr_ErosionSizeKernel->setFont(font1);
        sldr_ErosionSizeKernel->setMinimum(1);
        sldr_ErosionSizeKernel->setOrientation(Qt::Horizontal);

        hrzntlLt_18->addWidget(sldr_ErosionSizeKernel);

        spnBx_ErosionSizeKernel = new QSpinBox(layoutWidget_5);
        spnBx_ErosionSizeKernel->setObjectName(QStringLiteral("spnBx_ErosionSizeKernel"));
        spnBx_ErosionSizeKernel->setMinimumSize(QSize(50, 20));
        spnBx_ErosionSizeKernel->setMaximumSize(QSize(50, 20));
        spnBx_ErosionSizeKernel->setFont(font1);
        spnBx_ErosionSizeKernel->setMinimum(1);

        hrzntlLt_18->addWidget(spnBx_ErosionSizeKernel);

        chckBx_ErosionApply = new QCheckBox(tab_2);
        chckBx_ErosionApply->setObjectName(QStringLiteral("chckBx_ErosionApply"));
        chckBx_ErosionApply->setGeometry(QRect(8, 8, 105, 25));
        chckBx_ErosionApply->setMinimumSize(QSize(105, 25));
        chckBx_ErosionApply->setMaximumSize(QSize(105, 20));
        layoutWidget_6 = new QWidget(tab_2);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(8, 72, 297, 25));
        hrzntlLt_19 = new QHBoxLayout(layoutWidget_6);
        hrzntlLt_19->setSpacing(6);
        hrzntlLt_19->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_19->setObjectName(QStringLiteral("hrzntlLt_19"));
        hrzntlLt_19->setContentsMargins(0, 0, 0, 0);
        lbl_ErosionIteration = new QLabel(layoutWidget_6);
        lbl_ErosionIteration->setObjectName(QStringLiteral("lbl_ErosionIteration"));
        lbl_ErosionIteration->setMinimumSize(QSize(118, 20));
        lbl_ErosionIteration->setMaximumSize(QSize(118, 20));
        lbl_ErosionIteration->setFont(font1);

        hrzntlLt_19->addWidget(lbl_ErosionIteration);

        sldr_ErosionIteration = new QSlider(layoutWidget_6);
        sldr_ErosionIteration->setObjectName(QStringLiteral("sldr_ErosionIteration"));
        sldr_ErosionIteration->setFont(font1);
        sldr_ErosionIteration->setMinimum(1);
        sldr_ErosionIteration->setOrientation(Qt::Horizontal);

        hrzntlLt_19->addWidget(sldr_ErosionIteration);

        spnBx_ErosionIteration = new QSpinBox(layoutWidget_6);
        spnBx_ErosionIteration->setObjectName(QStringLiteral("spnBx_ErosionIteration"));
        spnBx_ErosionIteration->setMinimumSize(QSize(50, 20));
        spnBx_ErosionIteration->setMaximumSize(QSize(50, 20));
        spnBx_ErosionIteration->setFont(font1);
        spnBx_ErosionIteration->setMinimum(1);

        hrzntlLt_19->addWidget(spnBx_ErosionIteration);

        rdBttn_ErosionRect = new QRadioButton(tab_2);
        rdBttn_ErosionRect->setObjectName(QStringLiteral("rdBttn_ErosionRect"));
        rdBttn_ErosionRect->setGeometry(QRect(152, 8, 82, 25));
        rdBttn_ErosionRect->setChecked(true);
        rdBttn_ErosionEllipse = new QRadioButton(tab_2);
        rdBttn_ErosionEllipse->setObjectName(QStringLiteral("rdBttn_ErosionEllipse"));
        rdBttn_ErosionEllipse->setGeometry(QRect(240, 8, 65, 25));
        tabWidget->addTab(tab_2, QString());
        tabWidget_2 = new QTabWidget(grpBx_8);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(8, 168, 321, 137));
        tabWidget_2->setFont(font1);
        tabWidget_2->setTabPosition(QTabWidget::North);
        tabWidget_2->setElideMode(Qt::ElideNone);
        tabWidget_2->setUsesScrollButtons(true);
        tabWidget_2->setDocumentMode(false);
        tabWidget_2->setTabsClosable(false);
        tabWidget_2->setMovable(false);
        tabWidget_2->setTabBarAutoHide(false);
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        layoutWidget_23 = new QWidget(tab_11);
        layoutWidget_23->setObjectName(QStringLiteral("layoutWidget_23"));
        layoutWidget_23->setGeometry(QRect(8, 72, 297, 25));
        hrzntlLt_21 = new QHBoxLayout(layoutWidget_23);
        hrzntlLt_21->setSpacing(6);
        hrzntlLt_21->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_21->setObjectName(QStringLiteral("hrzntlLt_21"));
        hrzntlLt_21->setContentsMargins(0, 0, 0, 0);
        lbl_ClosingIteration = new QLabel(layoutWidget_23);
        lbl_ClosingIteration->setObjectName(QStringLiteral("lbl_ClosingIteration"));
        lbl_ClosingIteration->setMinimumSize(QSize(118, 20));
        lbl_ClosingIteration->setMaximumSize(QSize(118, 20));
        lbl_ClosingIteration->setFont(font1);

        hrzntlLt_21->addWidget(lbl_ClosingIteration);

        sldr_ClosingIteration = new QSlider(layoutWidget_23);
        sldr_ClosingIteration->setObjectName(QStringLiteral("sldr_ClosingIteration"));
        sldr_ClosingIteration->setFont(font1);
        sldr_ClosingIteration->setMinimum(1);
        sldr_ClosingIteration->setOrientation(Qt::Horizontal);

        hrzntlLt_21->addWidget(sldr_ClosingIteration);

        spnBx_ClosingIteration = new QSpinBox(layoutWidget_23);
        spnBx_ClosingIteration->setObjectName(QStringLiteral("spnBx_ClosingIteration"));
        spnBx_ClosingIteration->setMinimumSize(QSize(50, 20));
        spnBx_ClosingIteration->setMaximumSize(QSize(50, 20));
        spnBx_ClosingIteration->setFont(font1);
        spnBx_ClosingIteration->setMinimum(1);

        hrzntlLt_21->addWidget(spnBx_ClosingIteration);

        chckBx_ClosingApply = new QCheckBox(tab_11);
        chckBx_ClosingApply->setObjectName(QStringLiteral("chckBx_ClosingApply"));
        chckBx_ClosingApply->setGeometry(QRect(8, 8, 105, 25));
        chckBx_ClosingApply->setMinimumSize(QSize(105, 25));
        chckBx_ClosingApply->setMaximumSize(QSize(105, 20));
        layoutWidget_24 = new QWidget(tab_11);
        layoutWidget_24->setObjectName(QStringLiteral("layoutWidget_24"));
        layoutWidget_24->setGeometry(QRect(8, 40, 297, 25));
        hrzntlLt_20 = new QHBoxLayout(layoutWidget_24);
        hrzntlLt_20->setSpacing(6);
        hrzntlLt_20->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_20->setObjectName(QStringLiteral("hrzntlLt_20"));
        hrzntlLt_20->setContentsMargins(0, 0, 0, 0);
        lbl_ClosingSizeKernel = new QLabel(layoutWidget_24);
        lbl_ClosingSizeKernel->setObjectName(QStringLiteral("lbl_ClosingSizeKernel"));
        lbl_ClosingSizeKernel->setMinimumSize(QSize(118, 20));
        lbl_ClosingSizeKernel->setMaximumSize(QSize(118, 20));
        lbl_ClosingSizeKernel->setFont(font1);

        hrzntlLt_20->addWidget(lbl_ClosingSizeKernel);

        sldr_ClosingSizeKernel = new QSlider(layoutWidget_24);
        sldr_ClosingSizeKernel->setObjectName(QStringLiteral("sldr_ClosingSizeKernel"));
        sldr_ClosingSizeKernel->setFont(font1);
        sldr_ClosingSizeKernel->setMinimum(2);
        sldr_ClosingSizeKernel->setOrientation(Qt::Horizontal);

        hrzntlLt_20->addWidget(sldr_ClosingSizeKernel);

        spnBx_ClosingSizeKernel = new QSpinBox(layoutWidget_24);
        spnBx_ClosingSizeKernel->setObjectName(QStringLiteral("spnBx_ClosingSizeKernel"));
        spnBx_ClosingSizeKernel->setMinimumSize(QSize(50, 20));
        spnBx_ClosingSizeKernel->setMaximumSize(QSize(50, 20));
        spnBx_ClosingSizeKernel->setFont(font1);
        spnBx_ClosingSizeKernel->setMinimum(2);

        hrzntlLt_20->addWidget(spnBx_ClosingSizeKernel);

        rdBttn_ClosingRect = new QRadioButton(tab_11);
        rdBttn_ClosingRect->setObjectName(QStringLiteral("rdBttn_ClosingRect"));
        rdBttn_ClosingRect->setGeometry(QRect(152, 8, 82, 25));
        rdBttn_ClosingRect->setChecked(true);
        rdBttn_ClosingEllipse = new QRadioButton(tab_11);
        rdBttn_ClosingEllipse->setObjectName(QStringLiteral("rdBttn_ClosingEllipse"));
        rdBttn_ClosingEllipse->setGeometry(QRect(240, 8, 65, 25));
        tabWidget_2->addTab(tab_11, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        layoutWidget_25 = new QWidget(tab_21);
        layoutWidget_25->setObjectName(QStringLiteral("layoutWidget_25"));
        layoutWidget_25->setGeometry(QRect(8, 72, 297, 25));
        hrzntlLt_23 = new QHBoxLayout(layoutWidget_25);
        hrzntlLt_23->setSpacing(6);
        hrzntlLt_23->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_23->setObjectName(QStringLiteral("hrzntlLt_23"));
        hrzntlLt_23->setContentsMargins(0, 0, 0, 0);
        lbl_OpeningIteration = new QLabel(layoutWidget_25);
        lbl_OpeningIteration->setObjectName(QStringLiteral("lbl_OpeningIteration"));
        lbl_OpeningIteration->setMinimumSize(QSize(118, 20));
        lbl_OpeningIteration->setMaximumSize(QSize(118, 20));
        lbl_OpeningIteration->setFont(font1);

        hrzntlLt_23->addWidget(lbl_OpeningIteration);

        sldr_OpeningIteration = new QSlider(layoutWidget_25);
        sldr_OpeningIteration->setObjectName(QStringLiteral("sldr_OpeningIteration"));
        sldr_OpeningIteration->setFont(font1);
        sldr_OpeningIteration->setMinimum(1);
        sldr_OpeningIteration->setOrientation(Qt::Horizontal);

        hrzntlLt_23->addWidget(sldr_OpeningIteration);

        spnBx_OpeningIteration = new QSpinBox(layoutWidget_25);
        spnBx_OpeningIteration->setObjectName(QStringLiteral("spnBx_OpeningIteration"));
        spnBx_OpeningIteration->setMinimumSize(QSize(50, 20));
        spnBx_OpeningIteration->setMaximumSize(QSize(50, 20));
        spnBx_OpeningIteration->setFont(font1);
        spnBx_OpeningIteration->setMinimum(1);

        hrzntlLt_23->addWidget(spnBx_OpeningIteration);

        layoutWidget_26 = new QWidget(tab_21);
        layoutWidget_26->setObjectName(QStringLiteral("layoutWidget_26"));
        layoutWidget_26->setGeometry(QRect(8, 40, 297, 25));
        hrzntlLt_22 = new QHBoxLayout(layoutWidget_26);
        hrzntlLt_22->setSpacing(6);
        hrzntlLt_22->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_22->setObjectName(QStringLiteral("hrzntlLt_22"));
        hrzntlLt_22->setContentsMargins(0, 0, 0, 0);
        lbl_OpeningSizeKernel = new QLabel(layoutWidget_26);
        lbl_OpeningSizeKernel->setObjectName(QStringLiteral("lbl_OpeningSizeKernel"));
        lbl_OpeningSizeKernel->setMinimumSize(QSize(118, 20));
        lbl_OpeningSizeKernel->setMaximumSize(QSize(118, 20));
        lbl_OpeningSizeKernel->setFont(font1);

        hrzntlLt_22->addWidget(lbl_OpeningSizeKernel);

        sldr_OpeningSizeKernel = new QSlider(layoutWidget_26);
        sldr_OpeningSizeKernel->setObjectName(QStringLiteral("sldr_OpeningSizeKernel"));
        sldr_OpeningSizeKernel->setFont(font1);
        sldr_OpeningSizeKernel->setMinimum(2);
        sldr_OpeningSizeKernel->setOrientation(Qt::Horizontal);

        hrzntlLt_22->addWidget(sldr_OpeningSizeKernel);

        spnBx_OpeningSizeKernel = new QSpinBox(layoutWidget_26);
        spnBx_OpeningSizeKernel->setObjectName(QStringLiteral("spnBx_OpeningSizeKernel"));
        spnBx_OpeningSizeKernel->setMinimumSize(QSize(50, 20));
        spnBx_OpeningSizeKernel->setMaximumSize(QSize(50, 20));
        spnBx_OpeningSizeKernel->setFont(font1);
        spnBx_OpeningSizeKernel->setMinimum(2);

        hrzntlLt_22->addWidget(spnBx_OpeningSizeKernel);

        chckBx_OpeningApply = new QCheckBox(tab_21);
        chckBx_OpeningApply->setObjectName(QStringLiteral("chckBx_OpeningApply"));
        chckBx_OpeningApply->setGeometry(QRect(8, 8, 105, 25));
        chckBx_OpeningApply->setMinimumSize(QSize(105, 25));
        chckBx_OpeningApply->setMaximumSize(QSize(105, 20));
        rdBttn_OpeningRect = new QRadioButton(tab_21);
        rdBttn_OpeningRect->setObjectName(QStringLiteral("rdBttn_OpeningRect"));
        rdBttn_OpeningRect->setGeometry(QRect(152, 8, 82, 25));
        rdBttn_OpeningRect->setChecked(true);
        rdBttn_ClosingEllipse_2 = new QRadioButton(tab_21);
        rdBttn_ClosingEllipse_2->setObjectName(QStringLiteral("rdBttn_ClosingEllipse_2"));
        rdBttn_ClosingEllipse_2->setGeometry(QRect(240, 8, 65, 25));
        tabWidget_2->addTab(tab_21, QString());
        grpBx_2 = new QGroupBox(centralWidget);
        grpBx_2->setObjectName(QStringLiteral("grpBx_2"));
        grpBx_2->setGeometry(QRect(8, 520, 233, 153));
        grpBx_2->setFont(font);
        grpBx_2->setAutoFillBackground(false);
        layoutWidget11 = new QWidget(grpBx_2);
        layoutWidget11->setObjectName(QStringLiteral("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(8, 24, 220, 25));
        hrzntlLt_1 = new QHBoxLayout(layoutWidget11);
        hrzntlLt_1->setSpacing(6);
        hrzntlLt_1->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_1->setObjectName(QStringLiteral("hrzntlLt_1"));
        hrzntlLt_1->setContentsMargins(0, 0, 0, 0);
        lbl_IsHand = new QLabel(layoutWidget11);
        lbl_IsHand->setObjectName(QStringLiteral("lbl_IsHand"));
        lbl_IsHand->setMinimumSize(QSize(162, 20));
        lbl_IsHand->setMaximumSize(QSize(162, 20));
        lbl_IsHand->setFont(font1);

        hrzntlLt_1->addWidget(lbl_IsHand);

        ln_Hand = new QLineEdit(layoutWidget11);
        ln_Hand->setObjectName(QStringLiteral("ln_Hand"));
        ln_Hand->setMinimumSize(QSize(50, 20));
        ln_Hand->setMaximumSize(QSize(50, 20));
        ln_Hand->setFont(font1);
        ln_Hand->setReadOnly(true);

        hrzntlLt_1->addWidget(ln_Hand);

        layoutWidget12 = new QWidget(grpBx_2);
        layoutWidget12->setObjectName(QStringLiteral("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(8, 56, 220, 25));
        hrzntlLt_2 = new QHBoxLayout(layoutWidget12);
        hrzntlLt_2->setSpacing(6);
        hrzntlLt_2->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_2->setObjectName(QStringLiteral("hrzntlLt_2"));
        hrzntlLt_2->setContentsMargins(0, 0, 0, 0);
        lbl_NumberOfDefects = new QLabel(layoutWidget12);
        lbl_NumberOfDefects->setObjectName(QStringLiteral("lbl_NumberOfDefects"));
        lbl_NumberOfDefects->setMinimumSize(QSize(162, 20));
        lbl_NumberOfDefects->setMaximumSize(QSize(162, 20));
        lbl_NumberOfDefects->setFont(font1);
        lbl_NumberOfDefects->setWordWrap(false);

        hrzntlLt_2->addWidget(lbl_NumberOfDefects);

        ln_NumberOfDefects = new QLineEdit(layoutWidget12);
        ln_NumberOfDefects->setObjectName(QStringLiteral("ln_NumberOfDefects"));
        ln_NumberOfDefects->setMinimumSize(QSize(50, 20));
        ln_NumberOfDefects->setMaximumSize(QSize(50, 20));
        ln_NumberOfDefects->setFont(font1);

        hrzntlLt_2->addWidget(ln_NumberOfDefects);

        layoutWidget13 = new QWidget(grpBx_2);
        layoutWidget13->setObjectName(QStringLiteral("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(8, 88, 220, 25));
        hrzntlLt_4 = new QHBoxLayout(layoutWidget13);
        hrzntlLt_4->setSpacing(6);
        hrzntlLt_4->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_4->setObjectName(QStringLiteral("hrzntlLt_4"));
        hrzntlLt_4->setContentsMargins(0, 0, 0, 0);
        lbl_Height = new QLabel(layoutWidget13);
        lbl_Height->setObjectName(QStringLiteral("lbl_Height"));
        lbl_Height->setMinimumSize(QSize(162, 20));
        lbl_Height->setMaximumSize(QSize(162, 20));
        lbl_Height->setFont(font1);

        hrzntlLt_4->addWidget(lbl_Height);

        ln_Height = new QLineEdit(layoutWidget13);
        ln_Height->setObjectName(QStringLiteral("ln_Height"));
        ln_Height->setMinimumSize(QSize(50, 20));
        ln_Height->setMaximumSize(QSize(50, 20));
        ln_Height->setFont(font1);

        hrzntlLt_4->addWidget(ln_Height);

        layoutWidget14 = new QWidget(grpBx_2);
        layoutWidget14->setObjectName(QStringLiteral("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(8, 120, 220, 25));
        hrzntlLt_3 = new QHBoxLayout(layoutWidget14);
        hrzntlLt_3->setSpacing(6);
        hrzntlLt_3->setContentsMargins(11, 11, 11, 11);
        hrzntlLt_3->setObjectName(QStringLiteral("hrzntlLt_3"));
        hrzntlLt_3->setContentsMargins(0, 0, 0, 0);
        lbl_Width = new QLabel(layoutWidget14);
        lbl_Width->setObjectName(QStringLiteral("lbl_Width"));
        lbl_Width->setMinimumSize(QSize(162, 20));
        lbl_Width->setMaximumSize(QSize(162, 20));
        lbl_Width->setFont(font1);

        hrzntlLt_3->addWidget(lbl_Width);

        ln_Width = new QLineEdit(layoutWidget14);
        ln_Width->setObjectName(QStringLiteral("ln_Width"));
        ln_Width->setMinimumSize(QSize(50, 20));
        ln_Width->setMaximumSize(QSize(50, 20));
        ln_Width->setFont(font1);

        hrzntlLt_3->addWidget(ln_Width);

        bttn_Start = new QPushButton(centralWidget);
        bttn_Start->setObjectName(QStringLiteral("bttn_Start"));
        bttn_Start->setGeometry(QRect(1016, 648, 100, 25));
        bttn_Start->setFont(font);
        bttn_Pause = new QPushButton(centralWidget);
        bttn_Pause->setObjectName(QStringLiteral("bttn_Pause"));
        bttn_Pause->setGeometry(QRect(1136, 648, 100, 25));
        bttn_Pause->setFont(font);
        bttn_Close = new QPushButton(centralWidget);
        bttn_Close->setObjectName(QStringLiteral("bttn_Close"));
        bttn_Close->setGeometry(QRect(1256, 648, 100, 25));
        bttn_Close->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(248, 520, 417, 89));
        groupBox->setFont(font);
        rdBttn_GlobalBin = new QRadioButton(groupBox);
        rdBttn_GlobalBin->setObjectName(QStringLiteral("rdBttn_GlobalBin"));
        rdBttn_GlobalBin->setGeometry(QRect(8, 24, 401, 25));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        font4.setKerning(true);
        rdBttn_GlobalBin->setFont(font4);
        rdBttn_GlobalBin->setInputMethodHints(Qt::ImhNone);
        rdBttn_GlobalBin->setCheckable(true);
        rdBttn_GlobalBin->setChecked(true);
        rdBttn_GlobalBin->setAutoRepeatDelay(40);
        rdBttn_GlobalBin->setAutoRepeatInterval(40);
        rdBttn_Otsu = new QRadioButton(groupBox);
        rdBttn_Otsu->setObjectName(QStringLiteral("rdBttn_Otsu"));
        rdBttn_Otsu->setGeometry(QRect(8, 56, 217, 25));
        rdBttn_Otsu->setFont(font3);
        rdBttn_Otsu->setChecked(false);
        rdBttn_Otsu->setAutoRepeatDelay(40);
        rdBttn_Otsu->setAutoRepeatInterval(40);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(248, 608, 417, 65));
        groupBox_2->setFont(font);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(8, 24, 193, 33));
        label_6->setMinimumSize(QSize(193, 33));
        label_6->setMaximumSize(QSize(193, 33));
        label_6->setFont(font1);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_6->setWordWrap(true);
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(216, 24, 193, 33));
        lineEdit->setMinimumSize(QSize(193, 33));
        lineEdit->setMaximumSize(QSize(193, 33));
        QFont font5;
        font5.setPointSize(22);
        lineEdit->setFont(font5);
        lineEdit->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        grpBx_4->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\200\320\276\320\263\320\270 \320\261\320\270\320\275\320\260\321\200\320\270\320\267\320\260\321\206\320\270\320\270", Q_NULLPTR));
        lbl_H_min->setText(QApplication::translate("MainWindow", "H (min)", Q_NULLPTR));
        lbl_H_max->setText(QApplication::translate("MainWindow", "H (max)", Q_NULLPTR));
        lbl_S_min->setText(QApplication::translate("MainWindow", "S (min)", Q_NULLPTR));
        lbl_S_max->setText(QApplication::translate("MainWindow", "S (max)", Q_NULLPTR));
        lbl_V_min->setText(QApplication::translate("MainWindow", "V (min)", Q_NULLPTR));
        lbl_V_max->setText(QApplication::translate("MainWindow", "V (max)", Q_NULLPTR));
        grpBx_7->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\320\260\320\275\320\275\320\260\321\217 \321\204\320\270\320\273\321\214\321\202\321\200\320\260\321\206\320\270\321\217", Q_NULLPTR));
        lbl_MedianSizeKernel->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        grpBx_1->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\320\276\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        lbl_Original->setText(QString());
        grpBx_3->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", Q_NULLPTR));
        lbl_PreProcessed->setText(QString());
        grpBx_6->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\276\320\261\321\200\320\260\320\261\320\276\321\202\320\272\320\260 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", Q_NULLPTR));
        lbl_Processed->setText(QString());
        grpBx_5->setTitle(QApplication::translate("MainWindow", "\320\223\320\260\321\203\321\201\321\201\320\276\320\262\320\276 \321\200\320\260\320\267\320\274\321\213\321\202\320\270\320\265", Q_NULLPTR));
        lbl_GaussHeightKernel->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        lbl_GaussWidthKernel->setText(QApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        lbl_GaussDeviationX->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \320\277\320\276 X", Q_NULLPTR));
        lbl_GaussDeviationY->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265 \320\277\320\276 Y", Q_NULLPTR));
        chckBx_GaussApply->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        grpBx_8->setTitle(QApplication::translate("MainWindow", "\320\234\320\276\321\200\321\204\320\276\320\273\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", Q_NULLPTR));
        lbl_DilationSizeKernel->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        lbl_DilationIteration->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271", Q_NULLPTR));
        chckBx_DilationApply->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        rdBttn_DilationRect->setText(QApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", Q_NULLPTR));
        rdBttn_DilationEllipse->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\270\320\277\321\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\320\235\320\260\321\200\320\260\321\211\320\270\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
        lbl_ErosionSizeKernel->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        chckBx_ErosionApply->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        lbl_ErosionIteration->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271", Q_NULLPTR));
        rdBttn_ErosionRect->setText(QApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", Q_NULLPTR));
        rdBttn_ErosionEllipse->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\270\320\277\321\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\255\321\200\320\276\320\267\320\270\321\217", Q_NULLPTR));
        lbl_ClosingIteration->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271", Q_NULLPTR));
        chckBx_ClosingApply->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        lbl_ClosingSizeKernel->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        rdBttn_ClosingRect->setText(QApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", Q_NULLPTR));
        rdBttn_ClosingEllipse->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\270\320\277\321\201", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "\320\227\320\260\320\274\321\213\320\272\320\260\320\275\320\270\320\265", Q_NULLPTR));
        lbl_OpeningIteration->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\270\321\202\320\265\321\200\320\260\321\206\320\270\320\271", Q_NULLPTR));
        lbl_OpeningSizeKernel->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\217\320\264\321\200\320\260", Q_NULLPTR));
        chckBx_OpeningApply->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", Q_NULLPTR));
        rdBttn_OpeningRect->setText(QApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", Q_NULLPTR));
        rdBttn_ClosingEllipse_2->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\270\320\277\321\201", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_21), QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\321\213\320\272\320\260\320\275\320\270\320\265", Q_NULLPTR));
        grpBx_2->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\276\320\261\321\212\320\265\320\272\321\202\320\265", Q_NULLPTR));
        lbl_IsHand->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\276\320\261\321\212\320\265\320\272\321\202\320\260", Q_NULLPTR));
        lbl_NumberOfDefects->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\265\321\204\320\265\320\272\321\202\320\276\320\262", Q_NULLPTR));
        lbl_Height->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\321\202\320\260", Q_NULLPTR));
        lbl_Width->setText(QApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260", Q_NULLPTR));
        bttn_Start->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", Q_NULLPTR));
        bttn_Pause->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\203\320\267\320\260", Q_NULLPTR));
        bttn_Close->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\261\320\270\320\275\320\260\321\200\320\270\320\267\320\260\321\206\320\270\320\270", Q_NULLPTR));
        rdBttn_GlobalBin->setText(QApplication::translate("MainWindow", "\320\223\320\273\320\276\320\261\320\260\320\273\321\214\320\275\320\260\321\217 \320\261\320\270\320\275\320\260\321\200\320\270\320\267\320\260\321\206\320\270\321\217 \321\201 \320\264\320\262\320\276\320\271\320\275\321\213\320\274 \320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265\320\274", Q_NULLPTR));
        rdBttn_Otsu->setText(QApplication::translate("MainWindow", "\320\234\320\265\321\202\320\276\320\264 \320\236\321\202\321\206\321\203", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\240\320\265\320\266\320\270\320\274 \320\275\320\265 \320\262\321\213\320\261\321\200\320\260\320\275</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
