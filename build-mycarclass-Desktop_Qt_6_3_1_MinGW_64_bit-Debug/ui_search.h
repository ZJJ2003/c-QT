/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QListWidget *listWidget;
    QPushButton *pushButton_2;

    void setupUi(QWidget *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(600, 400);
        pushButton = new QPushButton(search);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 120, 71, 41));
        lineEdit = new QLineEdit(search);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 0, 211, 71));
        QFont font;
        font.setPointSize(22);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(search);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 130, 211, 20));
        radioButton = new QRadioButton(search);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(90, 90, 131, 18));
        radioButton_2 = new QRadioButton(search);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 90, 131, 18));
        radioButton_3 = new QRadioButton(search);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(420, 90, 131, 18));
        listWidget = new QListWidget(search);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 170, 581, 201));
        pushButton_2 = new QPushButton(search);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 377, 80, 21));

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QWidget *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("search", "\346\237\245  \350\257\242", nullptr));
        lineEdit->setText(QCoreApplication::translate("search", "\346\237\245\350\257\242\347\225\214\351\235\242", nullptr));
        radioButton->setText(QCoreApplication::translate("search", "\346\214\211\347\274\226\345\217\267\346\237\245\350\257\242", nullptr));
        radioButton_2->setText(QCoreApplication::translate("search", "\346\214\211\345\210\266\351\200\240\345\205\254\345\217\270\346\237\245\350\257\242", nullptr));
        radioButton_3->setText(QCoreApplication::translate("search", "\346\214\211\347\261\273\345\236\213\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("search", "\351\200\200  \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
