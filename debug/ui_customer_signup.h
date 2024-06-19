/********************************************************************************
** Form generated from reading UI file 'customer_signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_SIGNUP_H
#define UI_CUSTOMER_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_customer_signup
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *password;
    QPushButton *createButton;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *name;
    QLabel *label_2;
    QPushButton *backButton;

    void setupUi(QDialog *customer_signup)
    {
        if (customer_signup->objectName().isEmpty())
            customer_signup->setObjectName("customer_signup");
        customer_signup->resize(547, 422);
        groupBox = new QGroupBox(customer_signup);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 551, 441));
        groupBox->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Yu Gothic\";\n"
"background-color: rgb(224, 255, 255);\n"
"border-color: rgb(196, 178, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: rgb(0, 21, 48);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));
        password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 3, 1, 1, 2);

        createButton = new QPushButton(groupBox);
        createButton->setObjectName("createButton");
        createButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        gridLayout->addWidget(createButton, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        username = new QLineEdit(groupBox);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        gridLayout->addWidget(username, 1, 1, 1, 2);

        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        backButton = new QPushButton(groupBox);
        backButton->setObjectName("backButton");
        backButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"              font-size: 19px;\n"
"              transition: 0.9s; \n"
"}"));

        gridLayout->addWidget(backButton, 5, 1, 1, 1);


        retranslateUi(customer_signup);

        QMetaObject::connectSlotsByName(customer_signup);
    } // setupUi

    void retranslateUi(QDialog *customer_signup)
    {
        customer_signup->setWindowTitle(QCoreApplication::translate("customer_signup", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("customer_signup", "Customer Signup", nullptr));
        label->setText(QCoreApplication::translate("customer_signup", "Username", nullptr));
        password->setText(QString());
        createButton->setText(QCoreApplication::translate("customer_signup", "Signup", nullptr));
        label_3->setText(QCoreApplication::translate("customer_signup", "Password", nullptr));
        label_2->setText(QCoreApplication::translate("customer_signup", "Name", nullptr));
        backButton->setText(QCoreApplication::translate("customer_signup", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_signup: public Ui_customer_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_SIGNUP_H
