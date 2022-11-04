#include "create.h"
#include "ui_create.h"

Create::Create(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);
    bookWin = new Book();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(bookWin, &Book::back, this, &Create::show);
}

Create::~Create()
{
    delete ui;
}


void Create::on_create_clicked()
{
    int item = ui->choose->currentIndex();

    switch(item) {
    case 0:
        bookWin->show();
        this->close();
    }
}


void Create::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}

