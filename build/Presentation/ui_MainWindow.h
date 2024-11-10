/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Add_pushButton;
    QPushButton *Delete_pushButton;
    QPushButton *Edit_pushButton;
    QTableView *tableView;
    QPushButton *Load_pushButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Add_pushButton = new QPushButton(centralwidget);
        Add_pushButton->setObjectName("Add_pushButton");
        Add_pushButton->setGeometry(QRect(50, 510, 80, 24));
        Delete_pushButton = new QPushButton(centralwidget);
        Delete_pushButton->setObjectName("Delete_pushButton");
        Delete_pushButton->setGeometry(QRect(150, 510, 80, 24));
        Edit_pushButton = new QPushButton(centralwidget);
        Edit_pushButton->setObjectName("Edit_pushButton");
        Edit_pushButton->setGeometry(QRect(250, 510, 80, 24));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 40, 671, 451));
        Load_pushButton = new QPushButton(centralwidget);
        Load_pushButton->setObjectName("Load_pushButton");
        Load_pushButton->setGeometry(QRect(50, 10, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Add_pushButton->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        Delete_pushButton->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        Edit_pushButton->setText(QCoreApplication::translate("MainWindow", "EDIT", nullptr));
        Load_pushButton->setText(QCoreApplication::translate("MainWindow", "LOAD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
