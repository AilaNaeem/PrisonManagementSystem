/********************************************************************************
** Form generated from reading UI file 'wardendashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARDENDASHBOARD_H
#define UI_WARDENDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WardenDashboard
{
public:
    QWidget *centralwidget;
    QPushButton *view_transfer_requests_btn;
    QPushButton *logout_btn;
    QPushButton *view_guards_btn;
    QPushButton *view_cells_btn;
    QPushButton *view_prisoners_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WardenDashboard)
    {
        if (WardenDashboard->objectName().isEmpty())
            WardenDashboard->setObjectName("WardenDashboard");
        WardenDashboard->resize(341, 461);
        WardenDashboard->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#WardenDashboard{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"#view_cells_btn,#view_guards_btn,#view_prisoners_btn,#view_transfer_requests_btn,#logout_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#view_cells_btn:hover,#view_guards_btn:hover,#view_prisoners_btn:hover,#view_transfer_requests_btn:hover,#logout_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
""));
        centralwidget = new QWidget(WardenDashboard);
        centralwidget->setObjectName("centralwidget");
        view_transfer_requests_btn = new QPushButton(centralwidget);
        view_transfer_requests_btn->setObjectName("view_transfer_requests_btn");
        view_transfer_requests_btn->setGeometry(QRect(60, 260, 211, 61));
        logout_btn = new QPushButton(centralwidget);
        logout_btn->setObjectName("logout_btn");
        logout_btn->setGeometry(QRect(120, 350, 91, 41));
        view_guards_btn = new QPushButton(centralwidget);
        view_guards_btn->setObjectName("view_guards_btn");
        view_guards_btn->setGeometry(QRect(90, 190, 151, 61));
        view_cells_btn = new QPushButton(centralwidget);
        view_cells_btn->setObjectName("view_cells_btn");
        view_cells_btn->setGeometry(QRect(90, 120, 151, 61));
        view_prisoners_btn = new QPushButton(centralwidget);
        view_prisoners_btn->setObjectName("view_prisoners_btn");
        view_prisoners_btn->setGeometry(QRect(90, 50, 151, 61));
        WardenDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WardenDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 341, 20));
        WardenDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(WardenDashboard);
        statusbar->setObjectName("statusbar");
        WardenDashboard->setStatusBar(statusbar);

        retranslateUi(WardenDashboard);

        QMetaObject::connectSlotsByName(WardenDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *WardenDashboard)
    {
        WardenDashboard->setWindowTitle(QCoreApplication::translate("WardenDashboard", "MainWindow", nullptr));
        view_transfer_requests_btn->setText(QCoreApplication::translate("WardenDashboard", "View Transfer Requests", nullptr));
        logout_btn->setText(QCoreApplication::translate("WardenDashboard", "Logout", nullptr));
        view_guards_btn->setText(QCoreApplication::translate("WardenDashboard", "View Guards", nullptr));
        view_cells_btn->setText(QCoreApplication::translate("WardenDashboard", "View Cells", nullptr));
        view_prisoners_btn->setText(QCoreApplication::translate("WardenDashboard", "View Prisoners", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WardenDashboard: public Ui_WardenDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARDENDASHBOARD_H
