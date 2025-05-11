/********************************************************************************
** Form generated from reading UI file 'manageguards.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEGUARDS_H
#define UI_MANAGEGUARDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageGuards
{
public:
    QTableWidget *guardsTableWidget;
    QPushButton *addGuard_btn;
    QPushButton *assignCell_btn;
    QPushButton *removeGuard_btn;
    QPushButton *exit_btn;
    QLabel *label;

    void setupUi(QDialog *ManageGuards)
    {
        if (ManageGuards->objectName().isEmpty())
            ManageGuards->setObjectName("ManageGuards");
        ManageGuards->resize(817, 397);
        ManageGuards->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#ManageGuards{\n"
"	background-color:#001F3F;\n"
"}\n"
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
"#addGuard_btn,#assignCell_btn,#exit_btn,#removeGuard_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#addGuard_btn:hover,#assignCell_btn:hover,#exit_btn:hover,#removeGuard_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label{\n"
"	font-size: 20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}"));
        guardsTableWidget = new QTableWidget(ManageGuards);
        guardsTableWidget->setObjectName("guardsTableWidget");
        guardsTableWidget->setGeometry(QRect(70, 80, 671, 191));
        addGuard_btn = new QPushButton(ManageGuards);
        addGuard_btn->setObjectName("addGuard_btn");
        addGuard_btn->setGeometry(QRect(70, 290, 111, 41));
        assignCell_btn = new QPushButton(ManageGuards);
        assignCell_btn->setObjectName("assignCell_btn");
        assignCell_btn->setGeometry(QRect(70, 340, 111, 41));
        removeGuard_btn = new QPushButton(ManageGuards);
        removeGuard_btn->setObjectName("removeGuard_btn");
        removeGuard_btn->setGeometry(QRect(190, 290, 131, 41));
        exit_btn = new QPushButton(ManageGuards);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(650, 290, 101, 41));
        label = new QLabel(ManageGuards);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 171, 41));

        retranslateUi(ManageGuards);

        QMetaObject::connectSlotsByName(ManageGuards);
    } // setupUi

    void retranslateUi(QDialog *ManageGuards)
    {
        ManageGuards->setWindowTitle(QCoreApplication::translate("ManageGuards", "Dialog", nullptr));
        addGuard_btn->setText(QCoreApplication::translate("ManageGuards", "Add Guard", nullptr));
        assignCell_btn->setText(QCoreApplication::translate("ManageGuards", "Assign Cell", nullptr));
        removeGuard_btn->setText(QCoreApplication::translate("ManageGuards", "Remove Guard", nullptr));
        exit_btn->setText(QCoreApplication::translate("ManageGuards", "Exit", nullptr));
        label->setText(QCoreApplication::translate("ManageGuards", "Manage Guards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageGuards: public Ui_ManageGuards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEGUARDS_H
