/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReturnBook
{
public:
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *bookID;
    QHBoxLayout *horizontalLayout_6;
    QLabel *bookName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *memberID;
    QHBoxLayout *horizontalLayout_7;
    QLabel *memberName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDateEdit *issueDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDateEdit *returnDate;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QTextEdit *notes;
    QPushButton *returnBtn;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *lostBtn;
    QPushButton *deleteBtn;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QComboBox *bookStatus;
    QTableView *tableView;

    void setupUi(QDialog *ReturnBook)
    {
        if (ReturnBook->objectName().isEmpty())
            ReturnBook->setObjectName("ReturnBook");
        ReturnBook->resize(939, 557);
        ReturnBook->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 220);"));
        horizontalLayout_11 = new QHBoxLayout(ReturnBook);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ReturnBook);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        bookID = new QLineEdit(ReturnBook);
        bookID->setObjectName("bookID");
        bookID->setEnabled(false);
        bookID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout->addWidget(bookID);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        bookName = new QLabel(ReturnBook);
        bookName->setObjectName("bookName");
        sizePolicy.setHeightForWidth(bookName->sizePolicy().hasHeightForWidth());
        bookName->setSizePolicy(sizePolicy);
        bookName->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(bookName);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(ReturnBook);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        memberID = new QLineEdit(ReturnBook);
        memberID->setObjectName("memberID");
        memberID->setEnabled(false);
        memberID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_2->addWidget(memberID);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        memberName = new QLabel(ReturnBook);
        memberName->setObjectName("memberName");
        sizePolicy.setHeightForWidth(memberName->sizePolicy().hasHeightForWidth());
        memberName->setSizePolicy(sizePolicy);
        memberName->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(memberName);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(ReturnBook);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(label_3);

        issueDate = new QDateEdit(ReturnBook);
        issueDate->setObjectName("issueDate");
        issueDate->setEnabled(false);
        issueDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_4->addWidget(issueDate);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(ReturnBook);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(label_4);

        returnDate = new QDateEdit(ReturnBook);
        returnDate->setObjectName("returnDate");
        returnDate->setEnabled(true);
        returnDate->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));
        returnDate->setCalendarPopup(true);

        horizontalLayout_5->addWidget(returnDate);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(ReturnBook);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_5);

        notes = new QTextEdit(ReturnBook);
        notes->setObjectName("notes");
        notes->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout->addWidget(notes);


        verticalLayout_2->addLayout(verticalLayout);

        returnBtn = new QPushButton(ReturnBook);
        returnBtn->setObjectName("returnBtn");
        returnBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_2->addWidget(returnBtn);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lostBtn = new QPushButton(ReturnBook);
        lostBtn->setObjectName("lostBtn");
        lostBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_3->addWidget(lostBtn);

        deleteBtn = new QPushButton(ReturnBook);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_3->addWidget(deleteBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(ReturnBook);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(label_6);

        bookStatus = new QComboBox(ReturnBook);
        bookStatus->addItem(QString());
        bookStatus->addItem(QString());
        bookStatus->addItem(QString());
        bookStatus->addItem(QString());
        bookStatus->setObjectName("bookStatus");
        bookStatus->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 17px\n"
"}"));

        horizontalLayout_8->addWidget(bookStatus);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(horizontalLayout_9);

        tableView = new QTableView(ReturnBook);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #4f85e2; font: solid}"));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableView);


        horizontalLayout_10->addLayout(verticalLayout_3);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        retranslateUi(ReturnBook);

        QMetaObject::connectSlotsByName(ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *ReturnBook)
    {
        ReturnBook->setWindowTitle(QCoreApplication::translate("ReturnBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReturnBook", "Book ID      ", nullptr));
        bookName->setText(QString());
        label_2->setText(QCoreApplication::translate("ReturnBook", "Member ID", nullptr));
        memberName->setText(QString());
        label_3->setText(QCoreApplication::translate("ReturnBook", "Issue Date", nullptr));
        label_4->setText(QCoreApplication::translate("ReturnBook", "Return Date", nullptr));
        label_5->setText(QCoreApplication::translate("ReturnBook", "Note", nullptr));
        returnBtn->setText(QCoreApplication::translate("ReturnBook", "Return ", nullptr));
        lostBtn->setText(QCoreApplication::translate("ReturnBook", "Lost", nullptr));
        deleteBtn->setText(QCoreApplication::translate("ReturnBook", "Delete", nullptr));
        label_6->setText(QCoreApplication::translate("ReturnBook", "Book Status", nullptr));
        bookStatus->setItemText(0, QCoreApplication::translate("ReturnBook", "All", nullptr));
        bookStatus->setItemText(1, QCoreApplication::translate("ReturnBook", "Issued", nullptr));
        bookStatus->setItemText(2, QCoreApplication::translate("ReturnBook", "Returned", nullptr));
        bookStatus->setItemText(3, QCoreApplication::translate("ReturnBook", "Lost", nullptr));

    } // retranslateUi

};

namespace Ui {
    class ReturnBook: public Ui_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
