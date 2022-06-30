#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include"user.h"
#include"admin.h"
QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QWidget
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_uesrname_textEdited(const QString &arg1);

    void on_passwd_textEdited(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::login *ui;
};
#endif // LOGIN_H
