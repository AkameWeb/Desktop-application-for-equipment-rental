#include "dialogvs.h"
#include "ui_dialogvs.h"
#include "QSqlError"
#include "QMessageBox"
#include "dialogdocprint.h"
#include <QDir>
DialogVS::DialogVS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogVS)
{
    ui->setupUi(this);
    qDebug() << "Пути поиска плагинов Qt:" << QCoreApplication::libraryPaths();
    qDebug() << "Доступные драйверы:" << QSqlDatabase::drivers();

    QString dbPath = QCoreApplication::applicationDirPath() + "/BD.db";
    QDir().mkpath(QFileInfo(dbPath).absolutePath());

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);
    db.open();
    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка",
                              "Не удалось открыть БД:\n" + db.lastError().text() +
                                  "\nПуть: " + dbPath);
        return;
    }
    bool connected = db.open();

    if (!connected) {
        QMessageBox::critical( // Диалог с сообщением об ошибке.
            parent,                      // Родительский виджет.
            QObject::tr("Database Error"),   // Заголовок.
            dbglobal.lastError().text());          // Текст сообщения.
        qDebug("no open");

    }
    // проверка локальной бд
    qDebug() << "Файл БД существует?" << QFile::exists(dbPath);
    qDebug("open localhost");
    if (db.open()){
        query = new QSqlQuery(db);
        query->exec("create table Vozr(IDArUserAr TEXT, Number TEXT, NameInstr TEXT, Prise INTEGER, UslVZ TEXT);");
        model = new QSqlTableModel(this, db);
        model->setTable("Vozr");
        model->select();

        query->exec("create table Rem(IDVozrRemAr TEXT,Number TEXT,Neispr TEXT,DataRem TEXT,Prise INTEGER);");
        modelSER = new QSqlTableModel(this, db);
        modelSER->setTable("Rem");
        modelSER->select();
        ui->tableView->setModel(model);
        ui->tableView_2->setModel(modelSER);
    }
    else {
        qDebug("no open localhost");
        db.close();
        QSqlDatabase::removeDatabase(db.connectionName());
    }

}

DialogVS::~DialogVS()
{
    delete ui;
}

void DialogVS::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void DialogVS::on_tableView_2_clicked(const QModelIndex &index)
{
    row2 = index.row();
}


void DialogVS::on_pushButton_2_clicked()
{
    model->removeRow(row);
}


void DialogVS::on_pushButton_5_clicked()
{
    modelSER->removeRow(row2);
}


void DialogVS::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void DialogVS::on_pushButton_4_clicked()
{
    modelSER->insertRow(modelSER->rowCount());
}


void DialogVS::on_pushButton_3_clicked()
{
    modelSER->select();
    model->select();
}


void DialogVS::on_pushButton_6_clicked()
{
    DialogDocPrint dialogPrint;
    //close();
    dialogPrint.setModal(true);
    dialogPrint.exec();
}

