#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_actionNew_triggered()
{

}


void MainWindow::on_actionOpen_triggered()
{

}


void MainWindow::on_actionSave_as_triggered()
{

}

void MainWindow::on_actionPrint_triggered()
{

}

void MainWindow::on_actionPaste_triggered()
{

}


void MainWindow::on_actionExit_triggered()
{

}


void MainWindow::on_actionCopy_triggered()
{

}


void MainWindow::on_actionCut_triggered()
{

}


void MainWindow::on_actionUndo_triggered()
{

}


void MainWindow::on_actionRedo_triggered()
{

}


void MainWindow::on_playlist1Button_clicked()
{

}


void MainWindow::on_playlist2Button_clicked()
{

}


void MainWindow::on_quitButton_clicked()
{

}

