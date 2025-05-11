/********************************************************************************
** Form generated from reading UI file 'guarddashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARDDASHBOARD_H
#define UI_GUARDDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuardDashboard
{
public:
    QWidget *centralwidget;
    QTableWidget *prisonersTableWidget;
    QPushButton *logout_btn;
    QLabel *titleLabel;
    QPushButton *requestTransfer_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GuardDashboard)
    {
        if (GuardDashboard->objectName().isEmpty())
            GuardDashboard->setObjectName("GuardDashboard");
        GuardDashboard->resize(943, 462);
        GuardDashboard->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#GuardDashboard{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"\n"
"QTableWidget {\n"
"    background-color: white;\n"
"    border: 3px solid gray;\n"
"    gridline-color: gray;\n"
"    font-size: 14px;\n"
"	color:black;\n"
"}\n"
"\n"
"QHeaderView{\n"
"	font: 700, 16pt;\n"
"}\n"
"\n"
"#requestTransfer_btn,#logout_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#requestTransfer_btn:hover,#logout_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#titleLabel{\n"
"	color:white;\n"
"	font-weight:bold;\n"
"}\n"
""));
        centralwidget = new QWidget(GuardDashboard);
        centralwidget->setObjectName("centralwidget");
        prisonersTableWidget = new QTableWidget(centralwidget);
        prisonersTableWidget->setObjectName("prisonersTableWidget");
        prisonersTableWidget->setGeometry(QRect(40, 70, 831, 192));
        prisonersTableWidget->setMinimumSize(QSize(831, 0));
        logout_btn = new QPushButton(centralwidget);
        logout_btn->setObjectName("logout_btn");
        logout_btn->setGeometry(QRect(770, 280, 101, 41));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(40, 30, 431, 21));
        titleLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        requestTransfer_btn = new QPushButton(centralwidget);
        requestTransfer_btn->setObjectName("requestTransfer_btn");
        requestTransfer_btn->setGeometry(QRect(50, 280, 141, 51));
        GuardDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GuardDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 943, 20));
        GuardDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(GuardDashboard);
        statusbar->setObjectName("statusbar");
        GuardDashboard->setStatusBar(statusbar);

        retranslateUi(GuardDashboard);

        QMetaObject::connectSlotsByName(GuardDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *GuardDashboard)
    {
        GuardDashboard->setWindowTitle(QCoreApplication::translate("GuardDashboard", "MainWindow", nullptr));
        logout_btn->setText(QCoreApplication::translate("GuardDashboard", "Logout", nullptr));
        titleLabel->setText(QCoreApplication::translate("GuardDashboard", "Cells Information:", nullptr));
        requestTransfer_btn->setText(QCoreApplication::translate("GuardDashboard", "Request Transfer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuardDashboard: public Ui_GuardDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARDDASHBOARD_H
