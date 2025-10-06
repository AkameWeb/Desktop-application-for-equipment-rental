#include "dialogprint.h"
#include "ui_dialogprint.h"

DialogPrintD::DialogPrintD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogPrintD)
{
    ui->setupUi(this);
}

DialogPrintD::~DialogPrintD()
{
    delete ui;
}
