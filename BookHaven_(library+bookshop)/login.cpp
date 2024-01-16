#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <digitallibrary.h>
#include <signup.h>
#include <newpasswd.h>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "customer_login.h"
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Admin Login Panel");
    setValidator();
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    //call the main Database
    digitalLibrary lib;
    auto db = lib.db;

    //Get the username
    QString username = ui->username->text();

    //Get the password
    QString password = ui->password->text();

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
        QString checkLogin = {"SELECT * FROM admin_accounts WHERE username='"
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
            qDebug() << "cannot select from admin_accounts";
    }
    else
        QMessageBox::warning(this, "Empty", "Fields are empty!");

}

void Login::on_signUpButton_clicked()
{
    this->hide();
    signUp signUp;
    signUp.exec();
}

void Login::on_forgetPasswdBtn_clicked()
{
    this->hide();
    newPasswd newpass;
    newpass.exec();
}

void Login::setValidator()
{
    //regx for username
    QRegularExpression rxName("^[A-Za-z][A-Za-z0-9_]{7,29}$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(rxName, this);
    ui->username->setValidator(valName);
}
//back_to_mainmenu
void Login::on_pushButton_clicked()
{
    this->hide();
    customer_login cust_login;
    cust_login.exec();
}

