#ifndef PASTE_H
#define PASTE_H
#include "basebutton.h"
#include "mainwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"

class paste : public baseButton
{
public:
     virtual void buttonAction(Ui::MainWindow* ui){
       ui->textEdit->paste();
    }

};
#endif // PASTE_H
