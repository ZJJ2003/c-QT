/********************************************************************************
** Form generated from reading UI file 'diver.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIVER_H
#define UI_DIVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_diver
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *numadd;
    QLineEdit *lineEdit_4;
    QLineEdit *nameadd;
    QLineEdit *lineEdit_6;
    QLineEdit *numdel;
    QLineEdit *lineEdit_8;
    QLineEdit *namedel;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_9;
    QLineEdit *mony;

    void setupUi(QWidget *diver)
    {
        if (diver->objectName().isEmpty())
            diver->setObjectName(QString::fromUtf8("diver"));
        diver->resize(600, 400);
        pushButton = new QPushButton(diver);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 377, 80, 21));
        lineEdit = new QLineEdit(diver);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 0, 231, 91));
        QFont font;
        font.setPointSize(22);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        radioButton = new QRadioButton(diver);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 120, 101, 18));
        radioButton_2 = new QRadioButton(diver);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 190, 101, 18));
        pushButton_2 = new QPushButton(diver);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 377, 80, 21));
        lineEdit_2 = new QLineEdit(diver);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 110, 113, 20));
        lineEdit_2->setReadOnly(true);
        numadd = new QLineEdit(diver);
        numadd->setObjectName(QString::fromUtf8("numadd"));
        numadd->setGeometry(QRect(140, 130, 113, 20));
        lineEdit_4 = new QLineEdit(diver);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(320, 110, 113, 20));
        lineEdit_4->setReadOnly(true);
        nameadd = new QLineEdit(diver);
        nameadd->setObjectName(QString::fromUtf8("nameadd"));
        nameadd->setGeometry(QRect(320, 130, 113, 20));
        lineEdit_6 = new QLineEdit(diver);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 180, 113, 20));
        lineEdit_6->setReadOnly(true);
        numdel = new QLineEdit(diver);
        numdel->setObjectName(QString::fromUtf8("numdel"));
        numdel->setGeometry(QRect(140, 200, 113, 20));
        lineEdit_8 = new QLineEdit(diver);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(320, 180, 113, 20));
        lineEdit_8->setReadOnly(true);
        namedel = new QLineEdit(diver);
        namedel->setObjectName(QString::fromUtf8("namedel"));
        namedel->setGeometry(QRect(320, 200, 113, 20));
        radioButton_3 = new QRadioButton(diver);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 260, 73, 18));
        lineEdit_3 = new QLineEdit(diver);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 250, 113, 20));
        lineEdit_3->setReadOnly(true);
        lineEdit_5 = new QLineEdit(diver);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 270, 113, 20));
        lineEdit_7 = new QLineEdit(diver);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(320, 250, 113, 20));
        lineEdit_7->setReadOnly(true);
        lineEdit_9 = new QLineEdit(diver);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(320, 270, 113, 20));
        mony = new QLineEdit(diver);
        mony->setObjectName(QString::fromUtf8("mony"));
        mony->setGeometry(QRect(172, 300, 211, 20));
        mony->setAlignment(Qt::AlignCenter);
        mony->setReadOnly(true);

        retranslateUi(diver);

        QMetaObject::connectSlotsByName(diver);
    } // setupUi

    void retranslateUi(QWidget *diver)
    {
        diver->setWindowTitle(QCoreApplication::translate("diver", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("diver", "\351\200\200  \345\207\272", nullptr));
        lineEdit->setText(QCoreApplication::translate("diver", "\351\251\276\351\251\266\345\221\230\346\223\215\344\275\234\347\225\214\351\235\242", nullptr));
        radioButton->setText(QCoreApplication::translate("diver", "\346\267\273\345\212\240\351\251\276\351\251\266\345\221\230", nullptr));
        radioButton_2->setText(QCoreApplication::translate("diver", "\345\210\240\351\231\244\351\251\276\351\251\266\345\221\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("diver", "\347\241\256   \350\256\244", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("diver", "\350\257\267\350\276\223\345\205\245\350\275\246\350\276\206\347\274\226\345\217\267", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("diver", "\351\251\276\351\251\266\345\221\230\345\247\223\345\220\215", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("diver", "\350\257\267\350\276\223\345\205\245\350\275\246\350\276\206\347\274\226\345\217\267", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("diver", "\351\251\276\351\251\266\345\221\230\345\247\223\345\220\215", nullptr));
        radioButton_3->setText(QCoreApplication::translate("diver", "\346\237\245\347\234\213\345\267\245\350\265\204", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("diver", "\350\257\267\350\276\223\345\205\245\350\275\246\350\276\206\347\274\226\345\217\267", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("diver", "\351\251\276\351\251\266\345\221\230\345\247\223\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class diver: public Ui_diver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIVER_H
