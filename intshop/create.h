#ifndef CREATE_H
#define CREATE_H

#include <QDialog>
#include "book.h"

namespace Ui {
class Create;
}

class Create : public QDialog
{
    Q_OBJECT

signals:
    void back();

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

private slots:

    void on_create_clicked();

    void on_back_clicked();

private:
    Ui::Create *ui;
    Book *bookWin;
};

#endif // CREATE_H
