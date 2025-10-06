#ifndef DIALOGDOCPRINT_H
#define DIALOGDOCPRINT_H

#include <QDialog>

namespace Ui {
class DialogDocPrint;
}

class DialogDocPrint : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDocPrint(QWidget *parent = nullptr);
    ~DialogDocPrint();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::DialogDocPrint *ui;
};

#endif // DIALOGDOCPRINT_H
