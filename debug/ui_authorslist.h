/********************************************************************************
** Form generated from reading UI file 'authorslist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORSLIST_H
#define UI_AUTHORSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_authorsList
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *value;
    QTableView *authorTableView;

    void setupUi(QDialog *authorsList)
    {
        if (authorsList->objectName().isEmpty())
            authorsList->setObjectName("authorsList");
        authorsList->resize(645, 547);
        verticalLayout_2 = new QVBoxLayout(authorsList);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_9 = new QLabel(authorsList);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 13pt \"lato Black\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_9);

        value = new QLineEdit(authorsList);
        value->setObjectName("value");
        value->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: rgb(255, 255, 255);\n"
"	 border: 1px  solid;\n"
"     border-radius: 4px;\n"
"	font: 24px\n"
"}"));

        horizontalLayout->addWidget(value);


        verticalLayout->addLayout(horizontalLayout);

        authorTableView = new QTableView(authorsList);
        authorTableView->setObjectName("authorTableView");
        authorTableView->setStyleSheet(QString::fromUtf8("QHeaderView::section { background-color: #4f85e2; font: solid}"));
        authorTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        authorTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        authorTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(authorTableView);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(authorsList);

        QMetaObject::connectSlotsByName(authorsList);
    } // setupUi

    void retranslateUi(QDialog *authorsList)
    {
        authorsList->setWindowTitle(QCoreApplication::translate("authorsList", "Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("authorsList", "Search Author", nullptr));
    } // retranslateUi

};

namespace Ui {
    class authorsList: public Ui_authorsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORSLIST_H
