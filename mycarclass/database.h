#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>

namespace Ui {
class database;
}

class database : public QWidget
{
    Q_OBJECT

public:
    explicit database(QWidget *parent = nullptr);
    ~database();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::database *ui;
};

#endif // DATABASE_H
