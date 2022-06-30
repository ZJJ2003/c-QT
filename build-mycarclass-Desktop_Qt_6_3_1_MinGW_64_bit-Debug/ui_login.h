/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *lineEdit;
    QLineEdit *uesrname;
    QLineEdit *passwd;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(600, 400);
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 10, 191, 81));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        uesrname = new QLineEdit(login);
        uesrname->setObjectName(QString::fromUtf8("uesrname"));
        uesrname->setGeometry(QRect(280, 140, 113, 20));
        passwd = new QLineEdit(login);
        passwd->setObjectName(QString::fromUtf8("passwd"));
        passwd->setGeometry(QRect(280, 180, 113, 20));
        passwd->setLayoutDirection(Qt::LeftToRight);
        passwd->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 280, 111, 61));
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        lineEdit_4 = new QLineEdit(login);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(210, 140, 61, 20));
        lineEdit_4->setReadOnly(true);
        lineEdit_5 = new QLineEdit(login);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(210, 180, 61, 20));
        lineEdit_5->setReadOnly(true);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        lineEdit->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\347\231\273  \345\275\225", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
