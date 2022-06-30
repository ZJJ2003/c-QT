/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(600, 400);
        pushButton = new QPushButton(user);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 100, 100, 60));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(user);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 100, 100, 60));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(user);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 240, 100, 60));
        QFont font1;
        font1.setPointSize(12);
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(user);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 240, 100, 60));
        pushButton_4->setFont(font1);

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "\346\267\273\345\212\240\344\277\241\346\201\257", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", "\346\237\245\347\234\213\346\225\260\346\215\256\345\272\223", nullptr));
        pushButton_4->setText(QCoreApplication::translate("user", "\351\251\276\351\251\266\345\221\230\346\223\215\344\275\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
