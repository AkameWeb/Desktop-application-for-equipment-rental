/********************************************************************************
** Form generated from reading UI file 'dialogbg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBG_H
#define UI_DIALOGBG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogBG
{
public:
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QTableView *tableView_2;
    QTableView *tableView;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;

    void setupUi(QDialog *DialogBG)
    {
        if (DialogBG->objectName().isEmpty())
            DialogBG->setObjectName("DialogBG");
        DialogBG->resize(684, 555);
        pushButton_2 = new QPushButton(DialogBG);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 490, 80, 24));
        label_2 = new QLabel(DialogBG);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(9, 9, 117, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);
        pushButton_4 = new QPushButton(DialogBG);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(567, 9, 108, 24));
        label = new QLabel(DialogBG);
        label->setObjectName("label");
        label->setGeometry(QRect(9, 237, 115, 21));
        label->setFont(font);
        pushButton_3 = new QPushButton(DialogBG);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(570, 520, 80, 24));
        pushButton = new QPushButton(DialogBG);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(570, 460, 82, 24));
        tableView_2 = new QTableView(DialogBG);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(9, 295, 521, 251));
        tableView = new QTableView(DialogBG);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(9, 39, 521, 192));
        pushButton_6 = new QPushButton(DialogBG);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(100, 260, 80, 24));
        pushButton_5 = new QPushButton(DialogBG);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(190, 260, 80, 24));
        pushButton_7 = new QPushButton(DialogBG);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(280, 260, 80, 24));

        retranslateUi(DialogBG);

        QMetaObject::connectSlotsByName(DialogBG);
    } // setupUi

    void retranslateUi(QDialog *DialogBG)
    {
        DialogBG->setWindowTitle(QCoreApplication::translate("DialogBG", "\320\221\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200\320\270\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogBG", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("DialogBG", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DialogBG", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("DialogBG", "\320\220\321\200\320\265\320\275\320\264\320\276\320\264\320\260\321\202\320\265\320\273\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DialogBG", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogBG", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("DialogBG", "\320\241\320\272\320\270\320\264\320\272\320\260 5%", nullptr));
        pushButton_5->setText(QCoreApplication::translate("DialogBG", "\320\241\320\272\320\270\320\264\320\272\320\260 10%", nullptr));
        pushButton_7->setText(QCoreApplication::translate("DialogBG", "\320\241\320\272\320\270\320\264\320\272\320\260 15%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogBG: public Ui_DialogBG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBG_H
