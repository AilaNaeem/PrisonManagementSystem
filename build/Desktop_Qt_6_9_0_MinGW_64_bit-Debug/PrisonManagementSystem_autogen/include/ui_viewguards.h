/********************************************************************************
** Form generated from reading UI file 'viewguards.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWGUARDS_H
#define UI_VIEWGUARDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewGuards
{
public:
    QTableWidget *guardsTableWidget;
    QPushButton *exit_btn;
    QLabel *label;

    void setupUi(QDialog *ViewGuards)
    {
        if (ViewGuards->objectName().isEmpty())
            ViewGuards->setObjectName("ViewGuards");
        ViewGuards->resize(817, 397);
        ViewGuards->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#ViewGuards{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"#exit_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#exit_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label{\n"
"	color:white;\n"
"	font-weight:bold;\n"
"	font-size:20px;\n"
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
""));
        guardsTableWidget = new QTableWidget(ViewGuards);
        guardsTableWidget->setObjectName("guardsTableWidget");
        guardsTableWidget->setGeometry(QRect(60, 90, 671, 191));
        exit_btn = new QPushButton(ViewGuards);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(620, 290, 111, 41));
        label = new QLabel(ViewGuards);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 171, 31));

        retranslateUi(ViewGuards);

        QMetaObject::connectSlotsByName(ViewGuards);
    } // setupUi

    void retranslateUi(QDialog *ViewGuards)
    {
        ViewGuards->setWindowTitle(QCoreApplication::translate("ViewGuards", "Dialog", nullptr));
        exit_btn->setText(QCoreApplication::translate("ViewGuards", "Exit", nullptr));
        label->setText(QCoreApplication::translate("ViewGuards", "View Guards:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewGuards: public Ui_ViewGuards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWGUARDS_H
