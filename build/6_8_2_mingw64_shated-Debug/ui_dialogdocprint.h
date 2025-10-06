/********************************************************************************
** Form generated from reading UI file 'dialogdocprint.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDOCPRINT_H
#define UI_DIALOGDOCPRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogDocPrint
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *DialogDocPrint)
    {
        if (DialogDocPrint->objectName().isEmpty())
            DialogDocPrint->setObjectName("DialogDocPrint");
        DialogDocPrint->resize(937, 532);
        textEdit = new QTextEdit(DialogDocPrint);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 50, 921, 441));
        pushButton = new QPushButton(DialogDocPrint);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 83, 29));
        pushButton_2 = new QPushButton(DialogDocPrint);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 500, 83, 29));
        pushButton_3 = new QPushButton(DialogDocPrint);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 10, 83, 29));
        pushButton_4 = new QPushButton(DialogDocPrint);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(190, 10, 83, 29));
        pushButton_5 = new QPushButton(DialogDocPrint);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(280, 10, 83, 29));

        retranslateUi(DialogDocPrint);

        QMetaObject::connectSlotsByName(DialogDocPrint);
    } // setupUi

    void retranslateUi(QDialog *DialogDocPrint)
    {
        DialogDocPrint->setWindowTitle(QCoreApplication::translate("DialogDocPrint", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogDocPrint", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogDocPrint", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DialogDocPrint", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DialogDocPrint", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("DialogDocPrint", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDocPrint: public Ui_DialogDocPrint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDOCPRINT_H
