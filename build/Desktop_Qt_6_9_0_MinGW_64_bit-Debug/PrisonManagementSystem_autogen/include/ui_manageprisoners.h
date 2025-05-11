/********************************************************************************
** Form generated from reading UI file 'manageprisoners.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEPRISONERS_H
#define UI_MANAGEPRISONERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_managePrisoners
{
public:
    QPushButton *search_btn;
    QPushButton *edit_btn;
    QLineEdit *searchLineEdit;
    QPushButton *add_prisoner_btn;
    QTableWidget *prisonersTableWidget;
    QPushButton *exit_btn;
    QPushButton *remove_prisoner_btn;
    QPushButton *view_all_prisoners_btn;
    QPushButton *view_cur_prisoners_btn;
    QLabel *searchLabel;
    QLabel *label;

    void setupUi(QDialog *managePrisoners)
    {
        if (managePrisoners->objectName().isEmpty())
            managePrisoners->setObjectName("managePrisoners");
        managePrisoners->resize(1119, 742);
        managePrisoners->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#managePrisoners{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: white;\n"
"    border: 3px solid gray;\n"
"    gridline-color: gray;\n"
"    font-size: 14px;\n"
"color:black;\n"
"}\n"
"\n"
"QHeaderView{\n"
"	font: 700, 16pt;\n"
"}\n"
"\n"
"#add_prisoner_btn,#exit_btn,#edit_btn,#remove_prisoner_btn,#search_btn,#view_all_prisoners_btn,#view_cur_prisoners_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#add_prisoner_btn:hover, \n"
"#exit_btn:hover, \n"
"#edit_btn:hover, \n"
"#remove_prisoner_btn:hover, \n"
"#search_btn:hover, \n"
"#view_all_prisoners_btn:hover, \n"
"#view_cur_prisoners_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label{\n"
"	font-size: 20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}\n"
"\n"
"#searchLabel{\n"
"	font-size:16px;\n"
"	color:white;\n"
"}\n"
"#search_line_edit{\n"
"	background-col"
                        "or:white;\n"
"}"));
        search_btn = new QPushButton(managePrisoners);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(360, 120, 101, 41));
        edit_btn = new QPushButton(managePrisoners);
        edit_btn->setObjectName("edit_btn");
        edit_btn->setGeometry(QRect(730, 620, 91, 41));
        searchLineEdit = new QLineEdit(managePrisoners);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(40, 130, 301, 31));
        searchLineEdit->setStyleSheet(QString::fromUtf8("background_color:white;"));
        add_prisoner_btn = new QPushButton(managePrisoners);
        add_prisoner_btn->setObjectName("add_prisoner_btn");
        add_prisoner_btn->setGeometry(QRect(40, 620, 111, 41));
        prisonersTableWidget = new QTableWidget(managePrisoners);
        prisonersTableWidget->setObjectName("prisonersTableWidget");
        prisonersTableWidget->setGeometry(QRect(40, 170, 1051, 441));
        exit_btn = new QPushButton(managePrisoners);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(990, 620, 101, 41));
        remove_prisoner_btn = new QPushButton(managePrisoners);
        remove_prisoner_btn->setObjectName("remove_prisoner_btn");
        remove_prisoner_btn->setGeometry(QRect(830, 620, 151, 41));
        view_all_prisoners_btn = new QPushButton(managePrisoners);
        view_all_prisoners_btn->setObjectName("view_all_prisoners_btn");
        view_all_prisoners_btn->setGeometry(QRect(890, 110, 191, 51));
        view_cur_prisoners_btn = new QPushButton(managePrisoners);
        view_cur_prisoners_btn->setObjectName("view_cur_prisoners_btn");
        view_cur_prisoners_btn->setGeometry(QRect(680, 110, 201, 51));
        searchLabel = new QLabel(managePrisoners);
        searchLabel->setObjectName("searchLabel");
        searchLabel->setGeometry(QRect(40, 100, 131, 16));
        label = new QLabel(managePrisoners);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 211, 31));

        retranslateUi(managePrisoners);

        QMetaObject::connectSlotsByName(managePrisoners);
    } // setupUi

    void retranslateUi(QDialog *managePrisoners)
    {
        managePrisoners->setWindowTitle(QCoreApplication::translate("managePrisoners", "Dialog", nullptr));
        search_btn->setText(QCoreApplication::translate("managePrisoners", "Search", nullptr));
        edit_btn->setText(QCoreApplication::translate("managePrisoners", "Edit", nullptr));
        searchLineEdit->setText(QString());
        add_prisoner_btn->setText(QCoreApplication::translate("managePrisoners", "Add Prisoner", nullptr));
        exit_btn->setText(QCoreApplication::translate("managePrisoners", "Exit", nullptr));
        remove_prisoner_btn->setText(QCoreApplication::translate("managePrisoners", "Release Prisoner", nullptr));
        view_all_prisoners_btn->setText(QCoreApplication::translate("managePrisoners", "View All Prisoners", nullptr));
        view_cur_prisoners_btn->setText(QCoreApplication::translate("managePrisoners", "View Current Prisoners", nullptr));
        searchLabel->setText(QCoreApplication::translate("managePrisoners", "Search Prisoner", nullptr));
        label->setText(QCoreApplication::translate("managePrisoners", "Manage Prisoners:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managePrisoners: public Ui_managePrisoners {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEPRISONERS_H
