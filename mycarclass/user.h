#ifndef USER_H
#define USER_H

#include <QWidget>
#include"add.h"
#include"search.h"
#include"database.h"
#include"diver.h"
namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::user *ui;
};

#endif // USER_H
