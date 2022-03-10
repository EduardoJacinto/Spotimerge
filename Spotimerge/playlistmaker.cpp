#include "playlistmaker.h"
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

QString PlaylistMaker::PlaylistMake(QVector<QString> vec1,QString mrgTxt ,QString savemrgTxt ,Ui::MainWindow* ui) {

    for(int i = 0; i < vec1.size(); ++i){
         mrgTxt = vec1.at(i);
         ui->textEdit3->append(mrgTxt);
     }
    savemrgTxt = ui->textEdit3->toPlainText();
    return savemrgTxt;
}
