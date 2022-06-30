/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_database
{
public:
    QLineEdit *lineEdit;
    QLineEdit *allnum;
    QLineEdit *carnum;
    QLineEdit *busnum;
    QLineEdit *trucknum;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *database)
    {
        if (database->objectName().isEmpty())
            database->setObjectName(QString::fromUtf8("database"));
        database->resize(600, 400);
        lineEdit = new QLineEdit(database);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 0, 231, 71));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        allnum = new QLineEdit(database);
        allnum->setObjectName(QString::fromUtf8("allnum"));
        allnum->setGeometry(QRect(20, 10, 113, 20));
        allnum->setReadOnly(true);
        carnum = new QLineEdit(database);
        carnum->setObjectName(QString::fromUtf8("carnum"));
        carnum->setGeometry(QRect(450, 0, 113, 20));
        carnum->setReadOnly(true);
        busnum = new QLineEdit(database);
        busnum->setObjectName(QString::fromUtf8("busnum"));
        busnum->setGeometry(QRect(450, 30, 113, 20));
        busnum->setReadOnly(true);
        trucknum = new QLineEdit(database);
        trucknum->setObjectName(QString::fromUtf8("trucknum"));
        trucknum->setGeometry(QRect(450, 60, 113, 20));
        trucknum->setReadOnly(true);
        listWidget = new QListWidget(database);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 90, 561, 271));
        pushButton = new QPushButton(database);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 377, 80, 21));
        pushButton_2 = new QPushButton(database);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 377, 80, 21));

        retranslateUi(database);

        QMetaObject::connectSlotsByName(database);
    } // setupUi

    void retranslateUi(QWidget *database)
    {
        database->setWindowTitle(QCoreApplication::translate("database", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("database", "\346\225\260\346\215\256\346\237\245\347\234\213\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("database", "\351\200\200   \345\207\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("database", "\347\202\271\345\207\273\346\237\245\347\234\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class database: public Ui_database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
