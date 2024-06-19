/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *loginGroup;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QLineEdit *password;
    QLineEdit *username;
    QLabel *label_6;
    QPushButton *loginButton;
    QLabel *label_7;
    QPushButton *signUpButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(703, 391);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 255);"));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName("verticalLayout");
        loginGroup = new QGroupBox(Login);
        loginGroup->setObjectName("loginGroup");
        loginGroup->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Yu Gothic\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: rgb(0, 21, 48);"));
        gridLayout_2 = new QGridLayout(loginGroup);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton = new QPushButton(loginGroup);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 15pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"\n"
"background:#ababab;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}"));

        gridLayout_2->addWidget(pushButton, 4, 1, 1, 2);

        password = new QLineEdit(loginGroup);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font:24px\n"
"}"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(password, 1, 1, 1, 2);

        username = new QLineEdit(loginGroup);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        gridLayout_2->addWidget(username, 0, 1, 1, 2);

        label_6 = new QLabel(loginGroup);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        loginButton = new QPushButton(loginGroup);
        loginButton->setObjectName("loginButton");
        loginButton->setMouseTracking(true);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 15pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"\n"
"background:#ababab;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}"));
        loginButton->setAutoDefault(true);

        gridLayout_2->addWidget(loginButton, 2, 1, 1, 2);

        label_7 = new QLabel(loginGroup);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        signUpButton = new QPushButton(loginGroup);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 15pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"\n"
"background:#ababab;\n"
"}\n"
"QToolButton\n"
"{\n"
"\n"
"border-radius:10px;\n"
"bacground:red;\n"
"color:red;\n"
"}"));

        gridLayout_2->addWidget(signUpButton, 3, 1, 1, 2);


        verticalLayout->addWidget(loginGroup);


        retranslateUi(Login);

        loginButton->setDefault(false);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        loginGroup->setTitle(QCoreApplication::translate("Login", "BookHaven ADMIN ", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Back To Main Menu", nullptr));
        label_6->setText(QCoreApplication::translate("Login", "PASSWORD", nullptr));
        loginButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_7->setText(QCoreApplication::translate("Login", "USERNAME", nullptr));
        signUpButton->setText(QCoreApplication::translate("Login", "New Admin?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
