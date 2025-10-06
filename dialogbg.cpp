#include "dialogbg.h"
#include "ui_dialogbg.h"
#include "QSqlError"
#include "QMessageBox"
#include "dialogdocprint.h"
#include <QDir>
#include <QStandardPaths>

DialogBG::DialogBG(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogBG)
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
    qDebug() << "Файл БД существует?" << QFile::exists(dbPath);
    qDebug("open localhost");
    if (db.open()){
        query = new QSqlQuery(db);
        query->exec("CREATE TABLE Instr(NameInst TEXT, Sostoin TEXT, godV TEXT, garantia TEXT,Position TEXT);");
        model = new QSqlTableModel(this, db);
        model->setTable("Instr");
        model->select();

        query->exec("CREATE TABLE ArUser(ID INTEGER, FIO TEXT,Phone TEXT,NameInst TEXT,INNOrgan TEXT,SerNum TEXT,prise INTEGER);");
        modelUSER = new QSqlTableModel(this, db);
        modelUSER->setTable("ArUser");
        modelUSER->select();
        ui->tableView->setModel(model);
        ui->tableView_2->setModel(modelUSER);
    }else {
        qDebug("no open localhost");
        db.close();
        QSqlDatabase::removeDatabase(db.connectionName());
    }

}
DialogBG::~DialogBG()
{
    delete ui;
}

void DialogBG::on_tableView_2_clicked(const QModelIndex &index)
{
    row = index.row();
}

void DialogBG::on_pushButton_clicked()
{
    modelUSER->insertRow(modelUSER->rowCount());
}

void DialogBG::on_pushButton_2_clicked()
{
    modelUSER->removeRow(row);
}

void DialogBG::on_pushButton_3_clicked()
{
    modelUSER->select();
}

void DialogBG::on_pushButton_4_clicked()
{
    DialogDocPrint dialogPrint;
    //close();
    dialogPrint.setModal(true);
    dialogPrint.exec();
}


void DialogBG::on_pushButton_6_clicked()
{
    //  Проверка инициализации
    if(!ui->tableView_2) {
        qDebug() << "Ошибка: tableView_2 не инициализирован";
        QMessageBox::critical(this, "Ошибка", "Таблица не доступна");
        return;
    }


    //  Получаем текущую выбранную строку
    QModelIndex currentIndex = ui->tableView_2->currentIndex();
    if(!currentIndex.isValid()) {
        QMessageBox::warning(this, "Предупреждение", "Выберите строку для применения скидки");
        return;
    }
    int row = currentIndex.row();

    //  Проверка модели данных
    if(!modelUSER) {
        qDebug() << "Ошибка: modelUSER не инициализирован";
        return;
    }

    //  Получаем ID из первого столбца
    QModelIndex idIndex = modelUSER->index(row, 0);
    if(!idIndex.isValid()) {
        qDebug() << "Ошибка: неверный индекс для ID";
        return;
    }

    int id = modelUSER->data(idIndex).toInt();
    if(id <= 0) {
        qDebug() << "Ошибка: неверный ID";
        return;
    }

    // 5. Выполняем запрос на обновление
    QSqlQuery query;
    query.prepare("UPDATE ArUser SET prise = prise * 0.95 WHERE ID = :ID");
    query.bindValue(":ID", id);

    if(!query.exec()) {
        qDebug() << "Ошибка при обновлении цены:" << query.lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось применить скидку");
        return;
    }

    // 6. Обновляем модель
    if(!modelUSER->select()) {
        qDebug() << "Ошибка при обновлении модели:" << modelUSER->lastError().text();
        return;
    }


    QMessageBox::information(this, "Успех", "Скидка 5% успешно применена!");
}


void DialogBG::on_pushButton_5_clicked()
{
    // 1. Проверка инициализации tableView_2
    if(!ui->tableView_2) {
        qDebug() << "Ошибка: tableView_2 не инициализирован";
        QMessageBox::critical(this, "Ошибка", "Таблица не доступна");
        return;
    }


    // 2. Получаем текущую выбранную строку
    QModelIndex currentIndex = ui->tableView_2->currentIndex();
    if(!currentIndex.isValid()) {
        QMessageBox::warning(this, "Предупреждение", "Выберите строку для применения скидки");
        return;
    }
    int row = currentIndex.row();

    // 3. Проверка модели данных
    if(!modelUSER) {
        qDebug() << "Ошибка: modelUSER не инициализирован";
        return;
    }

    // 4. Получаем ID из первого столбца
    QModelIndex idIndex = modelUSER->index(row, 0);
    if(!idIndex.isValid()) {
        qDebug() << "Ошибка: неверный индекс для ID";
        return;
    }

    int id = modelUSER->data(idIndex).toInt();
    if(id <= 0) {
        qDebug() << "Ошибка: неверный ID";
        return;
    }

    // 5. Выполняем запрос на обновление
    QSqlQuery query;
    query.prepare("UPDATE ArUser SET prise = prise * 0.90 WHERE ID = :ID");
    query.bindValue(":ID", id);

    if(!query.exec()) {
        qDebug() << "Ошибка при обновлении цены:" << query.lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось применить скидку");
        return;
    }

    // 6. Обновляем модель
    if(!modelUSER->select()) {
        qDebug() << "Ошибка при обновлении модели:" << modelUSER->lastError().text();
        return;
    }


    QMessageBox::information(this, "Успех", "Скидка 10% успешно применена!");
}


void DialogBG::on_pushButton_7_clicked()
{
    // 1. Проверка инициализации tableView_2
    if(!ui->tableView_2) {
        qDebug() << "Ошибка: tableView_2 не инициализирован";
        QMessageBox::critical(this, "Ошибка", "Таблица не доступна");
        return;
    }


    // 2. Получаем текущую выбранную строку
    QModelIndex currentIndex = ui->tableView_2->currentIndex();
    if(!currentIndex.isValid()) {
        QMessageBox::warning(this, "Предупреждение", "Выберите строку для применения скидки");
        return;
    }
    int row = currentIndex.row();

    // 3. Проверка модели данных
    if(!modelUSER) {
        qDebug() << "Ошибка: modelUSER не инициализирован";
        return;
    }

    // 4. Получаем ID из первого столбца
    QModelIndex idIndex = modelUSER->index(row, 0);
    if(!idIndex.isValid()) {
        qDebug() << "Ошибка: неверный индекс для ID";
        return;
    }

    int id = modelUSER->data(idIndex).toInt();
    if(id <= 0) {
        qDebug() << "Ошибка: неверный ID";
        return;
    }

    // 5. Выполняем запрос на обновление
    QSqlQuery query;
    query.prepare("UPDATE ArUser SET prise = prise * 0.85 WHERE ID = :ID");
    query.bindValue(":ID", id);

    if(!query.exec()) {
        qDebug() << "Ошибка при обновлении цены:" << query.lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось применить скидку");
        return;
    }

    // 6. Обновляем модель
    if(!modelUSER->select()) {
        qDebug() << "Ошибка при обновлении модели:" << modelUSER->lastError().text();
        return;
    }


    QMessageBox::information(this, "Успех", "Скидка 15% успешно применена!");
}

