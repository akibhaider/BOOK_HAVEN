#ifndef CUSTOMERS_BOOK_LIST_H
#define CUSTOMERS_BOOK_LIST_H

#include <QDialog>

namespace Ui {
class customers_book_list;
}

class customers_book_list : public QDialog
{
    Q_OBJECT

public:
    explicit customers_book_list(QWidget *parent = nullptr);
    ~customers_book_list();

private slots:
    void on_value_textEdited(const QString &arg1);
    void showInfo();

    void on_buy_to_customer_panel_clicked();

private:
    Ui::customers_book_list *ui;
};

#endif // customers_book_list
