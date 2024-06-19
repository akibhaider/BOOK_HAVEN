/********************************************************************************
** Form generated from reading UI file 'booklist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKLIST_H
#define UI_BOOKLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_bookList
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *value;
    QTableView *tableView;
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
    QLabel *publisher;
    QLabel *price;
    QLabel *quantity;
    QLabel *date;
    QLabel *desc;
    QLabel *ISBN_2;
    QLabel *name_2;
    QLabel *publisher_2;
    QLabel *genre_2;
    QLabel *date_2;
    QLabel *price_2;
    QLabel *author_2;
    QLabel *quantity_2;
    QLabel *date_3;

    void setupUi(QDialog *bookList)
    {
        if (bookList->objectName().isEmpty())
            bookList->setObjectName("bookList");
        bookList->resize(1131, 525);
        bookList->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 255, 255);"));
        frame = new QFrame(bookList);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 581, 481));
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
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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

        frame_2 = new QFrame(bookList);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(759, 10, 361, 491));
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

        publisher = new QLabel(frame_2);
        publisher->setObjectName("publisher");
        sizePolicy.setHeightForWidth(publisher->sizePolicy().hasHeightForWidth());
        publisher->setSizePolicy(sizePolicy);
        publisher->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(publisher);

        price = new QLabel(frame_2);
        price->setObjectName("price");
        sizePolicy.setHeightForWidth(price->sizePolicy().hasHeightForWidth());
        price->setSizePolicy(sizePolicy);
        price->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(price);

        quantity = new QLabel(frame_2);
        quantity->setObjectName("quantity");
        sizePolicy.setHeightForWidth(quantity->sizePolicy().hasHeightForWidth());
        quantity->setSizePolicy(sizePolicy);
        quantity->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(quantity);

        date = new QLabel(frame_2);
        date->setObjectName("date");
        sizePolicy.setHeightForWidth(date->sizePolicy().hasHeightForWidth());
        date->setSizePolicy(sizePolicy);
        date->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(date);

        desc = new QLabel(frame_2);
        desc->setObjectName("desc");
        sizePolicy.setHeightForWidth(desc->sizePolicy().hasHeightForWidth());
        desc->setSizePolicy(sizePolicy);
        desc->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(desc);


        verticalLayout_4->addLayout(verticalLayout_3);

        ISBN_2 = new QLabel(bookList);
        ISBN_2->setObjectName("ISBN_2");
        ISBN_2->setGeometry(QRect(610, 270, 50, 27));
        sizePolicy.setHeightForWidth(ISBN_2->sizePolicy().hasHeightForWidth());
        ISBN_2->setSizePolicy(sizePolicy);
        ISBN_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        name_2 = new QLabel(bookList);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(610, 290, 58, 27));
        sizePolicy.setHeightForWidth(name_2->sizePolicy().hasHeightForWidth());
        name_2->setSizePolicy(sizePolicy);
        name_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        publisher_2 = new QLabel(bookList);
        publisher_2->setObjectName("publisher_2");
        publisher_2->setGeometry(QRect(610, 370, 92, 27));
        sizePolicy.setHeightForWidth(publisher_2->sizePolicy().hasHeightForWidth());
        publisher_2->setSizePolicy(sizePolicy);
        publisher_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        genre_2 = new QLabel(bookList);
        genre_2->setObjectName("genre_2");
        genre_2->setGeometry(QRect(610, 347, 61, 27));
        sizePolicy.setHeightForWidth(genre_2->sizePolicy().hasHeightForWidth());
        genre_2->setSizePolicy(sizePolicy);
        genre_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        date_2 = new QLabel(bookList);
        date_2->setObjectName("date_2");
        date_2->setGeometry(QRect(610, 450, 141, 20));
        sizePolicy.setHeightForWidth(date_2->sizePolicy().hasHeightForWidth());
        date_2->setSizePolicy(sizePolicy);
        date_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        price_2 = new QLabel(bookList);
        price_2->setObjectName("price_2");
        price_2->setGeometry(QRect(610, 400, 50, 20));
        sizePolicy.setHeightForWidth(price_2->sizePolicy().hasHeightForWidth());
        price_2->setSizePolicy(sizePolicy);
        price_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        author_2 = new QLabel(bookList);
        author_2->setObjectName("author_2");
        author_2->setGeometry(QRect(610, 319, 68, 27));
        sizePolicy.setHeightForWidth(author_2->sizePolicy().hasHeightForWidth());
        author_2->setSizePolicy(sizePolicy);
        author_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        quantity_2 = new QLabel(bookList);
        quantity_2->setObjectName("quantity_2");
        quantity_2->setGeometry(QRect(610, 420, 86, 20));
        sizePolicy.setHeightForWidth(quantity_2->sizePolicy().hasHeightForWidth());
        quantity_2->setSizePolicy(sizePolicy);
        quantity_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        date_3 = new QLabel(bookList);
        date_3->setObjectName("date_3");
        date_3->setGeometry(QRect(610, 470, 141, 20));
        sizePolicy.setHeightForWidth(date_3->sizePolicy().hasHeightForWidth());
        date_3->setSizePolicy(sizePolicy);
        date_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(bookList);

        QMetaObject::connectSlotsByName(bookList);
    } // setupUi

    void retranslateUi(QDialog *bookList)
    {
        bookList->setWindowTitle(QCoreApplication::translate("bookList", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("bookList", "Value to search", nullptr));
        coverLabel->setText(QString());
        ISBN->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        name->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        author->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        genre->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        publisher->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        price->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        quantity->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        date->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        desc->setText(QCoreApplication::translate("bookList", "xxx", nullptr));
        ISBN_2->setText(QCoreApplication::translate("bookList", "ISBN", nullptr));
        name_2->setText(QCoreApplication::translate("bookList", "Name", nullptr));
        publisher_2->setText(QCoreApplication::translate("bookList", "Publisher", nullptr));
        genre_2->setText(QCoreApplication::translate("bookList", "Genre", nullptr));
        date_2->setText(QCoreApplication::translate("bookList", "Date Received", nullptr));
        price_2->setText(QCoreApplication::translate("bookList", "Price", nullptr));
        author_2->setText(QCoreApplication::translate("bookList", "Author", nullptr));
        quantity_2->setText(QCoreApplication::translate("bookList", "Quantity", nullptr));
        date_3->setText(QCoreApplication::translate("bookList", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookList: public Ui_bookList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKLIST_H
