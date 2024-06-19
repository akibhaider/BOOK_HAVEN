/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addBook
{
public:
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *ISBN;
    QLabel *label_2;
    QLineEdit *Name;
    QLabel *label_3;
    QPushButton *chooseAuthBtn;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *author;
    QLabel *label_4;
    QPushButton *chooseGenreBtn;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *Genre;
    QLabel *label_5;
    QSpinBox *quantity;
    QLabel *label_6;
    QLineEdit *publisher;
    QLabel *label_7;
    QLineEdit *price;
    QLabel *label_8;
    QDateEdit *date;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QTextEdit *description;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QLabel *coverLabel;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *selectImgBtn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addBookBtn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelBtn;

    void setupUi(QDialog *addBook)
    {
        if (addBook->objectName().isEmpty())
            addBook->setObjectName("addBook");
        addBook->resize(715, 730);
        addBook->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);"));
        horizontalLayout_5 = new QHBoxLayout(addBook);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        frame = new QFrame(addBook);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label);

        ISBN = new QLineEdit(frame);
        ISBN->setObjectName("ISBN");
        ISBN->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_3->addWidget(ISBN);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_2);

        Name = new QLineEdit(frame);
        Name->setObjectName("Name");
        Name->setEnabled(true);
        Name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_3->addWidget(Name);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_3);

        chooseAuthBtn = new QPushButton(frame);
        chooseAuthBtn->setObjectName("chooseAuthBtn");
        chooseAuthBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_3->addWidget(chooseAuthBtn);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        author = new QLineEdit(frame);
        author->setObjectName("author");
        author->setEnabled(false);
        author->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_3->addWidget(author);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_4);

        chooseGenreBtn = new QPushButton(frame);
        chooseGenreBtn->setObjectName("chooseGenreBtn");
        chooseGenreBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_3->addWidget(chooseGenreBtn);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Genre = new QComboBox(frame);
        Genre->setObjectName("Genre");
        Genre->setEnabled(true);
        Genre->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_4->addWidget(Genre);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_5);

        quantity = new QSpinBox(frame);
        quantity->setObjectName("quantity");
        quantity->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_3->addWidget(quantity);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_6);

        publisher = new QLineEdit(frame);
        publisher->setObjectName("publisher");
        publisher->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_3->addWidget(publisher);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_7);

        price = new QLineEdit(frame);
        price->setObjectName("price");
        price->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_3->addWidget(price);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_8);

        date = new QDateEdit(frame);
        date->setObjectName("date");
        date->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));
        date->setCalendarPopup(true);

        verticalLayout_3->addWidget(date);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_5->addWidget(frame);

        frame_2 = new QFrame(addBook);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_9);

        description = new QTextEdit(frame_2);
        description->setObjectName("description");
        description->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        verticalLayout_2->addWidget(description);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_11);

        coverLabel = new QLabel(frame_2);
        coverLabel->setObjectName("coverLabel");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(coverLabel->sizePolicy().hasHeightForWidth());
        coverLabel->setSizePolicy(sizePolicy);
        coverLabel->setFocusPolicy(Qt::StrongFocus);
        coverLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"border-color: rgb(0, 0, 0);"));
        coverLabel->setFrameShape(QFrame::Box);
        coverLabel->setFrameShadow(QFrame::Raised);
        coverLabel->setMidLineWidth(1);

        verticalLayout->addWidget(coverLabel);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        selectImgBtn = new QPushButton(frame_2);
        selectImgBtn->setObjectName("selectImgBtn");
        selectImgBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_6->addWidget(selectImgBtn);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        addBookBtn = new QPushButton(frame_2);
        addBookBtn->setObjectName("addBookBtn");
        addBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #FFFFE0;\n"
"border -radius:10px;\n"
"color: #000000;\n"
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

        verticalLayout_2->addWidget(addBookBtn);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cancelBtn = new QPushButton(frame_2);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #FFFFE0;\n"
"border -radius:10px;\n"
"color: #000000;\n"
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

        horizontalLayout_2->addWidget(cancelBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_5->addWidget(frame_2);


        retranslateUi(addBook);

        QMetaObject::connectSlotsByName(addBook);
    } // setupUi

    void retranslateUi(QDialog *addBook)
    {
        addBook->setWindowTitle(QCoreApplication::translate("addBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addBook", "ISBN", nullptr));
        label_2->setText(QCoreApplication::translate("addBook", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("addBook", "Author", nullptr));
        chooseAuthBtn->setText(QCoreApplication::translate("addBook", "Choose Author", nullptr));
        label_4->setText(QCoreApplication::translate("addBook", "Genre", nullptr));
        chooseGenreBtn->setText(QCoreApplication::translate("addBook", "Choose Genre", nullptr));
        label_5->setText(QCoreApplication::translate("addBook", "Quantity", nullptr));
        label_6->setText(QCoreApplication::translate("addBook", "Pusblisher", nullptr));
        label_7->setText(QCoreApplication::translate("addBook", "Price", nullptr));
        label_8->setText(QCoreApplication::translate("addBook", "Date", nullptr));
        label_9->setText(QCoreApplication::translate("addBook", "Book Description", nullptr));
        label_11->setText(QCoreApplication::translate("addBook", "Book Cover", nullptr));
        coverLabel->setText(QString());
        selectImgBtn->setText(QCoreApplication::translate("addBook", "Select Image", nullptr));
        addBookBtn->setText(QCoreApplication::translate("addBook", "Add Book", nullptr));
        cancelBtn->setText(QCoreApplication::translate("addBook", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBook: public Ui_addBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
