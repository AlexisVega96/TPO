#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImageReader>
#include <QPicture>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//*******************************************************************
    Port = NULL;    //indica que el objeto puerto no esta creado;
    Portname = "";
    EnumerarPuertos();
    ui->dateTimeEdit->setDisabled(true);
    ui->textSTOCK->setDisabled(true);
    ui->labelMsJ->setText(" ingrese nombre y contraseña para acceder ");
//*******************************************************************
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Port;            //libero port
}

void MainWindow::EnumerarPuertos() //agregado
{
    ui->comboBoxPort->clear();

    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();

    for (int i = 0; i < ports.size(); i++)
    {
        ui->comboBoxPort->addItem(ports.at(i).portName(), ports.at(i).portName());
    }
}


void MainWindow::on_radioButton_4_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/Coca-Cola.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
//        ui->frameLabel->setPixmap(pixmap.scaled(32, 32, Qt::IgnoreAspectRatio, Qt::FastTransformation));

    }
    else
    {
        ui->Imagen2->clear();
    }

}

void MainWindow::on_radioButton_5_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/Pepsi.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(140, 110, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_6_toggled(bool checked)     // problemas para mostrar la imagen
{
    QPixmap s ("../interfaz/QtImagen/Fanta.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(140, 110, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_7_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/manaos.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(140, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_8_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/QUILMES.jpg");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(140, 140, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_9_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/Speed.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_10_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/FERNET.jpg");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(140, 110, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_11_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/DRLemon.jpg");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_radioButton_12_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/7up.png");

    if(checked == true)
    {
        ui->Imagen2->setPixmap(s.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen2->clear();
    }
}

void MainWindow::on_pushButtonCONECTAR_clicked()
{
    if (!Port)
    {
        Port = new QSerialPort(Portname);
        Port->setBaudRate(QSerialPort::Baud9600);
        Port->setFlowControl(QSerialPort::NoFlowControl);
        Port->setParity(QSerialPort::NoParity);
        Port->setDataBits(QSerialPort::Data8);
        Port->setStopBits(QSerialPort::OneStop);
        if(!Port->open(QIODevice::ReadWrite))
        {
            QMessageBox::critical(this,"Error","No se puede abrir el puerto "+Port->portName());
            delete Port;
            Port = NULL;
        }
        else
        {
            ui->labelEstado->setText("CONECTADO A LA PLACA");

            //agregar codigo para enviar informacion.
        }
    }
    else
    {
        delete Port;
        Port = NULL;
        ui->labelEstado->setText("Conectar");
    }
}

void MainWindow::on_actionLogin_triggered()
{

}

void MainWindow::on_pushButtonINGRESAR_clicked()
{
        QString nombre,clave,cla_nom,cla_pass;
        nombre = ui->lineEdit_NOMBRE->text();
        clave = ui->lineEdit_PASSWORD->text();
        cla_nom = "info2";
        cla_pass = "r2054";
        if( nombre == cla_nom )
        {
            if( clave == cla_pass)
            {
                ui->labelMsJ->setText(" Bienbenido!!.. ");
                ui->dateTimeEdit->setEnabled(true);
                ui->textSTOCK->setEnabled(true);
            }
        }
        else
        {
            ui->labelMsJ->setText(" nombre o contraseña INCORRECTO!.. ");
        }
}

void MainWindow::on_pushButton_SALIR_clicked()
{
        ui->dateTimeEdit->setDisabled(true);
        ui->textSTOCK->setDisabled(true);
        ui->labelMsJ->setText(" ingrese nombre y contraseña para acceder ");
        ui->lineEdit_NOMBRE->clear();
        ui->lineEdit_PASSWORD->clear();
}
