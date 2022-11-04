#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    winCh = new Choose();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(winCh, &Choose::back, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_auth_clicked()
{
    QString login = ui->logEdit->text();
    QString password = ui->passEdit->text();

    if (!(login == "admin" && password == "admin")) {
        QMessageBox::warning(this, "Авторизация", "Попробуйте снова...");
    } else {
        winCh->show();
        this->close();
    }
}

