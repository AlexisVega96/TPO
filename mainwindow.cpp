#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QImageReader>     // buscaar info como hacer que sea portable y me tome las dimensiones
#include <QPicture>         // del label en la interfaz.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::on_radioButton_2_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/lataGrande.jpeg");

    if(checked == true)
    {
        ui->Imagen1->setPixmap(s.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen1->clear();
    }
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/LataMediana.jpg");

    if(checked == true)
    {
        ui->Imagen1->setPixmap(s.scaled(100, 100, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen1->clear();
    }
}

void MainWindow::on_radioButton_3_toggled(bool checked)
{
    QPixmap s ("../interfaz/QtImagen/Lata.jpg");

    if(checked == true)
    {
        ui->Imagen1->setPixmap(s.scaled(100, 90, Qt::IgnoreAspectRatio, Qt::FastTransformation));
    }
    else
    {
        ui->Imagen1->clear();
    }
}
