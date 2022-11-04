#include "edit.h"
#include "ui_edit.h"
#include "includes.h"

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);
    editBookWin = new EditBook();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(editBookWin, &EditBook::back, this, &Edit::show);
}

Edit::~Edit()
{
    delete ui;
}

void Edit::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}


void Edit::on_editEl_activated(int index)
{
    switch(index) {

        case 1: {

            ui->editIt->clear();
            string line;
            ifstream in("Book.txt", ios::in); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    ui->editIt->addItem(QString::fromStdString(line));
                }

            }

            in.close();
            break;
        }
        case 2: {
            ui->editIt->clear();
            break;
        }
    }
}


void Edit::on_editB_clicked()
{
    editBookWin->show();
    this->close();
}

