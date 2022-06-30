#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class add;
}

class add : public QWidget
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);
    ~add();

private slots:
    void on_lineEdit_3_textEdited(const QString &arg1);

    void on_lineEdit_7_textEdited(const QString &arg1);

    void on_lineEdit_8_textEdited(const QString &arg1);

    void on_lineEdit_9_textEdited(const QString &arg1);

    void on_lineEdit_11_textEdited(const QString &arg1);

    void on_lineEdit_13_textEdited(const QString &arg1);

    void on_lineEdit_15_textEdited(const QString &arg1);

    void on_lineEdit_17_textEdited(const QString &arg1);


    void on_lineEdit_19_textEdited(const QString &arg1);

    void on_lineEdit_21_textEdited(const QString &arg1);

    void on_lineEdit_23_textEdited(const QString &arg1);

    void on_right_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
