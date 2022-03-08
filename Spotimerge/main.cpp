#include "mainwindow.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    std::vector<std::string> vec1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
