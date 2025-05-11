/********************************************************************************
** Form generated from reading UI file 'viewcells.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCELLS_H
#define UI_VIEWCELLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewCells
{
public:
    QPushButton *exit_btn;
    QTableWidget *cellsTableWidget;
    QPushButton *viewPrisoners_btn;
    QLabel *label;

    void setupUi(QDialog *ViewCells)
    {
        if (ViewCells->objectName().isEmpty())
            ViewCells->setObjectName("ViewCells");
        ViewCells->resize(817, 397);
        ViewCells->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#ViewCells{\n"
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
"\n"
"#exit_btn,#viewPrisoners_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#exit_btn:hover,#viewPrisoners_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label{\n"
"	font-size:20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}"));
        exit_btn = new QPushButton(ViewCells);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(640, 300, 101, 41));
        cellsTableWidget = new QTableWidget(ViewCells);
        cellsTableWidget->setObjectName("cellsTableWidget");
        cellsTableWidget->setGeometry(QRect(70, 90, 671, 191));
        viewPrisoners_btn = new QPushButton(ViewCells);
        viewPrisoners_btn->setObjectName("viewPrisoners_btn");
        viewPrisoners_btn->setGeometry(QRect(70, 300, 151, 41));
        label = new QLabel(ViewCells);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 121, 41));

        retranslateUi(ViewCells);

        QMetaObject::connectSlotsByName(ViewCells);
    } // setupUi

    void retranslateUi(QDialog *ViewCells)
    {
        ViewCells->setWindowTitle(QCoreApplication::translate("ViewCells", "Dialog", nullptr));
        exit_btn->setText(QCoreApplication::translate("ViewCells", "Exit", nullptr));
        viewPrisoners_btn->setText(QCoreApplication::translate("ViewCells", "View Prisoners", nullptr));
        label->setText(QCoreApplication::translate("ViewCells", "View Cells:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewCells: public Ui_ViewCells {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCELLS_H
