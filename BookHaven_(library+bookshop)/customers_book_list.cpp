#include "customers_book_list.h"
#include "ui_customers_book_list.h"
#include "digitallibrary.h"
#include "addbook.h"
#include <QDebug>
#include "customer_panel.h"
customers_book_list::customers_book_list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customers_book_list)
{
    ui->setupUi(this);
    this->setWindowTitle("My Books");

    //call the mail Database
    digitalLibrary lib;
    auto db = lib.db;

    auto query = QSqlQuery(db);
    QString select{"SELECT ISBN, name, author, genre, publisher, cover FROM books"};
    if(!query.exec(select))
        qDebug() << "Cannot select from books";
    QSqlQueryModel * model = new QSqlQueryModel;
    model->setQuery(query);
    ui->tableView->setModel(model);

    //Connect to table view
    connect(ui->tableView, &QTableView::doubleClicked, this, &customers_book_list::showInfo);
}

customers_book_list::~customers_book_list()
{
    delete ui;
}

void customers_book_list::on_value_textEdited(const QString &arg1)
{
    //get the content of the line edit
    QString value = ui->value->text() + "%";

    //call the mail Database
    digitalLibrary lib;
    auto db = lib.db;

    if(!value.isEmpty())
    {
        //define the query on the db and the model
        auto query = QSqlQuery(db);
        QString select{"SELECT * WHERE ID LIKE '"+value+"'"
                                                                       "OR ISBN LIKE '"+value+"' OR name LIKE '"+value+"' OR author LIKE '"+value+"'"
                                                                                             "OR genre LIKE '"+value+"' OR quantity LIKE '"+value+"'"
                                                                  "OR publisher LIKE '"+value+"' OR price LIKE '"+value+"' OR date LIKE '"+value+"'"};

        //execute the query
        if(!query.exec(select))
            qDebug() << "Cannot select from customer_books";
        else
        {
            //define the model
            QSqlQueryModel * model = new QSqlQueryModel;
            model->setQuery(query);
            ui->tableView->setModel(model);
        }
    }
    else
    {
        //define the query on the db and the model
        auto query = QSqlQuery(db);
        QString select{"SELECT * FROM customer_books"};

        //execute the query
        if(!query.exec(select))
            qDebug() << "Cannot select from customer_books";

        //define the model
        QSqlQueryModel * model = new QSqlQueryModel;
        model->setQuery(query);
        ui->tableView->setModel(model);
    }
}

void customers_book_list::showInfo()
{
    //get the clicked item
    auto row = ui->tableView->currentIndex().row();

    //show information in the left side
    QString _cover = ui->tableView->model()->data(ui->tableView->model()->index(row,5)).toString();
     QString ISBN = ui->tableView->model()->data(ui->tableView->model()->index(row, 1)).toString();
     QString name = ui->tableView->model()->data(ui->tableView->model()->index(row,2)).toString();
     QString author = ui->tableView->model()->data(ui->tableView->model()->index(row,3)).toString();
     QString genre = ui->tableView->model()->data(ui->tableView->model()->index(row,4)).toString();
     // QString quantity = ui->tableView->model()->data(ui->tableView->model()->index(row,5)).toString();
     // QString publisher = ui->tableView->model()->data(ui->tableView->model()->index(row,6)).toString();
     // QString price = ui->tableView->model()->data(ui->tableView->model()->index(row,7)).toString();
     // QString date = ui->tableView->model()->data(ui->tableView->model()->index(row,8)).toString();
     // QString desc = ui->tableView->model()->data(ui->tableView->model()->index(row,9)).toString();

    ui->ISBN->setText(ISBN);
    ui->name->setText(name);
    ui->author->setText(author);
    ui->genre->setText(genre);
    ui->coverLabel->setPixmap(_cover);
   // ui->publisher->setText(publisher);
   // ui->price->setText(price);
   //  ui->quantity->setText(quantity);
   // ui->date->setText(date);
   // ui->desc->setText(desc);

}

void customers_book_list::on_buy_to_customer_panel_clicked()
{
    this->hide();
    customer_panel cp;
    cp.exec();
}

