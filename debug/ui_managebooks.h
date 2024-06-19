/********************************************************************************
** Form generated from reading UI file 'managebooks.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEBOOKS_H
#define UI_MANAGEBOOKS_H

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

class Ui_manageBooks
{
public:
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ID;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *Name;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *add;
    QPushButton *edit;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_7;
    QTableView *genreTableView;

    void setupUi(QDialog *manageBooks)
    {
        if (manageBooks->objectName().isEmpty())
            manageBooks->setObjectName("manageBooks");
        manageBooks->resize(802, 510);
        manageBooks->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 250);"));
        horizontalLayout_6 = new QHBoxLayout(manageBooks);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        frame = new QFrame(manageBooks);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_3 = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ID = new QLineEdit(frame);
        ID->setObjectName("ID");
        ID->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_2->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        Name = new QLineEdit(frame);
        Name->setObjectName("Name");
        Name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout_3->addWidget(Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        add = new QPushButton(frame);
        add->setObjectName("add");
        add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(add);

        edit = new QPushButton(frame);
        edit->setObjectName("edit");
        edit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(edit);

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

        verticalLayout->addWidget(deleteButton);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");

        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_4->addLayout(verticalLayout);

        genreTableView = new QTableView(frame);
        genreTableView->setObjectName("genreTableView");
        genreTableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #4f85e2; font: solid}"));
        genreTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        genreTableView->horizontalHeader()->setDefaultSectionSize(200);
        genreTableView->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(genreTableView);


        horizontalLayout_6->addWidget(frame);


        retranslateUi(manageBooks);

        QMetaObject::connectSlotsByName(manageBooks);
    } // setupUi

    void retranslateUi(QDialog *manageBooks)
    {
        manageBooks->setWindowTitle(QCoreApplication::translate("manageBooks", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("manageBooks", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("manageBooks", "Name", nullptr));
        add->setText(QCoreApplication::translate("manageBooks", "Add", nullptr));
        edit->setText(QCoreApplication::translate("manageBooks", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("manageBooks", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manageBooks: public Ui_manageBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEBOOKS_H
