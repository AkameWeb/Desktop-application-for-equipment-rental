/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(254, 275);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 4, 0, 1, 2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 5, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 6, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 254, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu->setAcceptDrops(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addSeparator();
        menu->addSeparator();
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\321\213\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\210 \321\201\320\260\320\271\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270 ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\321\213\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
