/********************************************************************************
** Form generated from reading UI file 'newpasswd.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPASSWD_H
#define UI_NEWPASSWD_H

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

class Ui_newPasswd
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *backButton;
    QLabel *label;
    QPushButton *submitButton;
    QLineEdit *username;
    QLineEdit *name;
    QLineEdit *newpass;
    QLabel *label_3;

    void setupUi(QDialog *newPasswd)
    {
        if (newPasswd->objectName().isEmpty())
            newPasswd->setObjectName("newPasswd");
        newPasswd->resize(566, 358);
        newPasswd->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 255);"));
        verticalLayout = new QVBoxLayout(newPasswd);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(newPasswd);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Yu Gothic\";\n"
"background-color: rgb(224, 255, 255);\n"
"border-color: rgb(170, 0, 255);\n"
"color: rgb(0, 21, 48);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

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
"}"));

        gridLayout->addWidget(backButton, 5, 1, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        submitButton = new QPushButton(groupBox);
        submitButton->setObjectName("submitButton");
        submitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(submitButton, 4, 1, 1, 3);

        username = new QLineEdit(groupBox);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        gridLayout->addWidget(username, 1, 1, 1, 3);

        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        gridLayout->addWidget(name, 0, 1, 1, 1);

        newpass = new QLineEdit(groupBox);
        newpass->setObjectName("newpass");
        newpass->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));
        newpass->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(newpass, 3, 1, 1, 3);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Lato\";"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);


        retranslateUi(newPasswd);

        QMetaObject::connectSlotsByName(newPasswd);
    } // setupUi

    void retranslateUi(QDialog *newPasswd)
    {
        newPasswd->setWindowTitle(QCoreApplication::translate("newPasswd", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("newPasswd", "Reset Password", nullptr));
        label_2->setText(QCoreApplication::translate("newPasswd", "New Password", nullptr));
        backButton->setText(QCoreApplication::translate("newPasswd", "Back", nullptr));
        label->setText(QCoreApplication::translate("newPasswd", "Username", nullptr));
        submitButton->setText(QCoreApplication::translate("newPasswd", "Submit", nullptr));
        label_3->setText(QCoreApplication::translate("newPasswd", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newPasswd: public Ui_newPasswd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPASSWD_H
