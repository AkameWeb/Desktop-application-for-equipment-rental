#include "mainwindow.h"
#include <QDir>
#include <QApplication>
#include <QCoreApplication>
#include <QPluginLoader>
#include "QMessageBox"
#include <QSqlDatabase>
#include <QDebug>
#include "QSqlError"

int main(int argc, char *argv[])
{


    QString pluginsPath = QDir::toNativeSeparators("C:/Users/AkiWeb/Desktop/BD/build/6_8_2_mingw64_shated-Debug/debug/plugins/sqldrivers");
    qputenv("QT_PLUGIN_PATH", pluginsPath.toLocal8Bit());

    //QCoreApplication::addLibraryPath("");

    QPluginLoader loader("pluginsPath");
    if(!loader.load()) {
        qDebug() << "Ошибка загрузки:" << loader.errorString();
    }
    qDebug() << "Доступные драйверы:" << QSqlDatabase::drivers();
    QApplication a(argc, argv);
    // Проверяем драйверы

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    if (!QSqlDatabase::isDriverAvailable("QSQLITE")) {
        qCritical() << "Драйвер QSQLITE не загружен!";
        return 1;
    }


    // Явно добавляем путь к плагинам

    //QCoreApplication a(argc, argv);

    qDebug() << QSqlDatabase::drivers();

    MainWindow w;
    w.show();
    return a.exec();
}
