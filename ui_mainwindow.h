/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pbOprDivide;
    QPushButton *pbNum9;
    QPushButton *pbOprSign;
    QPushButton *pbOprPeriod;
    QPushButton *pbNum0;
    QPushButton *pbOprEqual;
    QTextEdit *txtDisplay;
    QPushButton *pbOprPlus;
    QPushButton *pbOprAc;
    QPushButton *pbOprPercent;
    QPushButton *pbNum1;
    QPushButton *pushButton;
    QPushButton *pbNum8;
    QPushButton *pbOprC;
    QPushButton *pbNum6;
    QPushButton *pbNum7;
    QPushButton *pbNum5;
    QPushButton *pbNum2;
    QPushButton *pbNum4;
    QPushButton *pbOprMultiply;
    QPushButton *pbNum3;
    QPushButton *pbOprMinus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(434, 497);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pbOprDivide = new QPushButton(centralWidget);
        pbOprDivide->setObjectName(QString::fromUtf8("pbOprDivide"));
        pbOprDivide->setGeometry(QRect(140, 110, 51, 41));
        pbNum9 = new QPushButton(centralWidget);
        pbNum9->setObjectName(QString::fromUtf8("pbNum9"));
        pbNum9->setGeometry(QRect(210, 160, 51, 41));
        pbOprSign = new QPushButton(centralWidget);
        pbOprSign->setObjectName(QString::fromUtf8("pbOprSign"));
        pbOprSign->setGeometry(QRect(330, 260, 51, 91));
        pbOprSign->setFocusPolicy(Qt::StrongFocus);
        pbOprPeriod = new QPushButton(centralWidget);
        pbOprPeriod->setObjectName(QString::fromUtf8("pbOprPeriod"));
        pbOprPeriod->setGeometry(QRect(210, 310, 51, 41));
        pbNum0 = new QPushButton(centralWidget);
        pbNum0->setObjectName(QString::fromUtf8("pbNum0"));
        pbNum0->setGeometry(QRect(70, 310, 121, 41));
        pbOprEqual = new QPushButton(centralWidget);
        pbOprEqual->setObjectName(QString::fromUtf8("pbOprEqual"));
        pbOprEqual->setEnabled(true);
        pbOprEqual->setGeometry(QRect(270, 260, 51, 91));
        txtDisplay = new QTextEdit(centralWidget);
        txtDisplay->setObjectName(QString::fromUtf8("txtDisplay"));
        txtDisplay->setGeometry(QRect(70, 30, 311, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        txtDisplay->setFont(font);
        txtDisplay->setLayoutDirection(Qt::LeftToRight);
        txtDisplay->setFrameShape(QFrame::StyledPanel);
        txtDisplay->setFrameShadow(QFrame::Sunken);
        pbOprPlus = new QPushButton(centralWidget);
        pbOprPlus->setObjectName(QString::fromUtf8("pbOprPlus"));
        pbOprPlus->setGeometry(QRect(270, 160, 51, 81));
        pbOprAc = new QPushButton(centralWidget);
        pbOprAc->setObjectName(QString::fromUtf8("pbOprAc"));
        pbOprAc->setGeometry(QRect(330, 160, 51, 81));
        pbOprAc->setFocusPolicy(Qt::StrongFocus);
        pbOprPercent = new QPushButton(centralWidget);
        pbOprPercent->setObjectName(QString::fromUtf8("pbOprPercent"));
        pbOprPercent->setGeometry(QRect(70, 110, 51, 41));
        pbNum1 = new QPushButton(centralWidget);
        pbNum1->setObjectName(QString::fromUtf8("pbNum1"));
        pbNum1->setGeometry(QRect(70, 260, 51, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 360, 311, 41));
        pbNum8 = new QPushButton(centralWidget);
        pbNum8->setObjectName(QString::fromUtf8("pbNum8"));
        pbNum8->setGeometry(QRect(140, 160, 51, 41));
        pbOprC = new QPushButton(centralWidget);
        pbOprC->setObjectName(QString::fromUtf8("pbOprC"));
        pbOprC->setGeometry(QRect(330, 110, 51, 41));
        pbOprC->setFocusPolicy(Qt::StrongFocus);
        pbNum6 = new QPushButton(centralWidget);
        pbNum6->setObjectName(QString::fromUtf8("pbNum6"));
        pbNum6->setGeometry(QRect(210, 210, 51, 41));
        pbNum7 = new QPushButton(centralWidget);
        pbNum7->setObjectName(QString::fromUtf8("pbNum7"));
        pbNum7->setGeometry(QRect(70, 160, 51, 41));
        pbNum5 = new QPushButton(centralWidget);
        pbNum5->setObjectName(QString::fromUtf8("pbNum5"));
        pbNum5->setGeometry(QRect(140, 210, 51, 41));
        pbNum2 = new QPushButton(centralWidget);
        pbNum2->setObjectName(QString::fromUtf8("pbNum2"));
        pbNum2->setGeometry(QRect(140, 260, 51, 41));
        pbNum4 = new QPushButton(centralWidget);
        pbNum4->setObjectName(QString::fromUtf8("pbNum4"));
        pbNum4->setGeometry(QRect(70, 210, 51, 41));
        pbOprMultiply = new QPushButton(centralWidget);
        pbOprMultiply->setObjectName(QString::fromUtf8("pbOprMultiply"));
        pbOprMultiply->setGeometry(QRect(210, 110, 51, 41));
        pbNum3 = new QPushButton(centralWidget);
        pbNum3->setObjectName(QString::fromUtf8("pbNum3"));
        pbNum3->setGeometry(QRect(210, 260, 51, 41));
        pbOprMinus = new QPushButton(centralWidget);
        pbOprMinus->setObjectName(QString::fromUtf8("pbOprMinus"));
        pbOprMinus->setGeometry(QRect(270, 110, 51, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 434, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pbOprDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pbNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pbOprSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pbOprPeriod->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pbNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pbOprEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        txtDisplay->setDocumentTitle(QString());
        pbOprPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pbOprAc->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pbOprPercent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pbNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Show Register Value", nullptr));
        pbNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pbOprC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pbNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pbNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pbNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pbNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pbNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pbOprMultiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pbNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pbOprMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
