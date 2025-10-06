#include "dialogsotr.h"
#include "ui_dialogsotr.h"
#include "QSqlError"
#include "QMessageBox"
#include "dialogdocprint.h"
#include "QPainter"
#include "QPrintDialog"
#include "QPrinter"
#include "dialogdocprint.h"
#include <QDir>

DialogSotr::DialogSotr(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogSotr)
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
    if (db.open()) {
        qDebug("open localhost");
        // создание таблицы локальной бд
        query = new QSqlQuery(db);
        query->exec("CREATE TABLE Sotr(Names TEXT, SerNum, dr TEXT,Age TEXT, Pozition TEXT, "
                    "prise TEXT);");
        model = new QSqlTableModel(this, db);
        model->setTable("Sotr");
        model->select();
        ui->tableView->setModel(model);
    } else {
        qDebug("no open localhost");
    }

}

DialogSotr::~DialogSotr()
{
    delete ui;
}

void DialogSotr::on_pushButton_2_clicked()
{
    model->removeRow(row);
}


void DialogSotr::on_pushButton_clicked()
{
     model->insertRow(model->rowCount());
}


void DialogSotr::on_pushButton_3_clicked()
{
    model->select();
}


void DialogSotr::on_tableView_clicked(const QModelIndex &index)
{
     row = index.row();
}


void DialogSotr::on_pushButton_4_clicked()
{
    QPrinter printer;
    QPrintDialog dialog(&printer, this);
    if(dialog.exec() == QDialog::Accepted){
        QPainter painter(&printer);
        ui->tableView->render(&painter);

    }
}


void DialogSotr::on_pushButton_5_clicked()
{
    DialogDocPrint dialogPrint;
    //close();
    dialogPrint.setModal(true);
    dialogPrint.exec();
}

