#ifndef BUYERINFO_H
#define BUYERINFO_H

#include <QDialog>

namespace Ui {
class BuyerInfo;
}

class BuyerInfo : public QDialog
{
    Q_OBJECT

public:
    explicit BuyerInfo(QWidget *parent = nullptr);
    ~BuyerInfo();

private slots:
    void on_customer_reg_to_view_clicked();

private:
    Ui::BuyerInfo *ui;
};

#endif // BUYERINFO_H
