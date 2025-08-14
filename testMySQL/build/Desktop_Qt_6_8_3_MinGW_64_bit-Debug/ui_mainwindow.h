/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditHost;
    QLabel *label_2;
    QLineEdit *lineEditDataBase;
    QLabel *label_3;
    QLineEdit *lineEditUsrName;
    QLabel *label_4;
    QLineEdit *lineEditPwd;
    QLabel *label_5;
    QLineEdit *lineEditTableName;
    QGridLayout *gridLayout_2;
    QPushButton *btnConnect;
    QPushButton *btnRefresh;
    QPushButton *btnDisconnect;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 609);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditHost = new QLineEdit(groupBox);
        lineEditHost->setObjectName("lineEditHost");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditHost);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditDataBase = new QLineEdit(groupBox);
        lineEditDataBase->setObjectName("lineEditDataBase");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditDataBase);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditUsrName = new QLineEdit(groupBox);
        lineEditUsrName->setObjectName("lineEditUsrName");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditUsrName);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEditPwd = new QLineEdit(groupBox);
        lineEditPwd->setObjectName("lineEditPwd");
        lineEditPwd->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPwd);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEditTableName = new QLineEdit(groupBox);
        lineEditTableName->setObjectName("lineEditTableName");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditTableName);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        btnConnect = new QPushButton(groupBox);
        btnConnect->setObjectName("btnConnect");

        gridLayout_2->addWidget(btnConnect, 0, 1, 1, 1);

        btnRefresh = new QPushButton(groupBox);
        btnRefresh->setObjectName("btnRefresh");

        gridLayout_2->addWidget(btnRefresh, 0, 2, 1, 1);

        btnDisconnect = new QPushButton(groupBox);
        btnDisconnect->setObjectName("btnDisconnect");

        gridLayout_2->addWidget(btnDisconnect, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 1, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");
        tableView->setGridStyle(Qt::PenStyle::NoPen);

        gridLayout->addWidget(tableView, 1, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\346\237\245\347\234\213\345\231\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\350\277\236\346\216\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\234\272\357\274\232", nullptr));
        lineEditHost->setText(QCoreApplication::translate("MainWindow", "localhost", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\357\274\232", nullptr));
        lineEditDataBase->setText(QCoreApplication::translate("MainWindow", "company", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineEditUsrName->setText(QCoreApplication::translate("MainWindow", "root", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        lineEditPwd->setText(QCoreApplication::translate("MainWindow", "2389006", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\350\241\250\345\220\215\357\274\232", nullptr));
        lineEditTableName->setText(QCoreApplication::translate("MainWindow", "employees", nullptr));
        btnConnect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223", nullptr));
        btnRefresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\346\225\260\346\215\256", nullptr));
        btnDisconnect->setText(QCoreApplication::translate("MainWindow", "\346\226\255\345\274\200\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
