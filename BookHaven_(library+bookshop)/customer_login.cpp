#include "customer_login.h"
#include "ui_customer_login.h"
#include <QMessageBox>
#include <digitallibrary.h>
#include <customer_signup.h>>
#include <newpasswd.h>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "aboutus_cust_login.h"
#include "login.h"  // to go admin from customer
#include "customer_panel.h" //to go to the customer panel while logging in

customer_login::customer_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_login)
{
    ui->setupUi(this);
    this->setWindowTitle("Main Menu");
    setValidator();
}

customer_login::~customer_login()
{
    delete ui;
}

void customer_login::on_loginButton_customer_clicked()
{
    //call the main Database
    customer_panel lib;
    auto db = lib.db;

    //Get the username
    QString username = ui->username_customer->text();

    //Get the password
    QString password = ui->password_customer->text();

    //Check if the db is opened
    if(!db.isOpen())
    {
        qDebug() << "Failed to open the database";
    }

    //Define the query
    auto query = QSqlQuery(db);

    if(!username.isEmpty() & !password.isEmpty())
    {
        //Create the body of the query
        QString checkLogin = {"SELECT * FROM accounts WHERE username='"
                              +username+"' AND password='"+password+"'"};

        if(query.exec(checkLogin))
        {
            int count = 0;
            while(query.next())
            {
                count++;
            }
            if(count == 1)
            {
                lib.setUsername(username);

                //Hide the current window
                this->hide();

                //show the mainwindow
                lib.exec();
            }
            else if(count < 1)
                QMessageBox::warning(this, "Empty", "You are not registered!");
        }
        else
            qDebug() << "cannot select from accounts";
    }
    else
        QMessageBox::warning(this, "Empty", "Fields are empty!");

}

void customer_login::on_signUpButton_customer_clicked()
{
    this->hide();
    customer_signup signUp;
    signUp.exec();
}

void customer_login::on_forgetPasswdBtn_customer_clicked()
{
    this->hide();
    newPasswd newpass;
    newpass.exec();
}

void customer_login:: on_button_customer_to_admin_clicked(){
    this->hide();
    Login log;
    log.exec();

}

void customer_login::setValidator()
{
    //regx for username
    QRegularExpression rxName("^[A-Za-z][A-Za-z0-9_]{7,29}$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(rxName, this);
    ui->username_customer->setValidator(valName);
}

void customer_login::on_button_customer_to_admin_2_clicked()
{
    this->hide();
    AboutUs_cust_login acl;
    acl.exec();
}

