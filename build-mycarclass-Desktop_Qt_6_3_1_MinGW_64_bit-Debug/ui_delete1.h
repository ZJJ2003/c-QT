/********************************************************************************
** Form generated from reading UI file 'delete1.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE1_H
#define UI_DELETE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete1
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *right;
    QPushButton *cancle;

    void setupUi(QWidget *delete1)
    {
        if (delete1->objectName().isEmpty())
            delete1->setObjectName(QString::fromUtf8("delete1"));
        delete1->resize(600, 400);
        lineEdit = new QLineEdit(delete1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(170, 0, 251, 41));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(delete1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 140, 161, 20));
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(delete1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 140, 211, 20));
        pushButton = new QPushButton(delete1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 140, 91, 21));
        right = new QPushButton(delete1);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(230, 230, 141, 81));
        right->setFont(font);
        cancle = new QPushButton(delete1);
        cancle->setObjectName(QString::fromUtf8("cancle"));
        cancle->setGeometry(QRect(490, 380, 80, 18));

        retranslateUi(delete1);

        QMetaObject::connectSlotsByName(delete1);
    } // setupUi

    void retranslateUi(QWidget *delete1)
    {
        delete1->setWindowTitle(QCoreApplication::translate("delete1", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("delete1", "\346\225\260\346\215\256\345\210\240\351\231\244\347\225\214\351\235\242", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("delete1", "\350\276\223\345\205\245\346\202\250\346\203\263\350\246\201\345\210\240\351\231\244\347\232\204\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("delete1", "\347\241\256\350\256\244\347\274\226\345\217\267", nullptr));
        right->setText(QCoreApplication::translate("delete1", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        cancle->setText(QCoreApplication::translate("delete1", "\345\217\226   \346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete1: public Ui_delete1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE1_H
