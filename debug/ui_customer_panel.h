/********************************************************************************
** Form generated from reading UI file 'customer_panel.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_PANEL_H
#define UI_CUSTOMER_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customer_panel
{
public:
    QFrame *frame_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_2;
    QLabel *username;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *bookNum;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_7;
    QLabel *authorNum;
    QPushButton *returnBookBtn_3;
    QPushButton *returnBookBtn_4;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cover_1;
    QLabel *cover_2;
    QLabel *cover_3;
    QLabel *cover_4;
    QPushButton *my_books;
    QPushButton *pushButton_buy;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *frame_8;
    QLabel *label_9;

    void setupUi(QDialog *customer_panel)
    {
        if (customer_panel->objectName().isEmpty())
            customer_panel->setObjectName("customer_panel");
        customer_panel->resize(850, 804);
        frame_4 = new QFrame(customer_panel);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(-20, -10, 911, 837));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(190, 20, 431, 81));
        frame_2->setStyleSheet(QString::fromUtf8("background: #ffffff;\n"
"border-radius: 8px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_2);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(4, 0, 133);\n"
"font: 19pt \"Lato\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_2);

        username = new QLabel(frame_2);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 17pt \"Lato\";"));
        username->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(username);

        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(270, 200, 81, 51));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(156, 255, 182);\n"
"border-radius: 8px;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_9);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        bookNum = new QLabel(frame_9);
        bookNum->setObjectName("bookNum");
        bookNum->setStyleSheet(QString::fromUtf8("color: #333333;\n"
"font: 63 23pt \"Lato Black\";\n"
""));
        bookNum->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(bookNum);


        verticalLayout_12->addLayout(verticalLayout_13);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(270, 260, 81, 51));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(156, 255, 182);\n"
"border-radius: 8px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_6);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        authorNum = new QLabel(frame_6);
        authorNum->setObjectName("authorNum");
        authorNum->setStyleSheet(QString::fromUtf8("color: #333333;\n"
"font: 63 23pt \"Lato Black\";\n"
""));
        authorNum->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(authorNum);


        horizontalLayout_20->addLayout(verticalLayout_7);

        returnBookBtn_3 = new QPushButton(frame_4);
        returnBookBtn_3->setObjectName("returnBookBtn_3");
        returnBookBtn_3->setGeometry(QRect(90, 750, 311, 31));
        returnBookBtn_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #9cffb6;\n"
"border -radius:10px;\n"
"color: rgb(0,0,0);\n"
"font: 12pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ababab;\n"
"}\n"
""));
        returnBookBtn_3->setAutoDefault(false);
        returnBookBtn_3->setFlat(true);
        returnBookBtn_4 = new QPushButton(frame_4);
        returnBookBtn_4->setObjectName("returnBookBtn_4");
        returnBookBtn_4->setGeometry(QRect(440, 750, 311, 31));
        returnBookBtn_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #9cffb6;\n"
"border -radius:10px;\n"
"color: rgb(0,0,0);\n"
"font: 12pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ababab;\n"
"}\n"
""));
        returnBookBtn_4->setAutoDefault(false);
        returnBookBtn_4->setFlat(true);
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(60, 400, 731, 221));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius: 8px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cover_1 = new QLabel(frame_7);
        cover_1->setObjectName("cover_1");

        horizontalLayout_2->addWidget(cover_1);

        cover_2 = new QLabel(frame_7);
        cover_2->setObjectName("cover_2");

        horizontalLayout_2->addWidget(cover_2);

        cover_3 = new QLabel(frame_7);
        cover_3->setObjectName("cover_3");

        horizontalLayout_2->addWidget(cover_3);

        cover_4 = new QLabel(frame_7);
        cover_4->setObjectName("cover_4");

        horizontalLayout_2->addWidget(cover_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        my_books = new QPushButton(frame_4);
        my_books->setObjectName("my_books");
        my_books->setGeometry(QRect(60, 690, 731, 41));
        my_books->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #78acfa;\n"
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
        pushButton_buy = new QPushButton(frame_4);
        pushButton_buy->setObjectName("pushButton_buy");
        pushButton_buy->setGeometry(QRect(60, 640, 731, 41));
        pushButton_buy->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #78acfa;\n"
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
        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 120, 831, 31));
        label_5->setStyleSheet(QString::fromUtf8("text-decoration:underline;\n"
"color: rgb(255, 255, 255);\n"
"font: 17pt \"Lato\";"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 160, 731, 31));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(156, 255, 182);\n"
"font: 17pt \"Lato\";"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(370, 210, 291, 31));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(156, 255, 182);\n"
"font: 15pt \"Lato\";"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_8 = new QLabel(frame_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 270, 291, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(156, 255, 182);\n"
"font: 15pt \"Lato\";"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(280, 340, 241, 41));
        frame_8->setStyleSheet(QString::fromUtf8("background: #9cffb6;\n"
"border-radius: 8px;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_8);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 221, 20));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"font: 15pt \"Lato Black\";"));
        label_9->setAlignment(Qt::AlignCenter);

        retranslateUi(customer_panel);

        returnBookBtn_3->setDefault(false);
        returnBookBtn_4->setDefault(false);


        QMetaObject::connectSlotsByName(customer_panel);
    } // setupUi

    void retranslateUi(QDialog *customer_panel)
    {
        customer_panel->setWindowTitle(QCoreApplication::translate("customer_panel", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("customer_panel", "Welcome Back!", nullptr));
        username->setText(QCoreApplication::translate("customer_panel", "[+username]", nullptr));
        bookNum->setText(QCoreApplication::translate("customer_panel", "50", nullptr));
        authorNum->setText(QCoreApplication::translate("customer_panel", "7", nullptr));
        returnBookBtn_3->setText(QCoreApplication::translate("customer_panel", "Contact Us", nullptr));
        returnBookBtn_4->setText(QCoreApplication::translate("customer_panel", "Sign Out", nullptr));
        cover_1->setText(QString());
        cover_2->setText(QString());
        cover_3->setText(QString());
        cover_4->setText(QString());
        my_books->setText(QCoreApplication::translate("customer_panel", "My Books", nullptr));
        pushButton_buy->setText(QCoreApplication::translate("customer_panel", "Buy Books", nullptr));
        label_5->setText(QCoreApplication::translate("customer_panel", "Why are we the best?", nullptr));
        label_6->setText(QCoreApplication::translate("customer_panel", "Because we provide you with the best collection of:", nullptr));
        label_7->setText(QCoreApplication::translate("customer_panel", "Unique Books!", nullptr));
        label_8->setText(QCoreApplication::translate("customer_panel", "Top Authors!", nullptr));
        label_9->setText(QCoreApplication::translate("customer_panel", "WHATS NEW?!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customer_panel: public Ui_customer_panel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_PANEL_H
