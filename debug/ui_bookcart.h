/********************************************************************************
** Form generated from reading UI file 'bookcart.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKCART_H
#define UI_BOOKCART_H

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

class Ui_bookcart
{
public:
    QLabel *name_2;
    QLabel *date_2;
    QLabel *date_3;
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
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *search_value_buy;
    QTableView *book_cart_view;
    QLabel *quantity_2;
    QLabel *price_2;
    QLabel *genre_2;
    QLabel *author_2;
    QLabel *ISBN_2;
    QLabel *publisher_2;
    QPushButton *buy_button;
    QPushButton *pushButton;

    void setupUi(QDialog *bookcart)
    {
        if (bookcart->objectName().isEmpty())
            bookcart->setObjectName("bookcart");
        bookcart->resize(1131, 525);
        bookcart->setStyleSheet(QString::fromUtf8("background-color: #E6FFE6;"));
        name_2 = new QLabel(bookcart);
        name_2->setObjectName("name_2");
        name_2->setGeometry(QRect(600, 280, 58, 27));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(name_2->sizePolicy().hasHeightForWidth());
        name_2->setSizePolicy(sizePolicy);
        name_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        date_2 = new QLabel(bookcart);
        date_2->setObjectName("date_2");
        date_2->setGeometry(QRect(600, 440, 141, 20));
        sizePolicy.setHeightForWidth(date_2->sizePolicy().hasHeightForWidth());
        date_2->setSizePolicy(sizePolicy);
        date_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        date_3 = new QLabel(bookcart);
        date_3->setObjectName("date_3");
        date_3->setGeometry(QRect(600, 460, 141, 20));
        sizePolicy.setHeightForWidth(date_3->sizePolicy().hasHeightForWidth());
        date_3->setSizePolicy(sizePolicy);
        date_3->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        frame_2 = new QFrame(bookcart);
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

        frame = new QFrame(bookcart);
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

        search_value_buy = new QLineEdit(frame);
        search_value_buy->setObjectName("search_value_buy");
        search_value_buy->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout->addWidget(search_value_buy);


        verticalLayout->addLayout(horizontalLayout);

        book_cart_view = new QTableView(frame);
        book_cart_view->setObjectName("book_cart_view");
        book_cart_view->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #4f85e2; font: solid}"));
        book_cart_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        book_cart_view->horizontalHeader()->setHighlightSections(true);
        book_cart_view->verticalHeader()->setVisible(false);
        book_cart_view->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(book_cart_view);


        verticalLayout_2->addLayout(verticalLayout);

        quantity_2 = new QLabel(bookcart);
        quantity_2->setObjectName("quantity_2");
        quantity_2->setGeometry(QRect(600, 410, 86, 20));
        sizePolicy.setHeightForWidth(quantity_2->sizePolicy().hasHeightForWidth());
        quantity_2->setSizePolicy(sizePolicy);
        quantity_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        price_2 = new QLabel(bookcart);
        price_2->setObjectName("price_2");
        price_2->setGeometry(QRect(600, 390, 50, 20));
        sizePolicy.setHeightForWidth(price_2->sizePolicy().hasHeightForWidth());
        price_2->setSizePolicy(sizePolicy);
        price_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        genre_2 = new QLabel(bookcart);
        genre_2->setObjectName("genre_2");
        genre_2->setGeometry(QRect(600, 337, 61, 27));
        sizePolicy.setHeightForWidth(genre_2->sizePolicy().hasHeightForWidth());
        genre_2->setSizePolicy(sizePolicy);
        genre_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        author_2 = new QLabel(bookcart);
        author_2->setObjectName("author_2");
        author_2->setGeometry(QRect(600, 309, 68, 27));
        sizePolicy.setHeightForWidth(author_2->sizePolicy().hasHeightForWidth());
        author_2->setSizePolicy(sizePolicy);
        author_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        ISBN_2 = new QLabel(bookcart);
        ISBN_2->setObjectName("ISBN_2");
        ISBN_2->setGeometry(QRect(600, 260, 50, 27));
        sizePolicy.setHeightForWidth(ISBN_2->sizePolicy().hasHeightForWidth());
        ISBN_2->setSizePolicy(sizePolicy);
        ISBN_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        publisher_2 = new QLabel(bookcart);
        publisher_2->setObjectName("publisher_2");
        publisher_2->setGeometry(QRect(600, 360, 92, 27));
        sizePolicy.setHeightForWidth(publisher_2->sizePolicy().hasHeightForWidth());
        publisher_2->setSizePolicy(sizePolicy);
        publisher_2->setStyleSheet(QString::fromUtf8("font: 10pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));
        buy_button = new QPushButton(bookcart);
        buy_button->setObjectName("buy_button");
        buy_button->setGeometry(QRect(600, 20, 111, 31));
        buy_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton = new QPushButton(bookcart);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 490, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton->raise();
        name_2->raise();
        date_2->raise();
        date_3->raise();
        frame_2->raise();
        frame->raise();
        quantity_2->raise();
        price_2->raise();
        genre_2->raise();
        author_2->raise();
        ISBN_2->raise();
        publisher_2->raise();
        buy_button->raise();

        retranslateUi(bookcart);

        QMetaObject::connectSlotsByName(bookcart);
    } // setupUi

    void retranslateUi(QDialog *bookcart)
    {
        bookcart->setWindowTitle(QCoreApplication::translate("bookcart", "Dialog", nullptr));
        name_2->setText(QCoreApplication::translate("bookcart", "Name", nullptr));
        date_2->setText(QCoreApplication::translate("bookcart", "Date Received", nullptr));
        date_3->setText(QCoreApplication::translate("bookcart", "Description", nullptr));
        coverLabel->setText(QString());
        ISBN->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        name->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        author->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        genre->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        publisher->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        price->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        quantity->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        date->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        desc->setText(QCoreApplication::translate("bookcart", "xxx", nullptr));
        label->setText(QCoreApplication::translate("bookcart", "Value to search", nullptr));
        quantity_2->setText(QCoreApplication::translate("bookcart", "Quantity", nullptr));
        price_2->setText(QCoreApplication::translate("bookcart", "Price", nullptr));
        genre_2->setText(QCoreApplication::translate("bookcart", "Genre", nullptr));
        author_2->setText(QCoreApplication::translate("bookcart", "Author", nullptr));
        ISBN_2->setText(QCoreApplication::translate("bookcart", "ISBN", nullptr));
        publisher_2->setText(QCoreApplication::translate("bookcart", "Publisher", nullptr));
        buy_button->setText(QCoreApplication::translate("bookcart", "PURCHASE", nullptr));
        pushButton->setText(QCoreApplication::translate("bookcart", "RETURN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookcart: public Ui_bookcart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKCART_H
