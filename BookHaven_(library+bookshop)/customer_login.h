#ifndef CUSTOMER_LOGIN_H
#define CUSTOMER_LOGIN_H

#include <QDialog>

namespace Ui {
class customer_login;
}

class customer_login : public QDialog
{
    Q_OBJECT

public:
    explicit customer_login(QWidget *parent = nullptr);
    ~customer_login();

    void setValidator();

private slots:
    void on_loginButton_customer_clicked();

    void on_signUpButton_customer_clicked();

    void on_forgetPasswdBtn_customer_clicked();

    void on_button_customer_to_admin_clicked();
    void on_button_customer_to_admin_2_clicked();

private:
    Ui::customer_login *ui;

};

#endif // LOGIN_H
