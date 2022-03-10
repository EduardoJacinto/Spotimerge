#ifndef REDO_H
#define REDO_H
#include "basebutton.h"
#include "mainwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"

class redo : public baseButton
{
public:
     virtual void buttonAction(Ui::MainWindow* ui){
       ui->textEdit->redo();
    }

};
#endif // REDO_H
