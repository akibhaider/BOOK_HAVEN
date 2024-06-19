/********************************************************************************
** Form generated from reading UI file 'manageauthors.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEAUTHORS_H
#define UI_MANAGEAUTHORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManageAuthors
{
public:
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *ID;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *firstName;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lastName;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *expertise;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTextEdit *about;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButtton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer_2;
    QTableView *authorTableView;

    void setupUi(QDialog *ManageAuthors)
    {
        if (ManageAuthors->objectName().isEmpty())
            ManageAuthors->setObjectName("ManageAuthors");
        ManageAuthors->resize(992, 602);
        ManageAuthors->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 250);"));
        horizontalLayout_5 = new QHBoxLayout(ManageAuthors);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame = new QFrame(ManageAuthors);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 13pt \"Lato\";"));

        verticalLayout_2->addWidget(label_2);

        ID = new QLineEdit(frame);
        ID->setObjectName("ID");
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        ID->setFont(font);
        ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_2->addWidget(ID);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 13pt \"Lato\";"));

        verticalLayout_3->addWidget(label_3);

        firstName = new QLineEdit(frame);
        firstName->setObjectName("firstName");
        firstName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_3->addWidget(firstName);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 13pt \"Lato\";"));

        verticalLayout_4->addWidget(label_4);

        lastName = new QLineEdit(frame);
        lastName->setObjectName("lastName");
        lastName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_4->addWidget(lastName);


        verticalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 13pt \"Lato\";"));

        verticalLayout_5->addWidget(label_5);

        expertise = new QLineEdit(frame);
        expertise->setObjectName("expertise");
        expertise->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_5->addWidget(expertise);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 13pt \"Lato\";"));

        verticalLayout->addWidget(label_6);

        about = new QTextEdit(frame);
        about->setObjectName("about");
        about->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout->addWidget(about);


        verticalLayout_6->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addButtton = new QPushButton(frame);
        addButtton->setObjectName("addButtton");
        addButtton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
""));

        horizontalLayout->addWidget(addButtton);

        editButton = new QPushButton(frame);
        editButton->setObjectName("editButton");
        editButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
""));

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(frame);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
""));

        horizontalLayout->addWidget(deleteButton);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_6);

        authorTableView = new QTableView(frame);
        authorTableView->setObjectName("authorTableView");
        authorTableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #4f85e2; font: solid}"));
        authorTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        authorTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        authorTableView->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(authorTableView);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_5->addWidget(frame);


        retranslateUi(ManageAuthors);

        QMetaObject::connectSlotsByName(ManageAuthors);
    } // setupUi

    void retranslateUi(QDialog *ManageAuthors)
    {
        ManageAuthors->setWindowTitle(QCoreApplication::translate("ManageAuthors", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("ManageAuthors", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("ManageAuthors", "First Name", nullptr));
        label_4->setText(QCoreApplication::translate("ManageAuthors", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("ManageAuthors", "Expertise", nullptr));
        label_6->setText(QCoreApplication::translate("ManageAuthors", "About", nullptr));
        addButtton->setText(QCoreApplication::translate("ManageAuthors", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("ManageAuthors", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("ManageAuthors", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageAuthors: public Ui_ManageAuthors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEAUTHORS_H
