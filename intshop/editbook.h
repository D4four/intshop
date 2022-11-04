#ifndef EDITBOOK_H
#define EDITBOOK_H

#include <QDialog>

namespace Ui {
class EditBook;
}

class EditBook : public QDialog
{
    Q_OBJECT

public:
    explicit EditBook(QWidget *parent = nullptr);
    ~EditBook();
signals:
    void back();

private slots:
    void on_back_clicked();

    void on_save_clicked();

private:
    Ui::EditBook *ui;
};

#endif // EDITBOOK_H
