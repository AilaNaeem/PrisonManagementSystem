/********************************************************************************
** Form generated from reading UI file 'addprisoner.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRISONER_H
#define UI_ADDPRISONER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddPrisoner
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *ageLineEdit;
    QLabel *label_3;
    QLineEdit *crimeLineEdit;
    QLabel *label_6;
    QLineEdit *crimeDetailsLineEdit;
    QLabel *label_5;
    QLineEdit *sentenceLineEdit;
    QLabel *label_4;
    QDateEdit *entryDateEdit;
    QPushButton *submit_btn;

    void setupUi(QDialog *AddPrisoner)
    {
        if (AddPrisoner->objectName().isEmpty())
            AddPrisoner->setObjectName("AddPrisoner");
        AddPrisoner->resize(516, 468);
        AddPrisoner->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"AddPrisoner{\n"
"	background-color:#001F3F\n"
"}\n"
"\n"
"#label,#label_2,#label_3,#label_4,#label_6,#label_5{\n"
"	font-size:16px;\n"
"	color:white;\n"
"}\n"
"\n"
"#submit_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	padding:10px;\n"
"	font-size: 15px;\n"
"	font-color:\n"
"}\n"
"\n"
"#submit_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label_7{\n"
"	font-size:20px;\n"
"	font-weight:bold;\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(AddPrisoner);
        verticalLayout->setObjectName("verticalLayout");
        label_7 = new QLabel(AddPrisoner);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        label = new QLabel(AddPrisoner);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("century gothic")});
        label->setFont(font);

        verticalLayout->addWidget(label);

        nameLineEdit = new QLineEdit(AddPrisoner);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout->addWidget(nameLineEdit);

        label_2 = new QLabel(AddPrisoner);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        ageLineEdit = new QLineEdit(AddPrisoner);
        ageLineEdit->setObjectName("ageLineEdit");

        verticalLayout->addWidget(ageLineEdit);

        label_3 = new QLabel(AddPrisoner);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        crimeLineEdit = new QLineEdit(AddPrisoner);
        crimeLineEdit->setObjectName("crimeLineEdit");

        verticalLayout->addWidget(crimeLineEdit);

        label_6 = new QLabel(AddPrisoner);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        crimeDetailsLineEdit = new QLineEdit(AddPrisoner);
        crimeDetailsLineEdit->setObjectName("crimeDetailsLineEdit");

        verticalLayout->addWidget(crimeDetailsLineEdit);

        label_5 = new QLabel(AddPrisoner);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        sentenceLineEdit = new QLineEdit(AddPrisoner);
        sentenceLineEdit->setObjectName("sentenceLineEdit");

        verticalLayout->addWidget(sentenceLineEdit);

        label_4 = new QLabel(AddPrisoner);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        entryDateEdit = new QDateEdit(AddPrisoner);
        entryDateEdit->setObjectName("entryDateEdit");

        verticalLayout->addWidget(entryDateEdit);

        submit_btn = new QPushButton(AddPrisoner);
        submit_btn->setObjectName("submit_btn");

        verticalLayout->addWidget(submit_btn);


        retranslateUi(AddPrisoner);

        QMetaObject::connectSlotsByName(AddPrisoner);
    } // setupUi

    void retranslateUi(QDialog *AddPrisoner)
    {
        AddPrisoner->setWindowTitle(QCoreApplication::translate("AddPrisoner", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("AddPrisoner", "Add Prisoner:", nullptr));
        label->setText(QCoreApplication::translate("AddPrisoner", "Name:", nullptr));
        nameLineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("AddPrisoner", "Age:", nullptr));
        ageLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("AddPrisoner", "Crime", nullptr));
        crimeLineEdit->setText(QString());
        label_6->setText(QCoreApplication::translate("AddPrisoner", "Crime Details", nullptr));
        label_5->setText(QCoreApplication::translate("AddPrisoner", "Sentence ", nullptr));
        label_4->setText(QCoreApplication::translate("AddPrisoner", "Entry Date", nullptr));
        submit_btn->setText(QCoreApplication::translate("AddPrisoner", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPrisoner: public Ui_AddPrisoner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRISONER_H
