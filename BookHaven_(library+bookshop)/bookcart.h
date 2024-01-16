#ifndef BOOKCART_H
#define BOOKCART_H

#include <QDialog>

namespace Ui {
class bookcart;
}

class bookcart : public QDialog
{
    Q_OBJECT

public:
    explicit bookcart(QWidget *parent = nullptr);
    ~bookcart();
    void showInfo();

private slots:

    void on_book_cart_view_doubleClicked(const QModelIndex &index);

    void on_buy_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::bookcart *ui;
};

#endif // BOOKCART_H
