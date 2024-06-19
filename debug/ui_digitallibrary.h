/********************************************************************************
** Form generated from reading UI file 'digitallibrary.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALLIBRARY_H
#define UI_DIGITALLIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digitalLibrary
{
public:
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QPushButton *addBookBtn;
    QPushButton *editBookBtn;
    QPushButton *deleteBookBtn;
    QPushButton *booksListBtn;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *label;
    QLabel *username;
    QPushButton *returnBookBtn_4;
    QFrame *frame_10;
    QPushButton *manageAuthorButton;
    QPushButton *manageGenre;
    QLabel *label_10;
    QFrame *frame_12;
    QPushButton *editMemberBtn;
    QPushButton *deleteMemberBtn;
    QPushButton *membersListBtn;
    QPushButton *addMemberBtn;
    QLabel *label_7;
    QFrame *frame_16;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *returnBookBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_9;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *issueBookBtn;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cover_1;
    QLabel *cover_2;
    QLabel *cover_3;
    QLabel *cover_4;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_24;
    QLabel *bookNum;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLabel *authorNum;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_20;
    QLabel *memberNum;
    QFrame *frame_3;
    QLabel *label_4;

    void setupUi(QDialog *digitalLibrary)
    {
        if (digitalLibrary->objectName().isEmpty())
            digitalLibrary->setObjectName("digitalLibrary");
        digitalLibrary->resize(827, 774);
        digitalLibrary->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 255, 230);"));
        verticalLayout_10 = new QVBoxLayout(digitalLibrary);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(11, -1, -1, -1);
        frame_4 = new QFrame(digitalLibrary);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 255, 230);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame_4);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 110, 192, 171));
        frame->setStyleSheet(QString::fromUtf8("background: #4d0016;\n"
"border-radius: 8px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("font: 63 13pt \"Lato Black\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_11);

        addBookBtn = new QPushButton(frame);
        addBookBtn->setObjectName("addBookBtn");
        addBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        addBookBtn->setAutoDefault(false);
        addBookBtn->setFlat(true);

        verticalLayout->addWidget(addBookBtn);

        editBookBtn = new QPushButton(frame);
        editBookBtn->setObjectName("editBookBtn");
        editBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        editBookBtn->setAutoDefault(false);
        editBookBtn->setFlat(true);

        verticalLayout->addWidget(editBookBtn);

        deleteBookBtn = new QPushButton(frame);
        deleteBookBtn->setObjectName("deleteBookBtn");
        deleteBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        deleteBookBtn->setAutoDefault(false);
        deleteBookBtn->setFlat(true);

        verticalLayout->addWidget(deleteBookBtn);

        booksListBtn = new QPushButton(frame);
        booksListBtn->setObjectName("booksListBtn");
        booksListBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        booksListBtn->setAutoDefault(false);
        booksListBtn->setFlat(true);

        verticalLayout->addWidget(booksListBtn);

        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(14, 14, 771, 81));
        frame_2->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(0, 51, 51);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_2);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 22pt \"Lato Black\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label);

        username = new QLabel(frame_2);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 19pt \"Lato\";"));
        username->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(username);

        returnBookBtn_4 = new QPushButton(frame_4);
        returnBookBtn_4->setObjectName("returnBookBtn_4");
        returnBookBtn_4->setGeometry(QRect(310, 690, 181, 40));
        returnBookBtn_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #160075;\n"
"border -radius:10px;\n"
"color: rgb(255, 255, 255);\n"
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
        frame_10 = new QFrame(frame_4);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(590, 300, 191, 121));
        frame_10->setStyleSheet(QString::fromUtf8("background: #4d0016;\n"
"border-radius: 8px;"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        manageAuthorButton = new QPushButton(frame_10);
        manageAuthorButton->setObjectName("manageAuthorButton");
        manageAuthorButton->setGeometry(QRect(10, 90, 168, 18));
        manageAuthorButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        manageAuthorButton->setAutoDefault(false);
        manageAuthorButton->setFlat(true);
        manageGenre = new QPushButton(frame_10);
        manageGenre->setObjectName("manageGenre");
        manageGenre->setGeometry(QRect(10, 60, 168, 18));
        manageGenre->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        manageGenre->setAutoDefault(false);
        manageGenre->setFlat(true);
        label_10 = new QLabel(frame_10);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 20, 168, 32));
        label_10->setStyleSheet(QString::fromUtf8("font: 63 13pt \"Lato Black\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_10->setAlignment(Qt::AlignCenter);
        frame_12 = new QFrame(frame_4);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(590, 110, 191, 171));
        frame_12->setStyleSheet(QString::fromUtf8("background: #4d0016;\n"
"border-radius: 8px;"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        editMemberBtn = new QPushButton(frame_12);
        editMemberBtn->setObjectName("editMemberBtn");
        editMemberBtn->setGeometry(QRect(10, 110, 168, 18));
        editMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        editMemberBtn->setAutoDefault(false);
        editMemberBtn->setFlat(true);
        deleteMemberBtn = new QPushButton(frame_12);
        deleteMemberBtn->setObjectName("deleteMemberBtn");
        deleteMemberBtn->setGeometry(QRect(10, 80, 168, 18));
        deleteMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        deleteMemberBtn->setAutoDefault(false);
        deleteMemberBtn->setFlat(true);
        membersListBtn = new QPushButton(frame_12);
        membersListBtn->setObjectName("membersListBtn");
        membersListBtn->setGeometry(QRect(10, 140, 168, 18));
        membersListBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        membersListBtn->setAutoDefault(false);
        membersListBtn->setFlat(true);
        addMemberBtn = new QPushButton(frame_12);
        addMemberBtn->setObjectName("addMemberBtn");
        addMemberBtn->setGeometry(QRect(11, 51, 168, 18));
        addMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        addMemberBtn->setAutoDefault(false);
        addMemberBtn->setFlat(true);
        label_7 = new QLabel(frame_12);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 169, 35));
        label_7->setStyleSheet(QString::fromUtf8("font: 63 10pt \"Lato Black\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_7->setAlignment(Qt::AlignCenter);
        frame_16 = new QFrame(frame_4);
        frame_16->setObjectName("frame_16");
        frame_16->setGeometry(QRect(20, 300, 191, 121));
        frame_16->setStyleSheet(QString::fromUtf8("background: #4d0016;\n"
"border-radius: 8px;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_16);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 90, 170, 21));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        returnBookBtn = new QPushButton(layoutWidget);
        returnBookBtn->setObjectName("returnBookBtn");
        returnBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        returnBookBtn->setAutoDefault(false);
        returnBookBtn->setFlat(true);

        horizontalLayout_16->addWidget(returnBookBtn);

        layoutWidget1 = new QWidget(frame_16);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 19, 170, 34));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 63 13pt \"Lato Black\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_9);

        layoutWidget2 = new QWidget(frame_16);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 60, 170, 21));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        issueBookBtn = new QPushButton(layoutWidget2);
        issueBookBtn->setObjectName("issueBookBtn");
        issueBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"padding : 0 4px;\n"
"background: #ffffff;\n"
"border -radius:10px;\n"
"color: rgb(0, 0, 0);\n"
"font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:hover:!pressed\n"
"{\n"
"border-radius:5px;\n"
"background:#ffcb3b;\n"
"}\n"
""));
        issueBookBtn->setAutoDefault(false);
        issueBookBtn->setFlat(true);

        horizontalLayout_15->addWidget(issueBookBtn);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(20, 500, 761, 180));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 255, 250);\n"
"border-radius: 8px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        cover_1 = new QLabel(frame_7);
        cover_1->setObjectName("cover_1");
        cover_1->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 255, 250);"));

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

        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(230, 270, 341, 151));
        frame_9->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(0, 51, 51);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_9);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_24 = new QLabel(frame_9);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 240);\n"
"text-decoration: underline;\n"
"font: 63 italic 13pt \"Lato Black\";\n"
"\n"
""));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_24);

        bookNum = new QLabel(frame_9);
        bookNum->setObjectName("bookNum");
        bookNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Lato Black\";\n"
""));
        bookNum->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(bookNum);


        verticalLayout_12->addLayout(verticalLayout_13);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(410, 110, 161, 151));
        frame_6->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(0, 51, 51);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_20 = new QHBoxLayout(frame_6);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_13 = new QLabel(frame_6);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 240);\n"
"text-decoration: underline;\n"
"font: 63 italic 13pt \"Lato Black\";\n"
"\n"
""));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);

        authorNum = new QLabel(frame_6);
        authorNum->setObjectName("authorNum");
        authorNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Lato Black\";\n"
""));
        authorNum->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(authorNum);


        horizontalLayout_20->addLayout(verticalLayout_7);

        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName("frame_8");
        frame_8->setEnabled(true);
        frame_8->setGeometry(QRect(230, 110, 161, 151));
        frame_8->setStyleSheet(QString::fromUtf8("border-radius: 8px;\n"
"background-color: rgb(0, 51, 51);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_8->setLineWidth(1);
        verticalLayout_9 = new QVBoxLayout(frame_8);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_20 = new QLabel(frame_8);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 240);\n"
"text-decoration: underline;\n"
"font: 63 italic 13pt \"Lato Black\";\n"
"\n"
""));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_20);

        memberNum = new QLabel(frame_8);
        memberNum->setObjectName("memberNum");
        memberNum->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 63 24pt \"Lato Black\";\n"
""));
        memberNum->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(memberNum);


        verticalLayout_9->addLayout(verticalLayout_8);

        frame_3 = new QFrame(frame_4);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(250, 450, 301, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background: #4d0016;\n"
"border-radius: 8px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 281, 20));
        label_4->setStyleSheet(QString::fromUtf8("font: 63 13pt \"Lato Black\";\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(frame_4);


        retranslateUi(digitalLibrary);

        addBookBtn->setDefault(false);
        editBookBtn->setDefault(false);
        deleteBookBtn->setDefault(false);
        booksListBtn->setDefault(false);
        returnBookBtn_4->setDefault(false);
        manageAuthorButton->setDefault(false);
        manageGenre->setDefault(false);
        editMemberBtn->setDefault(false);
        deleteMemberBtn->setDefault(false);
        membersListBtn->setDefault(false);
        addMemberBtn->setDefault(false);
        returnBookBtn->setDefault(false);
        issueBookBtn->setDefault(false);


        QMetaObject::connectSlotsByName(digitalLibrary);
    } // setupUi

    void retranslateUi(QDialog *digitalLibrary)
    {
        digitalLibrary->setWindowTitle(QCoreApplication::translate("digitalLibrary", "Dialog", nullptr));
        label_11->setText(QCoreApplication::translate("digitalLibrary", "Books", nullptr));
        addBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Add Book", nullptr));
        editBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Edit Book", nullptr));
        deleteBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Delete Book", nullptr));
        booksListBtn->setText(QCoreApplication::translate("digitalLibrary", "Books List", nullptr));
        label->setText(QCoreApplication::translate("digitalLibrary", "ADMIN", nullptr));
        username->setText(QCoreApplication::translate("digitalLibrary", "[+username]", nullptr));
        returnBookBtn_4->setText(QCoreApplication::translate("digitalLibrary", "Sign Out", nullptr));
        manageAuthorButton->setText(QCoreApplication::translate("digitalLibrary", "Manage Authors", nullptr));
        manageGenre->setText(QCoreApplication::translate("digitalLibrary", "Manage Genres", nullptr));
        label_10->setText(QCoreApplication::translate("digitalLibrary", "Manage", nullptr));
        editMemberBtn->setText(QCoreApplication::translate("digitalLibrary", "Edit Viewer Info", nullptr));
        deleteMemberBtn->setText(QCoreApplication::translate("digitalLibrary", "Delete Viewer", nullptr));
        membersListBtn->setText(QCoreApplication::translate("digitalLibrary", "Customer List", nullptr));
        addMemberBtn->setText(QCoreApplication::translate("digitalLibrary", "Add Viewer", nullptr));
        label_7->setText(QCoreApplication::translate("digitalLibrary", "Viewers & Customers", nullptr));
        returnBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Return Book", nullptr));
        label_9->setText(QCoreApplication::translate("digitalLibrary", "Circulation", nullptr));
        issueBookBtn->setText(QCoreApplication::translate("digitalLibrary", "Issue Book", nullptr));
        cover_1->setText(QString());
        cover_2->setText(QString());
        cover_3->setText(QString());
        cover_4->setText(QString());
        label_24->setText(QCoreApplication::translate("digitalLibrary", " Total Books", nullptr));
        bookNum->setText(QCoreApplication::translate("digitalLibrary", "50", nullptr));
        label_13->setText(QCoreApplication::translate("digitalLibrary", "Total Authors", nullptr));
        authorNum->setText(QCoreApplication::translate("digitalLibrary", "7", nullptr));
        label_20->setText(QCoreApplication::translate("digitalLibrary", "Total Viewers", nullptr));
        memberNum->setText(QCoreApplication::translate("digitalLibrary", "22", nullptr));
        label_4->setText(QCoreApplication::translate("digitalLibrary", "Latest Collection", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digitalLibrary: public Ui_digitalLibrary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALLIBRARY_H
