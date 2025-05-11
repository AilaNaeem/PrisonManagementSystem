/********************************************************************************
** Form generated from reading UI file 'viewprisoners.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRISONERS_H
#define UI_VIEWPRISONERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewPrisoners
{
public:
    QPushButton *exit_btn;
    QLineEdit *searchLineEdit;
    QTableWidget *prisonersTableWidget;
    QPushButton *view_cur_prisoners_btn;
    QPushButton *view_all_prisoners_btn;
    QPushButton *search_btn;
    QLabel *label;
    QLabel *searchLabel;

    void setupUi(QDialog *ViewPrisoners)
    {
        if (ViewPrisoners->objectName().isEmpty())
            ViewPrisoners->setObjectName("ViewPrisoners");
        ViewPrisoners->resize(1119, 742);
        ViewPrisoners->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#ViewPrisoners{\n"
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
"#view_all_prisoners_btn,#view_cur_prisoners_btn,#search_btn,#exit_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#view_all_prisoners_btn:hover,#view_cur_prisoners_btn:hover,#search_btn:hover,#exit_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label{\n"
"	font-size:20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}\n"
"\n"
"#searchLabel{\n"
"	font-size:16px;\n"
"	color:white;\n"
"}"));
        exit_btn = new QPushButton(ViewPrisoners);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(980, 610, 101, 41));
        searchLineEdit = new QLineEdit(ViewPrisoners);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(30, 110, 301, 31));
        prisonersTableWidget = new QTableWidget(ViewPrisoners);
        prisonersTableWidget->setObjectName("prisonersTableWidget");
        prisonersTableWidget->setGeometry(QRect(30, 160, 1051, 441));
        view_cur_prisoners_btn = new QPushButton(ViewPrisoners);
        view_cur_prisoners_btn->setObjectName("view_cur_prisoners_btn");
        view_cur_prisoners_btn->setGeometry(QRect(710, 100, 211, 41));
        view_all_prisoners_btn = new QPushButton(ViewPrisoners);
        view_all_prisoners_btn->setObjectName("view_all_prisoners_btn");
        view_all_prisoners_btn->setGeometry(QRect(930, 100, 151, 41));
        search_btn = new QPushButton(ViewPrisoners);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(350, 100, 101, 41));
        label = new QLabel(ViewPrisoners);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 161, 41));
        searchLabel = new QLabel(ViewPrisoners);
        searchLabel->setObjectName("searchLabel");
        searchLabel->setGeometry(QRect(30, 80, 91, 16));

        retranslateUi(ViewPrisoners);

        QMetaObject::connectSlotsByName(ViewPrisoners);
    } // setupUi

    void retranslateUi(QDialog *ViewPrisoners)
    {
        ViewPrisoners->setWindowTitle(QCoreApplication::translate("ViewPrisoners", "Dialog", nullptr));
        exit_btn->setText(QCoreApplication::translate("ViewPrisoners", "Exit", nullptr));
        searchLineEdit->setText(QString());
        view_cur_prisoners_btn->setText(QCoreApplication::translate("ViewPrisoners", "View Current Prisoners", nullptr));
        view_all_prisoners_btn->setText(QCoreApplication::translate("ViewPrisoners", "View All Prisoners", nullptr));
        search_btn->setText(QCoreApplication::translate("ViewPrisoners", "Search", nullptr));
        label->setText(QCoreApplication::translate("ViewPrisoners", "View Prisoners:", nullptr));
        searchLabel->setText(QCoreApplication::translate("ViewPrisoners", "Search:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewPrisoners: public Ui_ViewPrisoners {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRISONERS_H
