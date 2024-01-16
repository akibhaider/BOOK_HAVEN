#include "buyerinfo.h"
#include "ui_buyerinfo.h"
#include "bookcart.h"
BuyerInfo::BuyerInfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BuyerInfo)
{
    ui->setupUi(this);
}

BuyerInfo::~BuyerInfo()
{
    delete ui;
}

void BuyerInfo::on_customer_reg_to_view_clicked()
{
    this->hide();
    bookcart bc;
    bc.exec();
}

