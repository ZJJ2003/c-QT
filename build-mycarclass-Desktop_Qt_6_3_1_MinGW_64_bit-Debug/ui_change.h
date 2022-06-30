/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change
{
public:
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QString::fromUtf8("change"));
        change->resize(600, 400);
        lineEdit = new QLineEdit(change);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 0, 241, 71));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        listWidget = new QListWidget(change);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 171, 541, 171));
        pushButton = new QPushButton(change);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 90, 91, 51));
        lineEdit_2 = new QLineEdit(change);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 100, 241, 20));
        lineEdit_3 = new QLineEdit(change);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 100, 113, 20));
        lineEdit_3->setReadOnly(true);
        pushButton_2 = new QPushButton(change);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 380, 80, 18));
        pushButton_3 = new QPushButton(change);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 380, 80, 18));

        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QWidget *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("change", "\347\274\226\350\276\221\344\277\241\346\201\257\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("change", "\346\237\245    \350\257\242", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("change", "\345\217\252\350\203\275\346\214\211\347\274\226\345\217\267\346\237\245\350\257\242\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("change", "\347\202\271\345\207\273\347\274\226\350\276\221", nullptr));
        pushButton_3->setText(QCoreApplication::translate("change", "\351\200\200   \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
