#include "dialogdocprint.h"
#include "ui_dialogdocprint.h"
#include "QPrintDialog"
#include "QPrinter"
#include "QFile"
#include "QFileDialog"
#include "QDialog"

DialogDocPrint::DialogDocPrint(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogDocPrint)
{
    ui->setupUi(this);
}

DialogDocPrint::~DialogDocPrint()
{
    delete ui;
}

void DialogDocPrint::on_pushButton_clicked()
{
    QPrinter printer;
    printer.setPrinterName("Печать документа");
    QPrintDialog dialog(&printer, this);
    if(dialog.exec() == QDialog::Rejected){
        return;
    }
    ui->textEdit->print(&printer);

}


void DialogDocPrint::on_pushButton_2_clicked()
{
    close();
}


void DialogDocPrint::on_pushButton_3_clicked()
{
    QString str = QFileDialog::getSaveFileName(0, "Сохранить текст","","*.txt");
    QFile file(str);
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.close();
}


void DialogDocPrint::on_pushButton_4_clicked()
{
    QString str =  QFileDialog::getOpenFileName(0, "Открыть", "", "*.txt");
    QFile file(str);
    if (file.open(QIODevice::ReadOnly))
    {
        QString temp(file.readAll());
        ui -> textEdit -> append(temp);
    }
}

