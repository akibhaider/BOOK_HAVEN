/********************************************************************************
** Form generated from reading UI file 'customers_book_list.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERS_BOOK_LIST_H
#define UI_CUSTOMERS_BOOK_LIST_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customers_book_list
{
public:
    QLabel *author_2;
    QLabel *genre_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *coverLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *ISBN;
    QLabel *name;
    QLabel *author;
    QLabel *genre;
    QLabel *publisher_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *value;
    QTableView *tableView;
    QLabel *name_2;
    QPushButton *buy_to_customer_panel;

    void setupUi(QDialog *customers_book_list)
    {
        if (customers_book_list->objectName().isEmpty())
            customers_book_list->setObjectName("customers_book_list");
        customers_book_list->resize(1126, 525);
        customers_book_list->setStyleSheet(QString::fromUtf8("background-color: #E6FFE6;"));
        author_2 = new QLabel(customers_book_list);
        author_2->setObjectName("author_2");
        author_2->setGeometry(QRect(600, 399, 68, 27));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(author_2->sizePolicy().hasHeightForWidth());
        author_2->setSizePolicy(sizePolicy);
        author_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        genre_2 = new QLabel(customers_book_list);
        genre_2->setObjectName("genre_2");
        genre_2->setGeometry(QRect(600, 427, 61, 27));
        sizePolicy.setHeightForWidth(genre_2->sizePolicy().hasHeightForWidth());
        genre_2->setSizePolicy(sizePolicy);
        genre_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        frame_2 = new QFrame(customers_book_list);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(739, 0, 371, 491));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        coverLabel = new QLabel(frame_2);
        coverLabel->setObjectName("coverLabel");
        coverLabel->setFocusPolicy(Qt::StrongFocus);
        coverLabel->setStyleSheet(QString::fromUtf8("background-color: #84A9FF;\n"
"border-color: rgb(0, 0, 0);"));
        coverLabel->setFrameShape(QFrame::Box);
        coverLabel->setFrameShadow(QFrame::Raised);
        coverLabel->setMidLineWidth(1);

        horizontalLayout_2->addWidget(coverLabel);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        ISBN = new QLabel(frame_2);
        ISBN->setObjectName("ISBN");
        sizePolicy.setHeightForWidth(ISBN->sizePolicy().hasHeightForWidth());
        ISBN->setSizePolicy(sizePolicy);
        ISBN->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(ISBN);

        name = new QLabel(frame_2);
        name->setObjectName("name");
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);
        name->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(name);

        author = new QLabel(frame_2);
        author->setObjectName("author");
        sizePolicy.setHeightForWidth(author->sizePolicy().hasHeightForWidth());
        author->setSizePolicy(sizePolicy);
        author->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(author);

        genre = new QLabel(frame_2);
        genre->setObjectName("genre");
        sizePolicy.setHeightForWidth(genre->sizePolicy().hasHeightForWidth());
        genre->setSizePolicy(sizePolicy);
        genre->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(genre);


        verticalLayout_4->addLayout(verticalLayout_3);

        publisher_2 = new QLabel(customers_book_list);
        publisher_2->setObjectName("publisher_2");
        publisher_2->setGeometry(QRect(600, 450, 92, 27));
        sizePolicy.setHeightForWidth(publisher_2->sizePolicy().hasHeightForWidth());
        publisher_2->setSizePolicy(sizePolicy);
        publisher_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        frame = new QFrame(customers_book_list);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 581, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato Black\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        value = new QLineEdit(frame);
        value->setObjectName("value");
        value->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout->addWidget(value);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(frame);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #4f85e2; font: solid}"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setHighlightSections(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);

        name_2 = new QLabel(customers_book_list);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(600, 370, 58, 27));
        sizePolicy.setHeightForWidth(name_2->sizePolicy().hasHeightForWidth());
        name_2->setSizePolicy(sizePolicy);
        name_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        buy_to_customer_panel = new QPushButton(customers_book_list);
        buy_to_customer_panel->setObjectName("buy_to_customer_panel");
        buy_to_customer_panel->setGeometry(QRect(210, 490, 111, 31));
        buy_to_customer_panel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:7px;\n"
"padding : 0 2px;\n"
"background: rgb(51, 51, 51);\n"
"border -radius:10px;\n"
"color: rgb(240, 240, 240);\n"
"font: 12pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ababab;\n"
"}\n"
""));

        retranslateUi(customers_book_list);

        QMetaObject::connectSlotsByName(customers_book_list);
    } // setupUi

    void retranslateUi(QDialog *customers_book_list)
    {
        customers_book_list->setWindowTitle(QCoreApplication::translate("customers_book_list", "Dialog", nullptr));
        author_2->setText(QCoreApplication::translate("customers_book_list", "Author", nullptr));
        genre_2->setText(QCoreApplication::translate("customers_book_list", "Genre", nullptr));
        coverLabel->setText(QString());
        ISBN->setText(QCoreApplication::translate("customers_book_list", "xxx", nullptr));
        name->setText(QCoreApplication::translate("customers_book_list", "xxx", nullptr));
        author->setText(QCoreApplication::translate("customers_book_list", "xxx", nullptr));
        genre->setText(QCoreApplication::translate("customers_book_list", "xxx", nullptr));
        publisher_2->setText(QCoreApplication::translate("customers_book_list", "Publisher", nullptr));
        label->setText(QCoreApplication::translate("customers_book_list", "Value to search", nullptr));
        name_2->setText(QCoreApplication::translate("customers_book_list", "Name", nullptr));
        buy_to_customer_panel->setText(QCoreApplication::translate("customers_book_list", "RETURN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customers_book_list: public Ui_customers_book_list {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERS_BOOK_LIST_H
