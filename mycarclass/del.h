#ifndef DEL_H
#define DEL_H

#include <QWidget>

namespace Ui {
class del;
}

class del : public QWidget
{
    Q_OBJECT

public:
    explicit del(QWidget *parent = nullptr);
    ~del();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::del *ui;
};

#endif // DEL_H
