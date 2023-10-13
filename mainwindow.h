#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void on_pbOprPercent_clicked();

    void on_pbOprDivide_clicked();

    void on_pbOprMultiply_clicked();

    void on_pbOprMinus_clicked();

    void on_pbOprC_clicked();

    void on_pbNum7_clicked();

    void on_pbNum8_clicked();

    void on_pbNum9_clicked();

    void on_pbOprPlus_clicked();

    void on_pbOprAc_clicked();

    void on_pbNum4_clicked();

    void on_pbNum5_clicked();

    void on_pbNum6_clicked();

    void on_pbOprEqual_clicked();

    void on_pbNum3_clicked();

    void on_pbNum2_clicked();

    void on_pbNum1_clicked();

    void on_pbNum0_clicked();

    void on_pbOprPeriod_clicked();

    void on_pbOprSign_clicked();

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
