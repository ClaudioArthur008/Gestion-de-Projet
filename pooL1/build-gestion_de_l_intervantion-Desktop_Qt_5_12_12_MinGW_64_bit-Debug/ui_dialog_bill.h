/********************************************************************************
** Form generated from reading UI file 'dialog_bill.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_BILL_H
#define UI_DIALOG_BILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_bill
{
public:
    QLabel *label_ref;
    QLineEdit *lineEdit_ref;
    QPushButton *okay_btn;

    void setupUi(QDialog *dialog_bill)
    {
        if (dialog_bill->objectName().isEmpty())
            dialog_bill->setObjectName(QString::fromUtf8("dialog_bill"));
        dialog_bill->resize(400, 102);
        label_ref = new QLabel(dialog_bill);
        label_ref->setObjectName(QString::fromUtf8("label_ref"));
        label_ref->setGeometry(QRect(14, 9, 291, 31));
        lineEdit_ref = new QLineEdit(dialog_bill);
        lineEdit_ref->setObjectName(QString::fromUtf8("lineEdit_ref"));
        lineEdit_ref->setGeometry(QRect(9, 40, 291, 22));
        okay_btn = new QPushButton(dialog_bill);
        okay_btn->setObjectName(QString::fromUtf8("okay_btn"));
        okay_btn->setGeometry(QRect(311, 40, 80, 22));

        retranslateUi(dialog_bill);

        QMetaObject::connectSlotsByName(dialog_bill);
    } // setupUi

    void retranslateUi(QDialog *dialog_bill)
    {
        dialog_bill->setWindowTitle(QApplication::translate("dialog_bill", "Dialog", nullptr));
        label_ref->setText(QApplication::translate("dialog_bill", "R\303\251f\303\251rence du projet :", nullptr));
        okay_btn->setText(QApplication::translate("dialog_bill", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_bill: public Ui_dialog_bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_BILL_H
