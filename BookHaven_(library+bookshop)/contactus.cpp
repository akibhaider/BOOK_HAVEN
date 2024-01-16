#include "contactus.h"
#include "ui_contactus.h"
#include "customer_panel.h"
#include "QMessageBox"
contactUs::contactUs(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::contactUs)
{
    ui->setupUi(this);
}

contactUs::~contactUs()
{
    delete ui;
}

void contactUs::on_backButton_clicked()
{
    this->hide();
    customer_panel cp;
    cp.exec();
}


void contactUs::on_pushButton_clicked()
{
    QMessageBox::critical(this, "Successful Submission", "Thanks for reaching towards us!");
    this->hide();
    customer_panel cp;
    cp.exec();
}

