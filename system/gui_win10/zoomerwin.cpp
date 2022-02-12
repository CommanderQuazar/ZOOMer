#include "zoomerwin.h"
#include "ui_zoomerwin.h"

ZOOMerWin::ZOOMerWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ZOOMerWin)
{
    ui->setupUi(this);
}

ZOOMerWin::~ZOOMerWin()
{
    delete ui;
}

