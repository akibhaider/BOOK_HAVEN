#ifndef ABOUTUS_CUST_LOGIN_H
#define ABOUTUS_CUST_LOGIN_H

#include <QDialog>

namespace Ui {
class AboutUs_cust_login;
}

class AboutUs_cust_login : public QDialog
{
    Q_OBJECT

public:
    explicit AboutUs_cust_login(QWidget *parent = nullptr);
    ~AboutUs_cust_login();

private slots:
    void on_backButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::AboutUs_cust_login *ui;
};

#endif // ABOUTUS_CUST_LOGIN_H
