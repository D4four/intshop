#ifndef CHOOSE_H
#define CHOOSE_H

#include <QDialog>
#include "create.h"
#include "view.h"
#include "edit.h"

namespace Ui {
class Choose;
}

class Choose : public QDialog
{
    Q_OBJECT

public:
    explicit Choose(QWidget *parent = nullptr);
    ~Choose();

signals:
    void back();

private slots:

    void on_back_clicked();

    void on_open_clicked();

    void on_edit_clicked();

    void on_create_clicked();

private:
    Ui::Choose *ui;
    Create *createWin;
    View *viewWin;
    Edit *editWin;
};

#endif // CHOOSE_H
