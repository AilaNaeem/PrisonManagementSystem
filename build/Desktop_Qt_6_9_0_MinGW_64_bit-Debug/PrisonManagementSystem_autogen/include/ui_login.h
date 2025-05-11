/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QPushButton *exit_btn;
    QFrame *loginframe;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QLabel *mylabel;
    QLineEdit *name_line;
    QLabel *label_3;
    QLineEdit *pass_line;
    QLabel *mylabel_2;
    QPushButton *admin_login_btn;
    QPushButton *guard_login_btn;
    QPushButton *warden_login_btn;
    QToolButton *logotool;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(882, 696);
        Login->setStyleSheet(QString::fromUtf8("*{\n"
"	font-family: century gothic;\n"
"\n"
"}\n"
"\n"
"#Login{\n"
"	background-color:#001F3F;\n"
"}\n"
"\n"
"#warden_login_btn, #guard_login_btn,#admin_login_btn,#exit_btn{\n"
"	background-color : #cb0000 ;\n"
"	border-radius : 10px;\n"
"	color:white;\n"
"}\n"
"\n"
"\n"
"#warden_login_btn:hover {\n"
"    background-color: #850101;\n"
"}\n"
"#guard_login_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"#admin_login_btn:hover{\n"
"	background-color: #850101;\n"
"}\n"
"#exit_btn:hover{\n"
"	background-color: #850101;\n"
"}	\n"
"\n"
"\n"
"\n"
"#logotool {\n"
"    background-color: white;\n"
"}\n"
"\n"
"#loginframe{\n"
"    background-color:#0031a1;\n"
"	padding:10px;\n"
"	border-radius:20px;\n"
"	box-shadow: 5px 5px 15px rgba(0, 0, 0, 0.4);\n"
"\n"
"}\n"
"\n"
"#name_line,#pass_line{\n"
"	background-color:white;\n"
"	\n"
"}\n"
"\n"
"#mylabel,#mylabel_2,#loginLabel,#label_3{\n"
"	color:white;\n"
"}\n"
"\n"
"#loginLabel{\n"
"	font-weight:bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    min-height: 40px;\n"
"    min-wid"
                        "th: 250px;\n"
"    font-size: 16px;\n"
"	color:black;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        exit_btn = new QPushButton(centralwidget);
        exit_btn->setObjectName("exit_btn");
        exit_btn->setGeometry(QRect(700, 570, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("century gothic")});
        font.setPointSize(20);
        exit_btn->setFont(font);
        loginframe = new QFrame(centralwidget);
        loginframe->setObjectName("loginframe");
        loginframe->setGeometry(QRect(210, 120, 441, 511));
        loginframe->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	position:center;\n"
"}"));
        loginframe->setFrameShape(QFrame::Shape::StyledPanel);
        loginframe->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(loginframe);
        verticalLayout->setObjectName("verticalLayout");
        loginLabel = new QLabel(loginframe);
        loginLabel->setObjectName("loginLabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("century gothic")});
        font1.setPointSize(24);
        font1.setBold(true);
        loginLabel->setFont(font1);
        loginLabel->setStyleSheet(QString::fromUtf8(""));
        loginLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(loginLabel);

        mylabel = new QLabel(loginframe);
        mylabel->setObjectName("mylabel");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("century gothic")});
        font2.setPointSize(15);
        mylabel->setFont(font2);
        mylabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(mylabel);

        name_line = new QLineEdit(loginframe);
        name_line->setObjectName("name_line");

        verticalLayout->addWidget(name_line);

        label_3 = new QLabel(loginframe);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        pass_line = new QLineEdit(loginframe);
        pass_line->setObjectName("pass_line");
        pass_line->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(pass_line);

        mylabel_2 = new QLabel(loginframe);
        mylabel_2->setObjectName("mylabel_2");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("century gothic")});
        font3.setPointSize(12);
        mylabel_2->setFont(font3);
        mylabel_2->setStyleSheet(QString::fromUtf8(""));
        mylabel_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(mylabel_2);

        admin_login_btn = new QPushButton(loginframe);
        admin_login_btn->setObjectName("admin_login_btn");
        admin_login_btn->setFont(font);

        verticalLayout->addWidget(admin_login_btn);

        guard_login_btn = new QPushButton(loginframe);
        guard_login_btn->setObjectName("guard_login_btn");
        guard_login_btn->setFont(font);

        verticalLayout->addWidget(guard_login_btn);

        warden_login_btn = new QPushButton(loginframe);
        warden_login_btn->setObjectName("warden_login_btn");
        warden_login_btn->setFont(font);

        verticalLayout->addWidget(warden_login_btn);

        logotool = new QToolButton(centralwidget);
        logotool->setObjectName("logotool");
        logotool->setGeometry(QRect(370, 30, 111, 111));
        logotool->setStyleSheet(QString::fromUtf8("border-radius:55.4px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sindh-police-logo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        logotool->setIcon(icon);
        logotool->setIconSize(QSize(100, 100));
        Login->setCentralWidget(centralwidget);
        loginframe->raise();
        exit_btn->raise();
        logotool->raise();
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 882, 20));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        exit_btn->setText(QCoreApplication::translate("Login", "EXIT", nullptr));
        loginLabel->setText(QCoreApplication::translate("Login", "Login Form", nullptr));
        mylabel->setText(QCoreApplication::translate("Login", "Enter Name", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Enter Password", nullptr));
        mylabel_2->setText(QCoreApplication::translate("Login", "Login Options:", nullptr));
        admin_login_btn->setText(QCoreApplication::translate("Login", "Admin", nullptr));
        guard_login_btn->setText(QCoreApplication::translate("Login", "Guard", nullptr));
        warden_login_btn->setText(QCoreApplication::translate("Login", "Warden", nullptr));
        logotool->setText(QCoreApplication::translate("Login", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
