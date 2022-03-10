#ifndef COPIE_H
#define COPIE_H
#include "basebutton.h"
#include "mainwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"

class copie : public baseButton
{
public:
     virtual void buttonAction(Ui::MainWindow* ui){
       ui->textEdit->copy();
    }

};

#endif // COPIE_H
