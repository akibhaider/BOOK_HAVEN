#include "customer_signup.h"
#include "ui_customer_signup.h"

#include "digitallibrary.h"
#include <QMessageBox>
#include <login.h>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

#include "customer_login.h"  // to go back customer login page

customer_signup::customer_signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customer_signup)
{
    ui->setupUi(this);
    this->setWindowTitle("Customer SignUp Panel");
    setValidator();
}

customer_signup::~customer_signup()
{
    delete ui;
}

void customer_signup::on_createButton_clicked()
{
    //Get the content
    QString username = ui->username->text();
    QString name = ui->name->text();
    QString password = ui->password->text();

    //call the main Database
    digitalLibrary lib;
    auto db = lib.db;

    //Add name password and username to the db
    if((!username.isEmpty() & !name.isEmpty()) & !password.isEmpty())
    {
        auto search = QSqlQuery(db);
        QString searchAcc = {"SELECT * FROM accounts WHERE username='"
                             +username+"' AND name='"+name+"' AND password='"
                             +password+"'"};
        if(!search.exec(searchAcc))
            qDebug() << "Cannot select";
        int count = 0;
        while(search.next())
        {
            count++;
        }

        if(count>=1)
            QMessageBox::warning(this, "Failed", "Account Already Exist!");
        else
        {
            QString addEntry = {"INSERT INTO accounts (username, name, password)"
                                "VALUES ('%1', '%2', '%3')"};
            auto query = QSqlQuery(db);

            if(!query.exec(addEntry.arg(username).arg(name).arg(password)))
                qDebug() << "Cannot add entry";
            else
                QMessageBox::information(this, "SUCCESS", "You registered succesfully!");
        }
    }
    else
        QMessageBox::warning(this, "Empty", "Fields are empty!");
}

void customer_signup::on_backButton_clicked()
{
    this->hide();
    customer_login login;
    login.exec();
}
void customer_signup::setValidator()
{
    //regx for username
    QRegularExpression rxUsername("^[A-Za-z][A-Za-z0-9_]{7,29}$");
    QRegularExpressionValidator *valUsername = new QRegularExpressionValidator(rxUsername, this);
    ui->username->setValidator(valUsername);

    //regx for name
    QRegularExpression rxName("^[A-Za-z]{7,29}$");
    QRegularExpressionValidator *valName = new QRegularExpressionValidator(rxName, this);
    ui->name->setValidator(valName);
}
