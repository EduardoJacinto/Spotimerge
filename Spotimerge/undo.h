#ifndef UNDO_H
#define UNDO_H
#include "basebutton.h"
#include "mainwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"

class undo : public baseButton
{
public:
     virtual void buttonAction(Ui::MainWindow* ui){
       ui->textEdit->undo();
    }

};
#endif //UNDO_H
