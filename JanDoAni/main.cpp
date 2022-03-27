#include "mainwindow.h"
#include "message.h"
#include "orderedList.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("JanDoAni - app");
    w.show();
    return a.exec();
}
