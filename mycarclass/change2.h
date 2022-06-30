#ifndef CHANGE2_H
#define CHANGE2_H

#include <QWidget>

namespace Ui {
class change2;
}

class change2 : public QWidget
{
    Q_OBJECT

public:
    explicit change2(QWidget *parent = nullptr);
    ~change2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_type_textEdited(const QString &arg1);

    void on_num_textEdited(const QString &arg1);

    void on_pushButton_3_clicked();

private:
    Ui::change2 *ui;
};

#endif // CHANGE2_H
