/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *search;
    QPushButton *add;
    QPushButton *change;
    QPushButton *delete_2;
    QPushButton *diver;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(600, 400);
        search = new QPushButton(admin);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(150, 70, 100, 60));
        QFont font;
        font.setPointSize(16);
        search->setFont(font);
        add = new QPushButton(admin);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(350, 70, 100, 60));
        add->setFont(font);
        change = new QPushButton(admin);
        change->setObjectName(QString::fromUtf8("change"));
        change->setGeometry(QRect(30, 180, 100, 60));
        change->setFont(font);
        delete_2 = new QPushButton(admin);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(250, 180, 100, 60));
        delete_2->setFont(font);
        diver = new QPushButton(admin);
        diver->setObjectName(QString::fromUtf8("diver"));
        diver->setGeometry(QRect(470, 180, 100, 60));
        QFont font1;
        font1.setPointSize(12);
        diver->setFont(font1);
        pushButton = new QPushButton(admin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 290, 100, 60));
        pushButton->setFont(font1);
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 290, 100, 60));
        pushButton_2->setFont(font1);
        lineEdit = new QLineEdit(admin);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(390, 0, 113, 20));
        pushButton_3 = new QPushButton(admin);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 0, 80, 21));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        search->setText(QCoreApplication::translate("admin", "\346\237\245\350\257\242", nullptr));
        add->setText(QCoreApplication::translate("admin", "\346\267\273\345\212\240\344\277\241\346\201\257", nullptr));
        change->setText(QCoreApplication::translate("admin", "\347\274\226\350\276\221\344\277\241\346\201\257", nullptr));
        delete_2->setText(QCoreApplication::translate("admin", "\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
        diver->setText(QCoreApplication::translate("admin", "\351\251\276\351\251\266\345\221\230\346\223\215\344\275\234", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "\346\237\245\347\234\213\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "\345\257\274\345\205\245\345\222\214\345\257\274\345\207\272", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin", "\350\256\276\347\275\256\346\262\271\344\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
