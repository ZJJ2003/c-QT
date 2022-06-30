#ifndef OUTINPUT_H
#define OUTINPUT_H

#include <QWidget>

namespace Ui {
class outinput;
}

class outinput : public QWidget
{
    Q_OBJECT

public:
    explicit outinput(QWidget *parent = nullptr);
    ~outinput();

private slots:
    void on_input_toggled(bool checked);

    void on_output_toggled(bool checked);

    void on_infile_clicked();

    void on_outfile_clicked();

    void on_pushButton_clicked();

private:
    Ui::outinput *ui;
};

#endif // OUTINPUT_H
