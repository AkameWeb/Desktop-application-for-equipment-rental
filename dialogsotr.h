#ifndef DIALOGSOTR_H
#define DIALOGSOTR_H


#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class DialogSotr;
}

class DialogSotr : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSotr(QWidget *parent = nullptr);
    ~DialogSotr();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::DialogSotr *ui;
    QSqlDatabase db, dbglobal;
    QSqlQuery *query;
    QSqlTableModel *model;

    int row;
};


#endif // DIALOGSOTR_H
