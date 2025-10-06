#ifndef DIALOGBG_H
#define DIALOGBG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
namespace Ui {
class DialogBG;
}

class DialogBG : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBG(QWidget *parent = nullptr);
    ~DialogBG();

private slots:
    void on_tableView_2_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::DialogBG *ui;
    QSqlDatabase db, dbglobal;
    QSqlQuery *query;
    QSqlTableModel *model, *modelUSER;

    int row;
};

#endif // DIALOGBG_H
