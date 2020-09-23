#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//****************************************************
#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
//****************************************************

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_radioButton_4_toggled(bool checked);

    void on_radioButton_5_toggled(bool checked);

    void on_radioButton_6_toggled(bool checked);

    void on_radioButton_7_toggled(bool checked);

    void on_radioButton_8_toggled(bool checked);

    void on_radioButton_9_toggled(bool checked);

    void on_radioButton_10_toggled(bool checked);

    void on_radioButton_11_toggled(bool checked);

    void on_radioButton_12_toggled(bool checked);


    void on_pushButtonCONECTAR_clicked();

    void on_actionLogin_triggered();

    void on_pushButtonINGRESAR_clicked();

    void on_pushButton_SALIR_clicked();

private:
    Ui::MainWindow *ui;

//*******************************************************************// agregado por mi
    QString Portname;
    //QextSerialPort *Port;
    QSerialPort *Port;
    void EnumerarPuertos();
//*******************************************************************
};
#endif // MAINWINDOW_H
