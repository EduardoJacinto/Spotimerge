#ifndef BASEBUTTON_H
#define BASEBUTTON_H

#include "mainwindow.h"

class baseButton
{
public:
   virtual ~baseButton() = default;

   virtual void buttonAction(Ui::MainWindow*) = 0;
};

#endif // BASEBUTTON_H
