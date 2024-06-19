/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_contactUs
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QDialog *contactUs)
    {
        if (contactUs->objectName().isEmpty())
            contactUs->setObjectName("contactUs");
        contactUs->resize(576, 359);
        contactUs->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 255);"));
        label = new QLabel(contactUs);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 80, 421, 31));
        label->setStyleSheet(QString::fromUtf8("font: 15pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(contactUs);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 80, 81, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Lato Black\";\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(contactUs);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 120, 81, 31));
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"Lato Black\";\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(contactUs);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 120, 421, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(contactUs);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 200, 421, 31));
        label_5->setStyleSheet(QString::fromUtf8("\n"
"text-decoration: underline;\n"
"font: 15pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(contactUs);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 250, 451, 31));
        label_6 = new QLabel(contactUs);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 20, 421, 31));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"text-decoration: underline;\n"
"font: 15pt \"Lato Black\";\n"
"color: rgb(0, 0, 0);"));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(contactUs);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(212, 300, 161, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        retranslateUi(contactUs);

        QMetaObject::connectSlotsByName(contactUs);
    } // setupUi

    void retranslateUi(QDialog *contactUs)
    {
        contactUs->setWindowTitle(QCoreApplication::translate("contactUs", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("contactUs", " bookhavensheraaa@gmail.com", nullptr));
        label_2->setText(QCoreApplication::translate("contactUs", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("contactUs", "Call:", nullptr));
        label_4->setText(QCoreApplication::translate("contactUs", "+8801987365331", nullptr));
        label_5->setText(QCoreApplication::translate("contactUs", "Or leave us a message below!", nullptr));
        label_6->setText(QCoreApplication::translate("contactUs", "CONTACT BOOKHAVEN", nullptr));
        pushButton->setText(QCoreApplication::translate("contactUs", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contactUs: public Ui_contactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
