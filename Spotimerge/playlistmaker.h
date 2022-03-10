#ifndef PLAYLISTMAKER_H
#define PLAYLISTMAKER_H

#include <QVector>
#include <QString>
#include "mainwindow.h"
#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include "ui_mainwindow.h"
class PlaylistMaker
{
public:
    //PlaylistMaker();
    QString PlaylistMake(QVector<QString> vec1,QString ,QString ,Ui::MainWindow*);
};

#endif // PLAYLISTMAKER_H
