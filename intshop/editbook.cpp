#include "editbook.h"
#include "ui_editbook.h"
#include "includes.h"

EditBook::EditBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditBook)
{
    ui->setupUi(this);

}

EditBook::~EditBook()
{
    delete ui;
}

void EditBook::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}


void EditBook::on_save_clicked()
{
    string name = ui->name->text().toStdString();
    string author = ui->author->text().toStdString();
    int yearPubl = ui->yearB->text().toInt();
    int pages = ui->pages->text().toInt();
    int price = ui->price->text().toInt();
    string annotation = ui->annot->text().toStdString();
    string genre = ui->genre->text().toStdString();

}

