#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget ico_ventana;
    ico_ventana.setWindowIcon(QIcon("../interfaz/QtImagen/Icono.ico") );
    MainWindow w;
    w.show();
    return a.exec();
}
