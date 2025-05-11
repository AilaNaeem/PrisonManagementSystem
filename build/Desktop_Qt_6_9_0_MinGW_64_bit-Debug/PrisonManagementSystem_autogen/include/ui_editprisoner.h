/********************************************************************************
** Form generated from reading UI file 'editprisoner.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRISONER_H
#define UI_EDITPRISONER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditPrisoner
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *ageLineEdit;
    QLabel *label_3;
    QLineEdit *crimeLineEdit;
    QLabel *label_4;
    QPlainTextEdit *crimeDetailsTextEdit;
    QLabel *label_5;
    QLineEdit *sentenceLineEdit;
    QPushButton *edit_btn;

    void setupUi(QDialog *EditPrisoner)
    {
        if (EditPrisoner->objectName().isEmpty())
            EditPrisoner->setObjectName("EditPrisoner");
        EditPrisoner->resize(516, 525);
        EditPrisoner->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#EditPrisoner{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"    min-height: 30px;\n"
"    min-width: 250px;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"#label,#label_2,#label_3,#label_4,#label_5{\n"
"	font-size:16px;\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
"#edit_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"	font-size:15px;\n"
"	padding:10px;\n"
"}\n"
"\n"
"#edit_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"\n"
"#label_6{  /*edit label */\n"
"    font-size: 20px;      /* Adjust the font size */\n"
"    font-family: 'Segoe UI';  /* Change the font */\n"
"    color-white;\n"
"	font-weight:bold;\n"
" \n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(EditPrisoner);
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(EditPrisoner);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label = new QLabel(EditPrisoner);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        nameLineEdit = new QLineEdit(EditPrisoner);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout->addWidget(nameLineEdit);

        label_2 = new QLabel(EditPrisoner);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        ageLineEdit = new QLineEdit(EditPrisoner);
        ageLineEdit->setObjectName("ageLineEdit");

        verticalLayout->addWidget(ageLineEdit);

        label_3 = new QLabel(EditPrisoner);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        crimeLineEdit = new QLineEdit(EditPrisoner);
        crimeLineEdit->setObjectName("crimeLineEdit");

        verticalLayout->addWidget(crimeLineEdit);

        label_4 = new QLabel(EditPrisoner);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        crimeDetailsTextEdit = new QPlainTextEdit(EditPrisoner);
        crimeDetailsTextEdit->setObjectName("crimeDetailsTextEdit");

        verticalLayout->addWidget(crimeDetailsTextEdit);

        label_5 = new QLabel(EditPrisoner);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        sentenceLineEdit = new QLineEdit(EditPrisoner);
        sentenceLineEdit->setObjectName("sentenceLineEdit");

        verticalLayout->addWidget(sentenceLineEdit);

        edit_btn = new QPushButton(EditPrisoner);
        edit_btn->setObjectName("edit_btn");

        verticalLayout->addWidget(edit_btn);


        retranslateUi(EditPrisoner);

        QMetaObject::connectSlotsByName(EditPrisoner);
    } // setupUi

    void retranslateUi(QDialog *EditPrisoner)
    {
        EditPrisoner->setWindowTitle(QCoreApplication::translate("EditPrisoner", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("EditPrisoner", "Edit Prisoner:", nullptr));
        label->setText(QCoreApplication::translate("EditPrisoner", "Name:", nullptr));
        nameLineEdit->setText(QString());
        label_2->setText(QCoreApplication::translate("EditPrisoner", "Age:", nullptr));
        ageLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("EditPrisoner", "Crime:", nullptr));
        crimeLineEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("EditPrisoner", "Crime Details:", nullptr));
        crimeDetailsTextEdit->setPlainText(QString());
        label_5->setText(QCoreApplication::translate("EditPrisoner", "Sentence Time:", nullptr));
        sentenceLineEdit->setText(QString());
        edit_btn->setText(QCoreApplication::translate("EditPrisoner", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPrisoner: public Ui_EditPrisoner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRISONER_H
