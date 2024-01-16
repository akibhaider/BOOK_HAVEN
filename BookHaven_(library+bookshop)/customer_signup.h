#ifndef CUSTOMER_SIGNUP_H
#define CUSTOMER_SIGNUP_H

#include <QDialog>
#include <QDir>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class customer_signup;
}

class customer_signup : public QDialog
{
    Q_OBJECT

public:
    explicit customer_signup(QWidget *parent = nullptr);
    ~customer_signup();
    void setValidator();

private slots:
    void on_createButton_clicked();

    void on_backButton_clicked();

private:
    Ui::customer_signup *ui;

};
#endif // SIGNUP_H
