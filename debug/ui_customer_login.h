/********************************************************************************
** Form generated from reading UI file 'customer_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_LOGIN_H
#define UI_CUSTOMER_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customer_login
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *loginGroup;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *password_customer;
    QLineEdit *username_customer;
    QPushButton *forgetPasswdBtn_customer;
    QPushButton *loginButton_customer;
    QPushButton *signUpButton_customer;
    QPushButton *button_customer_to_admin;
    QPushButton *button_customer_to_admin_2;

    void setupUi(QDialog *customer_login)
    {
        if (customer_login->objectName().isEmpty())
            customer_login->setObjectName("customer_login");
        customer_login->resize(759, 783);
        customer_login->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 255);"));
        layoutWidget = new QWidget(customer_login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 0, 541, 441));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/login-book.png")));

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        loginGroup = new QGroupBox(customer_login);
        loginGroup->setObjectName("loginGroup");
        loginGroup->setGeometry(QRect(140, 450, 485, 267));
        loginGroup->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Yu Gothic\";\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: rgb(0, 21, 48);"));
        gridLayout_2 = new QGridLayout(loginGroup);
        gridLayout_2->setObjectName("gridLayout_2");
        label_6 = new QLabel(loginGroup);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(loginGroup);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        password_customer = new QLineEdit(loginGroup);
        password_customer->setObjectName("password_customer");
        password_customer->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font:24px\n"
"}"));
        password_customer->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(password_customer, 1, 1, 1, 2);

        username_customer = new QLineEdit(loginGroup);
        username_customer->setObjectName("username_customer");
        username_customer->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        gridLayout_2->addWidget(username_customer, 0, 1, 1, 2);

        forgetPasswdBtn_customer = new QPushButton(loginGroup);
        forgetPasswdBtn_customer->setObjectName("forgetPasswdBtn_customer");
        forgetPasswdBtn_customer->setFocusPolicy(Qt::ClickFocus);
        forgetPasswdBtn_customer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 13pt \"Lato\";\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        gridLayout_2->addWidget(forgetPasswdBtn_customer, 4, 1, 1, 2);

        loginButton_customer = new QPushButton(loginGroup);
        loginButton_customer->setObjectName("loginButton_customer");
        loginButton_customer->setMouseTracking(true);
        loginButton_customer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 13pt \"Lato\";\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));
        loginButton_customer->setAutoDefault(true);

        gridLayout_2->addWidget(loginButton_customer, 2, 1, 1, 2);

        signUpButton_customer = new QPushButton(loginGroup);
        signUpButton_customer->setObjectName("signUpButton_customer");
        signUpButton_customer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 13pt \"Lato\";\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        gridLayout_2->addWidget(signUpButton_customer, 3, 1, 1, 2);

        button_customer_to_admin = new QPushButton(customer_login);
        button_customer_to_admin->setObjectName("button_customer_to_admin");
        button_customer_to_admin->setGeometry(QRect(10, 740, 147, 33));
        button_customer_to_admin->setMouseTracking(true);
        button_customer_to_admin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato\";\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));
        button_customer_to_admin->setAutoDefault(true);
        button_customer_to_admin_2 = new QPushButton(customer_login);
        button_customer_to_admin_2->setObjectName("button_customer_to_admin_2");
        button_customer_to_admin_2->setGeometry(QRect(600, 740, 147, 33));
        button_customer_to_admin_2->setMouseTracking(true);
        button_customer_to_admin_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato\";\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));
        button_customer_to_admin_2->setAutoDefault(true);

        retranslateUi(customer_login);

        loginButton_customer->setDefault(false);
        button_customer_to_admin->setDefault(false);
        button_customer_to_admin_2->setDefault(false);


        QMetaObject::connectSlotsByName(customer_login);
    } // setupUi

    void retranslateUi(QDialog *customer_login)
    {
        customer_login->setWindowTitle(QCoreApplication::translate("customer_login", "Dialog", nullptr));
        label_5->setText(QString());
        loginGroup->setTitle(QCoreApplication::translate("customer_login", "Customer Login Panel", nullptr));
        label_6->setText(QCoreApplication::translate("customer_login", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("customer_login", "Username", nullptr));
        forgetPasswdBtn_customer->setText(QCoreApplication::translate("customer_login", "Forgot Password", nullptr));
        loginButton_customer->setText(QCoreApplication::translate("customer_login", "Login", nullptr));
        signUpButton_customer->setText(QCoreApplication::translate("customer_login", "New to BookHaven? ", nullptr));
        button_customer_to_admin->setText(QCoreApplication::translate("customer_login", "Admin Login", nullptr));
        button_customer_to_admin_2->setText(QCoreApplication::translate("customer_login", "About Us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_login: public Ui_customer_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_LOGIN_H
