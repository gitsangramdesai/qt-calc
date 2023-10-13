#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

QString strDisplay = "";
static double swapVar =0;
static bool isOpPending =false;
static bool isDispChangePending =false;
static char PendingOpr;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->txtDisplay->setText("0");
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
    ui->txtDisplay->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Helper*/
void ShowMsg(QString strMsg)
{
    QMessageBox msgBox;
    msgBox.setText(strMsg);
    msgBox.exec();
}




/*Clean Screen*/
void MainWindow::on_pbOprC_clicked()
{
    ui->txtDisplay->setText("");
}

void MainWindow::on_pbOprAc_clicked()
{
    strDisplay = "";
    swapVar =0;
    isOpPending =false;
    isDispChangePending =false;
    PendingOpr = '\0';
    ui->txtDisplay->setText("");
}

void MainWindow::on_pbNum7_clicked()
{
    QString numStr = QString::number(7);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
             strDisplay.remove( QRegExp("^[0]*") );
            //strDisplay = QString::number(strDisplay.toDouble());
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum8_clicked()
{
    QString numStr = QString::number(8);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum9_clicked()
{
    QString numStr = QString::number(9);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum4_clicked()
{
    QString numStr = QString::number(4);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum5_clicked()
{
   QString numStr = QString::number(5);
   if(isDispChangePending ==true){
        strDisplay = numStr;
        isDispChangePending =false;
   }else{
       strDisplay = ui->txtDisplay->toPlainText();
       strDisplay = strDisplay + numStr;

       if(strDisplay.contains(".") ==false)
       {
           strDisplay.remove( QRegExp("^[0]*") );
       }
   }

   ui->txtDisplay->setText(strDisplay);
   ui->txtDisplay->setAlignment(Qt::AlignRight);
   ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum6_clicked()
{
    QString numStr = QString::number(6);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum3_clicked()
{
    QString numStr = QString::number(3);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum2_clicked()
{
    QString numStr = QString::number(2);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum1_clicked()
{
    QString numStr = QString::number(1);
    if(isDispChangePending ==true){
          strDisplay = numStr;
          isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbNum0_clicked()
{
    QString numStr = QString::number(0);
    if(isDispChangePending ==true){
         strDisplay = numStr;
         isDispChangePending =false;
    }else{
        strDisplay = ui->txtDisplay->toPlainText();
        strDisplay = strDisplay + numStr;

        if(strDisplay.contains(".") ==false)
        {
            strDisplay.remove( QRegExp("^[0]*") );
        }
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

/*operation*/
void MainWindow::on_pbOprDivide_clicked()
{
    /*new logic*/
    if(isOpPending==true)
    {
        switch (PendingOpr) {
            case '+':
                swapVar = swapVar + strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case '-':
                swapVar = swapVar - strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case 'x':
                swapVar = swapVar * strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case '/':
                if(strDisplay.toDouble() != 0)
                {
                    swapVar = swapVar / strDisplay.toDouble();
                    strDisplay = QString::number(swapVar);
                }
                break;
            default:
                break;
        }

        ui->txtDisplay->setText(strDisplay);
        ui->txtDisplay->setAlignment(Qt::AlignRight);
        ui->txtDisplay->setFocus(Qt::OtherFocusReason);
    }else{
        swapVar  = strDisplay.toDouble();
    }
    //register to store value
    swapVar  = strDisplay.toDouble();

    PendingOpr='/';
    isOpPending =true;
    isDispChangePending= true;
}

void MainWindow::on_pbOprMultiply_clicked()
{
    /*new logic*/
    if(isOpPending==true)
    {
        switch (PendingOpr) {
            case '+':
                swapVar = swapVar + strDisplay.toDouble();
                strDisplay = QString::number(swapVar);\
                break;
            case '-':
                swapVar = swapVar - strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case 'x':
                swapVar = swapVar * strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case '/':
                if(strDisplay.toDouble() != 0)
                {
                    swapVar = swapVar / strDisplay.toDouble();
                    strDisplay = QString::number(swapVar);
                }
                break;
            default:
                break;
        }

        ui->txtDisplay->setText(strDisplay);
        ui->txtDisplay->setAlignment(Qt::AlignRight);
        ui->txtDisplay->setFocus(Qt::OtherFocusReason);
    }else{
        swapVar  = strDisplay.toDouble();
    }
    swapVar  = strDisplay.toDouble();


    PendingOpr='x';
    isOpPending =true;
    isDispChangePending= true;
}

void MainWindow::on_pbOprMinus_clicked()
{
    strDisplay = ui->txtDisplay->toPlainText();

    /*new logic*/
    if(isOpPending==true)
    {
        switch (PendingOpr) {
            case '+':
                swapVar = swapVar + strDisplay.toDouble();
                strDisplay = QString::number(swapVar);\
                break;
            case '-':
                swapVar = swapVar - strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case 'x':
                swapVar = swapVar * strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case '/':
                if(strDisplay.toDouble() != 0)
                {
                    swapVar = swapVar / strDisplay.toDouble();
                    strDisplay = QString::number(swapVar);
                }
                break;
            default:
                break;
        }

        ui->txtDisplay->setText(strDisplay);
        ui->txtDisplay->setAlignment(Qt::AlignRight);
        ui->txtDisplay->setFocus(Qt::OtherFocusReason);
    }else{
        swapVar  = strDisplay.toDouble();
    }

    /*old logic*/
    swapVar  = strDisplay.toDouble();


    PendingOpr='-';
    isOpPending =true;
    isDispChangePending= true;
}

void MainWindow::on_pbOprPlus_clicked()
{
    strDisplay = ui->txtDisplay->toPlainText();

    /*new logic*/
    if(isOpPending==true)
    {
        switch (PendingOpr) {
            case '+':
                swapVar = swapVar + strDisplay.toDouble();
                strDisplay = QString::number(swapVar);\
                break;
            case '-':
                swapVar = swapVar - strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case 'x':
                swapVar = swapVar * strDisplay.toDouble();
                strDisplay = QString::number(swapVar);
                break;
            case '/':
                if(strDisplay.toDouble() != 0)
                {
                    swapVar = swapVar / strDisplay.toDouble();
                    strDisplay = QString::number(swapVar);
                }
                break;
            default:
                break;
        }

        ui->txtDisplay->setText(strDisplay);
        ui->txtDisplay->setAlignment(Qt::AlignRight);
        ui->txtDisplay->setFocus(Qt::OtherFocusReason);
    }else{
        swapVar  = strDisplay.toDouble();
    }
    /*old logic*/

    PendingOpr='+';
    isOpPending =true;
    isDispChangePending= true;
}

/**/
void MainWindow::on_pbOprPeriod_clicked()
{
    strDisplay = ui->txtDisplay->toPlainText();
    if(strDisplay.contains(".") ==false)
    {
       if(strDisplay=="")
       {
           strDisplay="0";
       }
        strDisplay = strDisplay + ".";

       ui->txtDisplay->setText(strDisplay);
       ui->txtDisplay->setAlignment(Qt::AlignRight);
       ui->txtDisplay->setFocus(Qt::OtherFocusReason);
    }
}

void MainWindow::on_pbOprSign_clicked()
{
    strDisplay = ui->txtDisplay->toPlainText();
    if(strDisplay.mid(0,1) == "-")
    {
       strDisplay = strDisplay.mid(1,strDisplay.length());
    }else{
       strDisplay = '-' + strDisplay;
    }

    ui->txtDisplay->setText(strDisplay);
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);
}

void MainWindow::on_pbOprPercent_clicked()
{
     strDisplay = ui->txtDisplay->toPlainText();
     if(strDisplay!="")
     {
        strDisplay = QString::number(strDisplay.toDouble()/100);

        ui->txtDisplay->setText(strDisplay);
        ui->txtDisplay->setAlignment(Qt::AlignRight);
        ui->txtDisplay->setFocus(Qt::OtherFocusReason);
     }
}

/*get result*/
void MainWindow::on_pbOprEqual_clicked()
{
    strDisplay = ui->txtDisplay->toPlainText();

    switch (PendingOpr) {
        case '+':
            swapVar = swapVar + strDisplay.toDouble();
            strDisplay = QString::number(swapVar);

            ui->txtDisplay->setText(strDisplay);
            break;
        case '-':
            swapVar = swapVar - strDisplay.toDouble();
            strDisplay = QString::number(swapVar);

            ui->txtDisplay->setText(strDisplay);
            break;
        case 'x':
            swapVar = swapVar * strDisplay.toDouble();
            strDisplay = QString::number(swapVar);

            ui->txtDisplay->setText(strDisplay);
            break;
        case '/':
            if(strDisplay.toDouble() != 0)
            {
                swapVar = swapVar / strDisplay.toDouble();
                strDisplay = QString::number(swapVar);

                ui->txtDisplay->setText(strDisplay);
            }
            break;
        default:
            break;
    }
    //common to call cases
    ui->txtDisplay->setAlignment(Qt::AlignRight);
    ui->txtDisplay->setFocus(Qt::OtherFocusReason);

    swapVar =0;
    isOpPending =false;
    isDispChangePending =false;
    PendingOpr = '\0';
}

/*see through register*/
void MainWindow::on_pushButton_clicked()
{
    QString swapVarAsString = QString::number(swapVar);
    ShowMsg(swapVarAsString);
}




