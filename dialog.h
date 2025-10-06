#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();


    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

private:
    Ui::Dialog *ui;
    QSqlDatabase db, dbglobal;
    QSqlQuery *query;
    QSqlTableModel *model, *modelPS;

    int row, row2;
};

#endif // DIALOG_H
