#include "aboutus_cust_login.h"
#include "ui_aboutus_cust_login.h"
#include "customer_login.h"
AboutUs_cust_login::AboutUs_cust_login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutUs_cust_login)
{
    ui->setupUi(this);
}

AboutUs_cust_login::~AboutUs_cust_login()
{
    delete ui;
}

void AboutUs_cust_login::on_backButton_clicked()
{
    this->hide();
    customer_login cl;
    cl.exec();
}


void AboutUs_cust_login::on_pushButton_clicked()
{
    this->hide();
    customer_login cl;
    cl.exec();
}

