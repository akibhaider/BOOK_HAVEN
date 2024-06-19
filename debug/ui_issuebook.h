/********************************************************************************
** Form generated from reading UI file 'issuebook.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISSUEBOOK_H
#define UI_ISSUEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IssueBook
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *bookID;
    QPushButton *searchBook;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *bookName;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *memberID;
    QPushButton *searchMember;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *memberName;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *available;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDateEdit *issueDate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *returnDate;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTextEdit *notes;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *issue;
    QPushButton *cancel;

    void setupUi(QDialog *IssueBook)
    {
        if (IssueBook->objectName().isEmpty())
            IssueBook->setObjectName("IssueBook");
        IssueBook->resize(489, 607);
        IssueBook->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"background-color: rgb(245, 245, 220);"));
        verticalLayout_2 = new QVBoxLayout(IssueBook);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(IssueBook);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        bookID = new QLineEdit(IssueBook);
        bookID->setObjectName("bookID");
        bookID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout->addWidget(bookID);

        searchBook = new QPushButton(IssueBook);
        searchBook->setObjectName("searchBook");
        searchBook->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt \"Lato\";\n"
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

        horizontalLayout->addWidget(searchBook);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        bookName = new QLabel(IssueBook);
        bookName->setObjectName("bookName");
        sizePolicy.setHeightForWidth(bookName->sizePolicy().hasHeightForWidth());
        bookName->setSizePolicy(sizePolicy);
        bookName->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(bookName);

        horizontalSpacer_3 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(IssueBook);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        memberID = new QLineEdit(IssueBook);
        memberID->setObjectName("memberID");
        memberID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_2->addWidget(memberID);

        searchMember = new QPushButton(IssueBook);
        searchMember->setObjectName("searchMember");
        searchMember->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #0c0033;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt \"Lato\";\n"
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

        horizontalLayout_2->addWidget(searchMember);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_4 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        memberName = new QLabel(IssueBook);
        memberName->setObjectName("memberName");
        sizePolicy.setHeightForWidth(memberName->sizePolicy().hasHeightForWidth());
        memberName->setSizePolicy(sizePolicy);
        memberName->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(memberName);

        horizontalSpacer_5 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(IssueBook);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(label_3);

        available = new QLabel(IssueBook);
        available->setObjectName("available");
        sizePolicy.setHeightForWidth(available->sizePolicy().hasHeightForWidth());
        available->setSizePolicy(sizePolicy);
        available->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(available);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(IssueBook);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_4);

        issueDate = new QDateEdit(IssueBook);
        issueDate->setObjectName("issueDate");
        issueDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));
        issueDate->setCalendarPopup(true);

        horizontalLayout_3->addWidget(issueDate);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(IssueBook);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_5);

        returnDate = new QDateEdit(IssueBook);
        returnDate->setObjectName("returnDate");
        returnDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));
        returnDate->setCalendarPopup(true);

        horizontalLayout_4->addWidget(returnDate);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_6 = new QLabel(IssueBook);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_6);

        notes = new QTextEdit(IssueBook);
        notes->setObjectName("notes");
        notes->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout->addWidget(notes);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        issue = new QPushButton(IssueBook);
        issue->setObjectName("issue");
        issue->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_7->addWidget(issue);

        cancel = new QPushButton(IssueBook);
        cancel->setObjectName("cancel");
        cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_7->addWidget(cancel);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(IssueBook);

        QMetaObject::connectSlotsByName(IssueBook);
    } // setupUi

    void retranslateUi(QDialog *IssueBook)
    {
        IssueBook->setWindowTitle(QCoreApplication::translate("IssueBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("IssueBook", "Book ID      ", nullptr));
        searchBook->setText(QCoreApplication::translate("IssueBook", "Search Book", nullptr));
        bookName->setText(QString());
        label_2->setText(QCoreApplication::translate("IssueBook", "Member ID ", nullptr));
        searchMember->setText(QCoreApplication::translate("IssueBook", "Search Member", nullptr));
        memberName->setText(QString());
        label_3->setText(QCoreApplication::translate("IssueBook", "Is This Book Available:", nullptr));
        available->setText(QCoreApplication::translate("IssueBook", " Yes-Or-No", nullptr));
        label_4->setText(QCoreApplication::translate("IssueBook", "Issue Date  ", nullptr));
        label_5->setText(QCoreApplication::translate("IssueBook", "Return Date", nullptr));
        label_6->setText(QCoreApplication::translate("IssueBook", "Note", nullptr));
        issue->setText(QCoreApplication::translate("IssueBook", "Issue", nullptr));
        cancel->setText(QCoreApplication::translate("IssueBook", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IssueBook: public Ui_IssueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISSUEBOOK_H
