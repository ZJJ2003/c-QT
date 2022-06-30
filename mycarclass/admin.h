#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include"add.h"
#include"search.h"
#include"del.h"
#include"change2.h"
#include"database.h"
#include"outinput.h"
#include"diver.h"
namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_search_clicked();

    void on_add_clicked();

    void on_change_clicked();

    void on_delete_2_clicked();

    void on_diver_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
