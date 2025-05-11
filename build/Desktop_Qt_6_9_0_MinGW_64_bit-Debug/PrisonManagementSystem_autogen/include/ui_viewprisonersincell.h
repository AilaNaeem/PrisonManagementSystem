/********************************************************************************
** Form generated from reading UI file 'viewprisonersincell.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRISONERSINCELL_H
#define UI_VIEWPRISONERSINCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewPrisonersInCell
{
public:
    QTableWidget *prisonersTableWidget;
    QPushButton *exit_btn;
    QLabel *titleLabel;

    void setupUi(QDialog *ViewPrisonersInCell)
    {
        if (ViewPrisonersInCell->objectName().isEmpty())
            ViewPrisonersInCell->setObjectName("ViewPrisonersInCell");
        ViewPrisonersInCell->resize(929, 389);
        ViewPrisonersInCell->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#ViewPrisonersInCell{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
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
"#titleLabel{\n"
"	color:white;\n"
"	font-weight:bold;\n"
"}\n"
""));
        prisonersTableWidget = new QTableWidget(ViewPrisonersInCell);
        prisonersTableWidget->setObjectName("prisonersTableWidget");
        prisonersTableWidget->setGeometry(QRect(40, 70, 861, 241));
        exit_btn = new QPushButton(ViewPrisonersInCell);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(800, 320, 101, 41));
        titleLabel = new QLabel(ViewPrisonersInCell);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(40, 30, 431, 21));
        titleLabel->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));

        retranslateUi(ViewPrisonersInCell);

        QMetaObject::connectSlotsByName(ViewPrisonersInCell);
    } // setupUi

    void retranslateUi(QDialog *ViewPrisonersInCell)
    {
        ViewPrisonersInCell->setWindowTitle(QCoreApplication::translate("ViewPrisonersInCell", "Dialog", nullptr));
        exit_btn->setText(QCoreApplication::translate("ViewPrisonersInCell", "Exit", nullptr));
        titleLabel->setText(QCoreApplication::translate("ViewPrisonersInCell", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewPrisonersInCell: public Ui_ViewPrisonersInCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRISONERSINCELL_H
