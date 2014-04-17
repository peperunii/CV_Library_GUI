/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *ImageWindow;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;
    QSlider *BrightnessSlider;
    QFrame *line;
    QSlider *ContrastSlider;
    QFrame *line_2;
    QSlider *BlurImageSlider;
    QFrame *line_3;
    QSlider *verticalSlider_4;
    QFrame *line_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSlider *horizontalSlider_5;
    QLabel *label_3;
    QSlider *horizontalSlider_6;
    QLabel *label_4;
    QCheckBox *checkBox_1;
    QFrame *line_5;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QCheckBox *MoveTogetherCheckBox;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *textEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSpinBox *spinBox;
    QLabel *label_10;
    QSpinBox *spinBox_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QCheckBox *ApplyCheckBox;
    QGraphicsView *ImageWindow_2;
    QLabel *label_16;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(938, 685);
        MainWindow->setMinimumSize(QSize(938, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ImageWindow = new QGraphicsView(centralWidget);
        ImageWindow->setObjectName(QStringLiteral("ImageWindow"));
        ImageWindow->setGeometry(QRect(0, 0, 400, 300));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 450, 160, 19));
        horizontalSlider->setMaximum(6);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(1);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(30, 500, 160, 19));
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 430, 101, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 480, 47, 13));
        BrightnessSlider = new QSlider(centralWidget);
        BrightnessSlider->setObjectName(QStringLiteral("BrightnessSlider"));
        BrightnessSlider->setGeometry(QRect(690, 48, 20, 221));
        BrightnessSlider->setMinimum(-100);
        BrightnessSlider->setMaximum(100);
        BrightnessSlider->setOrientation(Qt::Vertical);
        BrightnessSlider->setInvertedControls(false);
        BrightnessSlider->setTickPosition(QSlider::TicksAbove);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(710, 49, 20, 221));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        ContrastSlider = new QSlider(centralWidget);
        ContrastSlider->setObjectName(QStringLiteral("ContrastSlider"));
        ContrastSlider->setGeometry(QRect(750, 48, 20, 221));
        ContrastSlider->setMinimum(-100);
        ContrastSlider->setMaximum(100);
        ContrastSlider->setValue(0);
        ContrastSlider->setOrientation(Qt::Vertical);
        ContrastSlider->setTickPosition(QSlider::TicksAbove);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(770, 49, 20, 221));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        BlurImageSlider = new QSlider(centralWidget);
        BlurImageSlider->setObjectName(QStringLiteral("BlurImageSlider"));
        BlurImageSlider->setGeometry(QRect(810, 49, 20, 221));
        BlurImageSlider->setMinimum(1);
        BlurImageSlider->setMaximum(100);
        BlurImageSlider->setOrientation(Qt::Vertical);
        BlurImageSlider->setTickPosition(QSlider::TicksAbove);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(830, 50, 20, 221));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        verticalSlider_4 = new QSlider(centralWidget);
        verticalSlider_4->setObjectName(QStringLiteral("verticalSlider_4"));
        verticalSlider_4->setGeometry(QRect(880, 49, 20, 221));
        verticalSlider_4->setAutoFillBackground(true);
        verticalSlider_4->setMinimum(-100);
        verticalSlider_4->setMaximum(100);
        verticalSlider_4->setOrientation(Qt::Vertical);
        verticalSlider_4->setTickPosition(QSlider::TicksAbove);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(900, 50, 20, 221));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 460, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 500, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 500, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(540, 460, 75, 23));
        horizontalSlider_5 = new QSlider(centralWidget);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(250, 450, 160, 19));
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 480, 81, 16));
        horizontalSlider_6 = new QSlider(centralWidget);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(250, 500, 160, 19));
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 430, 101, 16));
        checkBox_1 = new QCheckBox(centralWidget);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));
        checkBox_1->setGeometry(QRect(550, 540, 131, 21));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(220, 450, 3, 61));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(30, 590, 151, 19));
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(30);
        horizontalSlider_3->setSingleStep(1);
        horizontalSlider_3->setValue(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_4 = new QSlider(centralWidget);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(30, 570, 151, 19));
        horizontalSlider_4->setMinimum(0);
        horizontalSlider_4->setMaximum(30);
        horizontalSlider_4->setValue(10);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_7 = new QSlider(centralWidget);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setGeometry(QRect(30, 550, 151, 19));
        horizontalSlider_7->setMinimum(0);
        horizontalSlider_7->setMaximum(30);
        horizontalSlider_7->setValue(10);
        horizontalSlider_7->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(16, 590, 41, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(16, 570, 51, 20));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(16, 550, 51, 20));
        MoveTogetherCheckBox = new QCheckBox(centralWidget);
        MoveTogetherCheckBox->setObjectName(QStringLiteral("MoveTogetherCheckBox"));
        MoveTogetherCheckBox->setGeometry(QRect(200, 570, 101, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 530, 47, 13));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 381, 281));
        label_9->setMouseTracking(true);
        label_9->setFrameShape(QFrame::Box);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(470, 420, 241, 31));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(20, 350, 41, 17));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(80, 350, 41, 17));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(130, 350, 41, 17));
        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(190, 350, 81, 17));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(820, 290, 42, 22));
        spinBox->setMaximum(50);
        spinBox->setValue(5);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(710, 290, 101, 20));
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(820, 320, 42, 22));
        spinBox_2->setMaximum(50);
        spinBox_2->setValue(5);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(780, 320, 31, 20));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(680, 50, 16, 211));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(730, 50, 16, 211));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(800, 40, 16, 211));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(870, 50, 16, 211));
        ApplyCheckBox = new QCheckBox(centralWidget);
        ApplyCheckBox->setObjectName(QStringLiteral("ApplyCheckBox"));
        ApplyCheckBox->setGeometry(QRect(690, 10, 131, 17));
        ApplyCheckBox->setChecked(true);
        ImageWindow_2 = new QGraphicsView(centralWidget);
        ImageWindow_2->setObjectName(QStringLiteral("ImageWindow_2"));
        ImageWindow_2->setGeometry(QRect(480, 0, 171, 201));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(490, 10, 151, 181));
        label_16->setMouseTracking(true);
        label_16->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralWidget);
        ImageWindow->raise();
        horizontalSlider->raise();
        horizontalSlider_2->raise();
        label->raise();
        label_2->raise();
        BrightnessSlider->raise();
        line->raise();
        ContrastSlider->raise();
        line_2->raise();
        BlurImageSlider->raise();
        line_3->raise();
        verticalSlider_4->raise();
        line_4->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        horizontalSlider_5->raise();
        label_3->raise();
        horizontalSlider_6->raise();
        label_4->raise();
        checkBox_1->raise();
        line_5->raise();
        horizontalSlider_3->raise();
        horizontalSlider_4->raise();
        horizontalSlider_7->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        MoveTogetherCheckBox->raise();
        label_8->raise();
        textEdit->raise();
        radioButton->raise();
        radioButton_2->raise();
        radioButton_3->raise();
        radioButton_4->raise();
        label_9->raise();
        spinBox->raise();
        label_10->raise();
        spinBox_2->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        ApplyCheckBox->raise();
        ImageWindow_2->raise();
        label_16->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 938, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "WhiteBalance", 0));
        label_2->setText(QApplication::translate("MainWindow", "Blur", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Apply", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Reset", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Save", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Load", 0));
        label_3->setText(QApplication::translate("MainWindow", "Brightness", 0));
        label_4->setText(QApplication::translate("MainWindow", "Noise", 0));
        checkBox_1->setText(QApplication::translate("MainWindow", "Use same file as input", 0));
        label_5->setText(QApplication::translate("MainWindow", "B", 0));
        label_6->setText(QApplication::translate("MainWindow", "G", 0));
        label_7->setText(QApplication::translate("MainWindow", "R", 0));
        MoveTogetherCheckBox->setText(QApplication::translate("MainWindow", "MoveTogether", 0));
        label_8->setText(QApplication::translate("MainWindow", "Gamma", 0));
        label_9->setText(QApplication::translate("MainWindow", "Image Preview", 0));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Input file:</span></p></body></html>", 0));
        radioButton->setText(QApplication::translate("MainWindow", "3/2", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "4/3", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "16/9", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "3/4 - portrait", 0));
        label_10->setText(QApplication::translate("MainWindow", "Neighbor coefficients:", 0));
        label_11->setText(QApplication::translate("MainWindow", "Radius", 0));
        label_12->setText(QApplication::translate("MainWindow", "B\n"
"R\n"
"I\n"
"G\n"
"H\n"
"T\n"
"E\n"
"S\n"
"S\n"
"", 0));
        label_13->setText(QApplication::translate("MainWindow", "C\n"
"O\n"
"N\n"
"T\n"
"R\n"
"A\n"
"S\n"
"T", 0));
        label_14->setText(QApplication::translate("MainWindow", "B\n"
"L\n"
"U\n"
"R", 0));
        label_15->setText(QApplication::translate("MainWindow", "S\n"
"A\n"
"T\n"
"U\n"
"R\n"
"A\n"
"T\n"
"I\n"
"O\n"
"N", 0));
        ApplyCheckBox->setText(QApplication::translate("MainWindow", "Apply each action", 0));
        label_16->setText(QApplication::translate("MainWindow", "Histogram", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
