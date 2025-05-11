/********************************************************************************
** Form generated from reading UI file 'wardenapprovaldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARDENAPPROVALDIALOG_H
#define UI_WARDENAPPROVALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_WardenApprovalDialog
{
public:
    QPushButton *approve_btn;
    QPushButton *reject_btn;
    QTableWidget *requestsTableWidget;
    QLabel *label;

    void setupUi(QDialog *WardenApprovalDialog)
    {
        if (WardenApprovalDialog->objectName().isEmpty())
            WardenApprovalDialog->setObjectName("WardenApprovalDialog");
        WardenApprovalDialog->resize(800, 335);
        WardenApprovalDialog->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#WardenApprovalDialog{\n"
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
"#approve_btn,#reject_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"}\n"
"\n"
"#approve_btn:hover,#reject_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label{\n"
"	font-size:20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}"));
        approve_btn = new QPushButton(WardenApprovalDialog);
        approve_btn->setObjectName("approve_btn");
        approve_btn->setGeometry(QRect(60, 270, 171, 41));
        reject_btn = new QPushButton(WardenApprovalDialog);
        reject_btn->setObjectName("reject_btn");
        reject_btn->setGeometry(QRect(240, 270, 131, 41));
        requestsTableWidget = new QTableWidget(WardenApprovalDialog);
        requestsTableWidget->setObjectName("requestsTableWidget");
        requestsTableWidget->setGeometry(QRect(60, 61, 691, 201));
        label = new QLabel(WardenApprovalDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 181, 41));

        retranslateUi(WardenApprovalDialog);

        QMetaObject::connectSlotsByName(WardenApprovalDialog);
    } // setupUi

    void retranslateUi(QDialog *WardenApprovalDialog)
    {
        WardenApprovalDialog->setWindowTitle(QCoreApplication::translate("WardenApprovalDialog", "Dialog", nullptr));
        approve_btn->setText(QCoreApplication::translate("WardenApprovalDialog", "Approve Requests", nullptr));
        reject_btn->setText(QCoreApplication::translate("WardenApprovalDialog", "Reject Request", nullptr));
        label->setText(QCoreApplication::translate("WardenApprovalDialog", "Transfer Requests:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WardenApprovalDialog: public Ui_WardenApprovalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARDENAPPROVALDIALOG_H
