#ifndef LOGIN_CUSTOMER_H
#define LOGIN_CUSTOMER_H

#include <QDialog>

namespace Ui {
class login_customer;
}

class login_customer : public QDialog
{
    Q_OBJECT

public:
    explicit login_customer(QWidget *parent = nullptr);
    ~login_customer();

private:
    Ui::login_customer *ui;
};

#endif // LOGIN_CUSTOMER_H
