/********************************************************************************
** Form generated from reading UI file 'memberslist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERSLIST_H
#define UI_MEMBERSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_membersList
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *value;
    QTableView *tableView;

    void setupUi(QDialog *membersList)
    {
        if (membersList->objectName().isEmpty())
            membersList->setObjectName("membersList");
        membersList->resize(544, 478);
        membersList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 229, 180);"));
        verticalLayout_3 = new QVBoxLayout(membersList);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame = new QFrame(membersList);
        frame->setObjectName("frame");
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
        label->setStyleSheet(QString::fromUtf8("font: 13pt \"Lato\";\n"
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
        tableView->horizontalHeader()->setHighlightSections(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(membersList);

        QMetaObject::connectSlotsByName(membersList);
    } // setupUi

    void retranslateUi(QDialog *membersList)
    {
        membersList->setWindowTitle(QCoreApplication::translate("membersList", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("membersList", "Value to search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class membersList: public Ui_membersList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERSLIST_H
