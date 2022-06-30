/********************************************************************************
** Form generated from reading UI file 'outinput.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTINPUT_H
#define UI_OUTINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outinput
{
public:
    QLineEdit *lineEdit;
    QRadioButton *input;
    QRadioButton *output;
    QPushButton *infile;
    QPushButton *outfile;
    QLineEdit *innname;
    QLineEdit *outname;
    QPushButton *pushButton;

    void setupUi(QWidget *outinput)
    {
        if (outinput->objectName().isEmpty())
            outinput->setObjectName(QString::fromUtf8("outinput"));
        outinput->resize(600, 400);
        lineEdit = new QLineEdit(outinput);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 0, 241, 41));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        input = new QRadioButton(outinput);
        input->setObjectName(QString::fromUtf8("input"));
        input->setGeometry(QRect(60, 90, 73, 18));
        output = new QRadioButton(outinput);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(60, 160, 73, 18));
        infile = new QPushButton(outinput);
        infile->setObjectName(QString::fromUtf8("infile"));
        infile->setGeometry(QRect(180, 90, 151, 21));
        outfile = new QPushButton(outinput);
        outfile->setObjectName(QString::fromUtf8("outfile"));
        outfile->setGeometry(QRect(180, 160, 151, 21));
        innname = new QLineEdit(outinput);
        innname->setObjectName(QString::fromUtf8("innname"));
        innname->setGeometry(QRect(370, 90, 191, 20));
        innname->setReadOnly(true);
        outname = new QLineEdit(outinput);
        outname->setObjectName(QString::fromUtf8("outname"));
        outname->setGeometry(QRect(370, 160, 191, 20));
        outname->setReadOnly(true);
        pushButton = new QPushButton(outinput);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 230, 121, 71));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);

        retranslateUi(outinput);

        QMetaObject::connectSlotsByName(outinput);
    } // setupUi

    void retranslateUi(QWidget *outinput)
    {
        outinput->setWindowTitle(QCoreApplication::translate("outinput", "Form", nullptr));
        lineEdit->setText(QCoreApplication::translate("outinput", "\345\257\274\345\205\245\345\222\214\345\257\274\345\207\272", nullptr));
        input->setText(QCoreApplication::translate("outinput", "\345\257\274\345\205\245", nullptr));
        output->setText(QCoreApplication::translate("outinput", "\345\257\274\345\207\272", nullptr));
        infile->setText(QCoreApplication::translate("outinput", "\347\202\271\345\207\273\346\255\244\345\244\204\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        outfile->setText(QCoreApplication::translate("outinput", "\347\202\271\345\207\273\346\255\244\345\244\204\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        pushButton->setText(QCoreApplication::translate("outinput", "\347\241\256   \350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class outinput: public Ui_outinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTINPUT_H
