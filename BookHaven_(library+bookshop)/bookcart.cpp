#include "bookcart.h"
#include "ui_bookcart.h"

#include <manageauthors.h>
#include "customer_panel.h""
#include <QSqlQueryModel>
#include <QDebug>
#include "authorslist.h"
#include "QMessageBox"
QString isb,_name,_author,_genre,_price,_publisher,_cover;
int quan=0;

bookcart::bookcart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bookcart)
{
    ui->setupUi(this);
    this->setWindowTitle("Book Cart");

    customer_panel lib;
    auto db = lib.db;

    QSqlQueryModel *model = new QSqlQueryModel;

    auto select = QSqlQuery(db);

    QString selectAll = {"SELECT * FROM books"};
    if(!select.exec(selectAll))
        qDebug() << "Cannot select from books";

    model->setQuery(select);

    ui->book_cart_view->setModel(model);

    //make connection

 connect(ui->book_cart_view, &QTableView::doubleClicked, this, &bookcart::showInfo);


}

bookcart::~bookcart()
{
    delete ui;
}




void bookcart::on_book_cart_view_doubleClicked(const QModelIndex &index)
{

}


void bookcart::showInfo()
{
    //get the clicked item
    auto row = ui->book_cart_view->currentIndex().row();

    //show information in the left side
    QString ISBN = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row, 1)).toString();
    QString name = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,2)).toString();
    QString author = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,3)).toString();
    QString genre = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,4)).toString();
    QString quantity = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,5)).toString();
    QString publisher = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,6)).toString();
    QString price = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,7)).toString();
    QString date = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,8)).toString();
    QString desc = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,9)).toString();
    QString cover = ui->book_cart_view->model()->data(ui->book_cart_view->model()->index(row,10)).toString();
    isb=ISBN;
    quan=quantity.toInt();
    quan--;

    _name=name;
    _author=author;
    _genre =genre;
    _publisher =publisher;
    _price =price;
    _cover = cover;

    ui->coverLabel->setPixmap(cover);
    ui->ISBN->setText(ISBN);
    ui->name->setText(name);
    ui->author->setText(author);
    ui->genre->setText(genre);
    ui->publisher->setText(publisher);
    ui->price->setText(price);
    ui->quantity->setText(quantity);
    ui->date->setText(date);
    ui->desc->setText(desc);
}


void bookcart::on_buy_button_clicked()
{
    QString searchISBN = {"SELECT * FROM books WHERE ISBN = '%1'"};
    customer_panel lib;
    auto db=lib.db;
    auto query= QSqlQuery(db);

    if(!query.exec(searchISBN.arg(isb)))
        qDebug() << "Cannot select from books";

   QString temp_quan = QString::number(quan);

    QString dec_cmnd ={"UPDATE books SET quantity = '"+temp_quan+"' WHERE ISBN = '"+isb+"' "};

   if(!query.exec(dec_cmnd))
       qDebug() <<dec_cmnd;

   QString insert{"INSERT INTO customer_books (ISBN, name, author, genre, quantity, publisher, price, date, description, cover)"
                  "VALUES ('%1', '%2', '%3','%4','%5','%6','%7','%8','%9', '%10')"};


   QString name,author,genre,quantity,publisher,price,date,description,coverPath;

       name = query.value(2).toString();
       author = query.value(3).toString();
       genre = query.value(4).toString();
       quantity = query.value(5).toString();
       publisher = query.value(6).toString();
       price = query.value(7).toString();
       date = query.value(8).toString();
       description = query.value(9).toString();
       coverPath = query.value(10).toString();

   //execute the query
   if(!query.exec(insert.arg(isb).arg(_name).arg(_author).arg(_genre).arg(quantity.toInt()).arg(_publisher).arg(price.toDouble()).arg(date).arg(description).arg(coverPath)))
   {
       QMessageBox::critical(this,"Failed","Cannot fill books Table");
   }
   else
   {
         qDebug() <<insert.arg(isb).arg(_name).arg(_author).arg(_genre).arg(quantity.toInt()).arg(_publisher).arg(price.toDouble()).arg(date).arg(description).arg(coverPath);
       QMessageBox::information(this,"Info","You Purchased This Book Succesfully");
   }
   this->hide();
   customer_panel cp;
   cp.exec();
}


void bookcart::on_pushButton_clicked()
{
    this->hide();
    customer_panel cp;
    cp.exec();
}

