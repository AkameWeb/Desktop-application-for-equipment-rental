/********************************************************************************
** Form generated from reading UI file 'dialogvs.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVS_H
#define UI_DIALOGVS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogVS
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QTableView *tableView_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QDialog *DialogVS)
    {
        if (DialogVS->objectName().isEmpty())
            DialogVS->setObjectName("DialogVS");
        DialogVS->resize(660, 660);
        gridLayout = new QGridLayout(DialogVS);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(DialogVS);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        pushButton_4 = new QPushButton(DialogVS);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 6, 0, 1, 1);

        tableView_2 = new QTableView(DialogVS);
        tableView_2->setObjectName("tableView_2");

        gridLayout->addWidget(tableView_2, 5, 0, 1, 2);

        pushButton_5 = new QPushButton(DialogVS);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 6, 1, 1, 1);

        pushButton_3 = new QPushButton(DialogVS);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 7, 0, 1, 2);

        pushButton = new QPushButton(DialogVS);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(DialogVS);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        label_2 = new QLabel(DialogVS);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(DialogVS);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        label = new QLabel(DialogVS);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 4, 0, 1, 1);


        retranslateUi(DialogVS);

        QMetaObject::connectSlotsByName(DialogVS);
    } // setupUi

    void retranslateUi(QDialog *DialogVS)
    {
        DialogVS->setWindowTitle(QCoreApplication::translate("DialogVS", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DialogVS", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("DialogVS", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_3->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pushButton_3->setText(QCoreApplication::translate("DialogVS", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogVS", "\320\235\320\276\320\262\320\260\321\217 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogVS", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("DialogVS", "\320\222\320\276\320\267\320\262\321\200\320\260\321\202 \320\276\320\261\320\273\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pushButton_6->setText(QCoreApplication::translate("DialogVS", "\320\237\320\265\321\207\320\260\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("DialogVS", "\320\241\320\265\321\200\320\262\320\270\321\201\320\275\321\213\320\271 \321\206\320\265\320\275\321\202\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogVS: public Ui_DialogVS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVS_H
