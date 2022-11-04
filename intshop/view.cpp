#include "view.h"
#include "ui_view.h"
#include "includes.h"

View::View(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);

}

View::~View()
{
    delete ui;
}

void View::on_back_clicked()
{
    this->close();      // Закрываем окно
    emit back();
}



void View::on_categories_activated(int index)
{
//    int item = ui->categories->currentIndex();

    switch(index) {

        case 1: {

            ui->item->clear();
            string line;
            ifstream in("Book.txt", ios::in); // окрываем файл для чтения
            if (in.is_open())
            {
                while (getline(in, line))
                {
                    ui->item->addItem(QString::fromStdString(line));
                }

            }

            in.close();
            break;
        }
        case 2: {
            ui->item->clear();
            break;
        }
    }
}




void View::on_empl_clicked()
{
    string name = ui->item->currentText().toStdString();
//    QString test;
//    ui->label->setText(test.setNum(name.size()));
    ui->label->setText("\n");
    QString line;
    string qline;
    ifstream in(((name + ".txt").c_str())); // окрываем файл для чтения
    if (in.is_open())
    {

        while (getline(in, qline))
        {
          line = QString::fromStdString(qline) + "\n";
          ui->label->setText(ui->label->text() + line);
        }

    }

    in.close();

}

