#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <vector>
#include <QVector>
#include <fstream>
#include <iostream>
#include <QDebug>

#include "MergePlaylist.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Playlist GUI");
    //  this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());
}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open a file");
        QFile file(fileName);
        currentFile = fileName;
        if(!file.open(QIODevice::ReadOnly | QFile::Text)){
            QMessageBox::warning(this,"Warning", "Cannot open file: " + file.errorString());
            return;
        }
        setWindowTitle(fileName);
        QTextStream in(&file);
        QString text = in.readAll();
        ui->textEdit->setText(text);
        file.close();
}

void MainWindow::on_actionSave_as_triggered(){
    QString fileName = QFileDialog::getSaveFileName(this,"Save as");
        QFile file(fileName);
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this,"Warning", "Cannot save file: " + file.errorString());
            return;
        }
        currentFile = fileName;
        setWindowTitle(fileName);
        QTextStream out(&file);
        QString text = ui->textEdit->toPlainText();
        QString text2 = ui->textEdit2->toPlainText();
        out << text << "\n" <<text2;
        file.close();
}
void MainWindow::on_actionSave_as_triggered(QString text)
{
    QString fileName = QFileDialog::getSaveFileName(this,"Save as");
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"Warning", "Cannot save file: " + file.errorString());
        return;
    }
    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    out << text;
    file.close();
}


void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
        printer.setPrinterName("Printer Name");
        QPrintDialog pDialog(&printer ,this);
        if(pDialog.exec() == QDialog::Rejected){
            QMessageBox::warning(this, "Warning", "Cannot Access printer");
            return;
        }
}

void MainWindow::on_actionPaste_triggered()
{
 ui->textEdit->paste();
}


void MainWindow::on_actionExit_triggered()
{
 QApplication::quit();
}


void MainWindow::on_actionCopy_triggered()
{
 ui->textEdit->copy();
}


void MainWindow::on_actionCut_triggered()
{
 ui->textEdit->cut();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_playlist1Button_clicked()
{


    QString fileName = QFileDialog::getOpenFileName(this, "Open a file");
        QFile file(fileName);
        currentFile = fileName;
        if(!file.open(QIODevice::ReadOnly | QFile::Text)){
            QMessageBox::warning(this,"Warning", "Cannot open file: " + file.errorString());
            return;
        }

        setWindowTitle(fileName);
        QTextStream in(&file);
        QString text = in.readAll();
        //ui->textEdit->setText(vec1);
            QTextStream * stream = new QTextStream(&text , QIODevice::ReadOnly);
          //QVector<QString > lines;
            while (!stream->atEnd())
            {
               lines << stream->readLine();
            }
        ui->textEdit->setText(text);
        qDebug() << lines;
        file.close();      
}



void MainWindow::on_playlist2Button_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open a file");
       QFile file(fileName);
       currentFile = fileName;
       if(!file.open(QIODevice::ReadOnly | QFile::Text)){
           QMessageBox::warning(this,"Warning", "Cannot open file: " + file.errorString());
           return;
       }
       setWindowTitle(fileName);
       QTextStream in(&file);
       QString text = in.readAll();
       QTextStream * stream = new QTextStream(&text , QIODevice::ReadOnly);

       while (!stream->atEnd())
       {
         lines2 << stream->readLine();
      }
   ui->textEdit2->setText(text);
        qDebug() << lines2;
       ui->textEdit2->setText(text);
       file.close();
}


void MainWindow::on_quitButton_clicked()
{
    QApplication::quit();
}


void MainWindow::on_MergeButton_clicked()
{
    QVector <QString> lines4;
        lines4.clear();
         ui->textEdit3->clear();
     //   for(int i = 0; i < lines.size(); ++i) {
     //       for(int j = 0; j < lines2.size(); ++j) {
     //           if(lines.at(i) == lines2.at(j)) {
     //               lines3.append(lines.at(i));
     //          }
     //       }
        MergePlaylist playlist;
    //   }
    //    qDebug() << lines << lines2;
           qDebug() << playlist.findCommonSongs(lines, lines2, lines3);
           lines4 = playlist.findCommonSongs(lines, lines2, lines3);


           //qDebug() << lines4;
           for(int i = 0; i < lines4.size(); ++i){
                mergeText = lines4.at(i);
                ui->textEdit3->append(mergeText);
            }
           mergeSaveText = ui->textEdit3->toPlainText();
           qDebug() << "Save test" << mergeSaveText;
           lines4.clear();
           qDebug() << lines4;
}


void MainWindow::on_saveMerge_clicked()
{
         MainWindow::on_actionSave_as_triggered(mergeSaveText);


}

