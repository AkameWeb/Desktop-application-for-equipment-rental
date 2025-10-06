#ifndef DIALOGVS_H
#define DIALOGVS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class DialogVS;
}

class DialogVS : public QDialog
{
    Q_OBJECT

public:
    explicit DialogVS(QWidget *parent = nullptr);
    ~DialogVS();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::DialogVS *ui;
    QSqlDatabase db, dbglobal;
    QSqlQuery *query;
    QSqlTableModel *model, *modelSER;

    int row, row2;
};

#endif // DIALOGVS_H
