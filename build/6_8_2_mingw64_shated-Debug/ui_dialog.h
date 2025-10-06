/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTableView *tableView_2;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(907, 645);
        tableView = new QTableView(Dialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 30, 471, 371));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(760, 410, 138, 29));
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 520, 131, 29));
        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(10, 600, 131, 29));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 480, 211, 28));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 560, 211, 28));
        tableView_2 = new QTableView(Dialog);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(510, 30, 361, 371));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(510, 10, 241, 16));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 241, 16));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(720, 490, 161, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout->addWidget(pushButton_9);

        verticalLayoutWidget_2 = new QWidget(Dialog);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(370, 410, 111, 86));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(verticalLayoutWidget_2);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_2->addWidget(pushButton_6);

        verticalLayoutWidget_3 = new QWidget(Dialog);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(510, 410, 111, 86));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_12 = new QPushButton(verticalLayoutWidget_3);
        pushButton_12->setObjectName("pushButton_12");

        verticalLayout_3->addWidget(pushButton_12);

        pushButton_10 = new QPushButton(verticalLayoutWidget_3);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout_3->addWidget(pushButton_10);

        pushButton_13 = new QPushButton(verticalLayoutWidget_3);
        pushButton_13->setObjectName("pushButton_13");

        verticalLayout_3->addWidget(pushButton_13);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "\320\240\320\260\321\201\321\207\321\221\321\202 \320\277\321\200\320\270\320\261\321\213\320\273\320\270", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "\320\240\320\260\321\201\321\207\321\221\321\202 \321\200\320\260\321\201\321\205\320\276\320\264\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\237\320\276\321\201\321\202\320\260\320\262\321\211\320\270\320\272\320\270 \320\270 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "\320\236\320\272\320\275\320\276 \320\261\321\203\321\205\320\263\320\260\320\273\321\202\320\265\321\200\320\270\320\270", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "\320\236\320\272\320\275\320\276 \320\262\320\276\320\267\320\262\321\200\320\260\321\202\320\260", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "\320\236\320\272\320\275\320\276 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Dialog", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Dialog", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
