/********************************************************************************
** Form generated from reading UI file 'del.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_H
#define UI_DEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_del
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *del)
    {
        if (del->objectName().isEmpty())
            del->setObjectName(QString::fromUtf8("del"));
        del->resize(600, 400);
        pushButton = new QPushButton(del);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 147, 80, 21));
        lineEdit = new QLineEdit(del);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 0, 241, 51));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(del);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 150, 171, 20));
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(del);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(240, 150, 113, 20));
        pushButton_2 = new QPushButton(del);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 230, 131, 71));
        QFont font1;
        font1.setPointSize(16);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(del);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(490, 377, 80, 21));

        retranslateUi(del);

        QMetaObject::connectSlotsByName(del);
    } // setupUi

    void retranslateUi(QWidget *del)
    {
        del->setWindowTitle(QCoreApplication::translate("del", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("del", "\347\241\256\350\256\244\347\274\226\345\217\267", nullptr));
        lineEdit->setText(QCoreApplication::translate("del", "\345\210\240\351\231\244\344\277\241\346\201\257\347\225\214\351\235\242", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("del", "\350\276\223\345\205\245\346\202\250\350\246\201\345\210\240\351\231\244\347\232\204\350\275\246\350\276\206\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("del", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("del", "\351\200\200   \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class del: public Ui_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
