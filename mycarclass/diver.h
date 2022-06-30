#ifndef DIVER_H
#define DIVER_H

#include <QWidget>

namespace Ui {
class diver;
}

class diver : public QWidget
{
    Q_OBJECT

public:
    explicit diver(QWidget *parent = nullptr);
    ~diver();

private slots:
    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

    void on_radioButton_3_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_toggled(bool checked);

private:
    Ui::diver *ui;
};

#endif // DIVER_H
