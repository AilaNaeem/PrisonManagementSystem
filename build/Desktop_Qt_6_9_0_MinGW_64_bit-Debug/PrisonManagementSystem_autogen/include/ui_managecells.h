/********************************************************************************
** Form generated from reading UI file 'managecells.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECELLS_H
#define UI_MANAGECELLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageCells
{
public:
    QTableWidget *cellsTableWidget;
    QPushButton *addCell_btn;
    QPushButton *assignPrisoner_btn;
    QPushButton *removePrisoner_btn;
    QPushButton *exit_btn;
    QPushButton *removeCell_btn;
    QPushButton *viewPrisoners_btn;
    QLabel *label;

    void setupUi(QDialog *ManageCells)
    {
        if (ManageCells->objectName().isEmpty())
            ManageCells->setObjectName("ManageCells");
        ManageCells->resize(817, 397);
        ManageCells->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#ManageCells{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"#addCell_btn,#assignPrisoner_btn,#exit_btn,#removeCell_btn,#removePrisoner_btn,#viewPrisoners_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#addCell_btn:hover,#assignPrisoner_btn:hover,#exit_btn:hover,#removeCell_btn:hover,#removePrisoner_btn:hover,#viewPrisoners_btn:hover{\n"
"	background-color: #850101;\n"
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
"#label{\n"
"	font-size:20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}"));
        cellsTableWidget = new QTableWidget(ManageCells);
        cellsTableWidget->setObjectName("cellsTableWidget");
        cellsTableWidget->setGeometry(QRect(70, 70, 671, 191));
        addCell_btn = new QPushButton(ManageCells);
        addCell_btn->setObjectName("addCell_btn");
        addCell_btn->setGeometry(QRect(80, 280, 101, 41));
        assignPrisoner_btn = new QPushButton(ManageCells);
        assignPrisoner_btn->setObjectName("assignPrisoner_btn");
        assignPrisoner_btn->setGeometry(QRect(190, 280, 141, 41));
        removePrisoner_btn = new QPushButton(ManageCells);
        removePrisoner_btn->setObjectName("removePrisoner_btn");
        removePrisoner_btn->setGeometry(QRect(220, 330, 141, 41));
        exit_btn = new QPushButton(ManageCells);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(650, 280, 91, 41));
        removeCell_btn = new QPushButton(ManageCells);
        removeCell_btn->setObjectName("removeCell_btn");
        removeCell_btn->setGeometry(QRect(80, 330, 131, 41));
        viewPrisoners_btn = new QPushButton(ManageCells);
        viewPrisoners_btn->setObjectName("viewPrisoners_btn");
        viewPrisoners_btn->setGeometry(QRect(340, 280, 131, 41));
        label = new QLabel(ManageCells);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 161, 31));

        retranslateUi(ManageCells);

        QMetaObject::connectSlotsByName(ManageCells);
    } // setupUi

    void retranslateUi(QDialog *ManageCells)
    {
        ManageCells->setWindowTitle(QCoreApplication::translate("ManageCells", "Dialog", nullptr));
        addCell_btn->setText(QCoreApplication::translate("ManageCells", "Add Cell", nullptr));
        assignPrisoner_btn->setText(QCoreApplication::translate("ManageCells", "Assign Prisoner", nullptr));
        removePrisoner_btn->setText(QCoreApplication::translate("ManageCells", "Remove Prisoner", nullptr));
        exit_btn->setText(QCoreApplication::translate("ManageCells", "Exit", nullptr));
        removeCell_btn->setText(QCoreApplication::translate("ManageCells", "Remove Cell", nullptr));
        viewPrisoners_btn->setText(QCoreApplication::translate("ManageCells", "View Prisoners", nullptr));
        label->setText(QCoreApplication::translate("ManageCells", "Manage Cells:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageCells: public Ui_ManageCells {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECELLS_H
