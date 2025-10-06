#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialogbg.h"
#include "dialogvs.h"
#include "QMessageBox"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("./BD.db");


//    query = new QSqlQuery(db);
//    query->exec("CREATE TABLE register(Logins TEXT, PasswordReg TEXT;");
//    query->prepare("INSERT INTO register (Logins, PasswordReg) values ('Admin','1111');");
//    query->prepare("INSERT INTO register (Logins, PasswordReg) values ('Bag','2222');");
//    query->prepare("INSERT INTO register (Logins, PasswordReg) values ('VZR','3333');");
//    model = new QSqlTableModel(this, db);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString login = ui->lineEdit->text();
    QString Password = ui->lineEdit_2->text();
    if(login == "Admin" & Password == "1111" ){
        Dialog dialog;
        //close();
        dialog.setModal(true);
        dialog.exec();
    }
    if(login == "Bag" & Password == "2222" ){
        DialogBG dialogbg;
        //close();
        dialogbg.setModal(true);
        dialogbg.exec();
    }
    if(login == "VZR" & Password == "3333" ){
        DialogVS dialogvs;
        //close();
        dialogvs.setModal(true);
        dialogvs.exec();
    }
    if (login == "" & Password == ""){
        QMessageBox::warning(this, "Авторизация","Такого пользователя нет!");
    }
}


void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}


void MainWindow::on_action_2_triggered()
{
    system("start http://localhost//WEBK//index.html");
}

