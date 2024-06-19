/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addMember
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *firstName;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *lastName;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *phone;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *email;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QComboBox *gender;
    QHBoxLayout *horizontalLayout;
    QPushButton *addMemberButton;
    QPushButton *pushButton;

    void setupUi(QDialog *addMember)
    {
        if (addMember->objectName().isEmpty())
            addMember->setObjectName("addMember");
        addMember->resize(439, 560);
        addMember->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 229, 180);"));
        verticalLayout_3 = new QVBoxLayout(addMember);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame = new QFrame(addMember);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        firstName = new QLineEdit(frame);
        firstName->setObjectName("firstName");
        firstName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout->addWidget(firstName);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_10->addWidget(label_10);

        lastName = new QLineEdit(frame);
        lastName->setObjectName("lastName");
        lastName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_10->addWidget(lastName);


        verticalLayout_2->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_7->addWidget(label_7);

        phone = new QLineEdit(frame);
        phone->setObjectName("phone");
        phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_7->addWidget(phone);


        verticalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_8->addWidget(label_8);

        email = new QLineEdit(frame);
        email->setObjectName("email");
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_8->addWidget(email);


        verticalLayout_2->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_9->addWidget(label_9);

        gender = new QComboBox(frame);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_9->addWidget(gender);


        verticalLayout_2->addLayout(verticalLayout_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addMemberButton = new QPushButton(frame);
        addMemberButton->setObjectName("addMemberButton");
        addMemberButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato Black\";\n"
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

        horizontalLayout->addWidget(addMemberButton);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Lato Black\";\n"
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

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(addMember);

        QMetaObject::connectSlotsByName(addMember);
    } // setupUi

    void retranslateUi(QDialog *addMember)
    {
        addMember->setWindowTitle(QCoreApplication::translate("addMember", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("addMember", "First Name", nullptr));
        label_10->setText(QCoreApplication::translate("addMember", "Last Name ", nullptr));
        label_7->setText(QCoreApplication::translate("addMember", "Phone Number", nullptr));
        label_8->setText(QCoreApplication::translate("addMember", "Email ", nullptr));
        label_9->setText(QCoreApplication::translate("addMember", "Gender", nullptr));
        gender->setItemText(0, QCoreApplication::translate("addMember", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("addMember", "Female", nullptr));

        addMemberButton->setText(QCoreApplication::translate("addMember", "Add Member", nullptr));
        pushButton->setText(QCoreApplication::translate("addMember", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMember: public Ui_addMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
