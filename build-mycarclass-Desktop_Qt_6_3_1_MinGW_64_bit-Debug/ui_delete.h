/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete
{
public:

    void setupUi(QWidget *delete)
    {
        if (delete->objectName().isEmpty())
            delete->setObjectName(QString::fromUtf8("delete"));
        delete->resize(400, 300);

        retranslateUi(delete);

        QMetaObject::connectSlotsByName(delete);
    } // setupUi

    void retranslateUi(QWidget *delete)
    {
        delete->setWindowTitle(QCoreApplication::translate("delete", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete: public Ui_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
