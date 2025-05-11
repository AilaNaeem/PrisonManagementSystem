/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDashboard
{
public:
    QWidget *centralwidget;
    QPushButton *manage_prisoners_btn;
    QPushButton *logout_btn;
    QPushButton *manage_guards_btn;
    QPushButton *manage_cells_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminDashboard)
    {
        if (AdminDashboard->objectName().isEmpty())
            AdminDashboard->setObjectName("AdminDashboard");
        AdminDashboard->resize(341, 461);
        AdminDashboard->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"AdminDashboard{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"#logout_btn,#manage_cells_btn,#manage_guards_btn,#manage_prisoners_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	font-size: 14px;\n"
"}\n"
"\n"
"#logout_btn:hover,\n"
"#manage_cells_btn:hover,\n"
"#manage_guards_btn:hover,\n"
"#manage_prisoners_btn:hover {\n"
"    background-color: #850101;\n"
"}"));
        centralwidget = new QWidget(AdminDashboard);
        centralwidget->setObjectName("centralwidget");
        manage_prisoners_btn = new QPushButton(centralwidget);
        manage_prisoners_btn->setObjectName("manage_prisoners_btn");
        manage_prisoners_btn->setGeometry(QRect(100, 60, 131, 61));
        logout_btn = new QPushButton(centralwidget);
        logout_btn->setObjectName("logout_btn");
        logout_btn->setGeometry(QRect(120, 310, 91, 41));
        manage_guards_btn = new QPushButton(centralwidget);
        manage_guards_btn->setObjectName("manage_guards_btn");
        manage_guards_btn->setGeometry(QRect(100, 200, 131, 61));
        manage_cells_btn = new QPushButton(centralwidget);
        manage_cells_btn->setObjectName("manage_cells_btn");
        manage_cells_btn->setGeometry(QRect(100, 130, 131, 61));
        AdminDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 341, 20));
        AdminDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminDashboard);
        statusbar->setObjectName("statusbar");
        AdminDashboard->setStatusBar(statusbar);

        retranslateUi(AdminDashboard);

        QMetaObject::connectSlotsByName(AdminDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *AdminDashboard)
    {
        AdminDashboard->setWindowTitle(QCoreApplication::translate("AdminDashboard", "MainWindow", nullptr));
        manage_prisoners_btn->setText(QCoreApplication::translate("AdminDashboard", "Manage Prisoners", nullptr));
        logout_btn->setText(QCoreApplication::translate("AdminDashboard", "Logout", nullptr));
        manage_guards_btn->setText(QCoreApplication::translate("AdminDashboard", "Manage Guards", nullptr));
        manage_cells_btn->setText(QCoreApplication::translate("AdminDashboard", "Manage Cells", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDashboard: public Ui_AdminDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
