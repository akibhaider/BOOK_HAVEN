#include "login_customer.h"
#include "ui_login_customer.h"

login_customer::login_customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_customer)
{
    ui->setupUi(this);
}

login_customer::~login_customer()
{
    delete ui;
}
