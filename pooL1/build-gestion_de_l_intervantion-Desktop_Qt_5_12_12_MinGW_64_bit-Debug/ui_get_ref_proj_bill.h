/********************************************************************************
** Form generated from reading UI file 'get_ref_proj_bill.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_REF_PROJ_BILL_H
#define UI_GET_REF_PROJ_BILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_get_Ref_Proj_Bill
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_get_Ref_Proj_to_facturer;
    QPushButton *pushButton_envoyez_Ref_Proj_to_facturer;

    void setupUi(QDialog *get_Ref_Proj_Bill)
    {
        if (get_Ref_Proj_Bill->objectName().isEmpty())
            get_Ref_Proj_Bill->setObjectName(QString::fromUtf8("get_Ref_Proj_Bill"));
        get_Ref_Proj_Bill->resize(400, 150);
        get_Ref_Proj_Bill->setMinimumSize(QSize(400, 150));
        get_Ref_Proj_Bill->setMaximumSize(QSize(400, 180));
        verticalLayout = new QVBoxLayout(get_Ref_Proj_Bill);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(get_Ref_Proj_Bill);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(get_Ref_Proj_Bill);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit_get_Ref_Proj_to_facturer = new QLineEdit(get_Ref_Proj_Bill);
        lineEdit_get_Ref_Proj_to_facturer->setObjectName(QString::fromUtf8("lineEdit_get_Ref_Proj_to_facturer"));

        horizontalLayout->addWidget(lineEdit_get_Ref_Proj_to_facturer);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_envoyez_Ref_Proj_to_facturer = new QPushButton(get_Ref_Proj_Bill);
        pushButton_envoyez_Ref_Proj_to_facturer->setObjectName(QString::fromUtf8("pushButton_envoyez_Ref_Proj_to_facturer"));
        pushButton_envoyez_Ref_Proj_to_facturer->setMinimumSize(QSize(80, 30));
        pushButton_envoyez_Ref_Proj_to_facturer->setMaximumSize(QSize(80, 30));
        pushButton_envoyez_Ref_Proj_to_facturer->setLayoutDirection(Qt::RightToLeft);
        pushButton_envoyez_Ref_Proj_to_facturer->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"width:80px;\n"
"height:30px;"));

        verticalLayout->addWidget(pushButton_envoyez_Ref_Proj_to_facturer);


        retranslateUi(get_Ref_Proj_Bill);

        QMetaObject::connectSlotsByName(get_Ref_Proj_Bill);
    } // setupUi

    void retranslateUi(QDialog *get_Ref_Proj_Bill)
    {
        get_Ref_Proj_Bill->setWindowTitle(QApplication::translate("get_Ref_Proj_Bill", "Dialog", nullptr));
        label->setText(QApplication::translate("get_Ref_Proj_Bill", "Veuillez saisir le r\303\251f\303\251rence du projet \303\240 facturer :", nullptr));
        label_2->setText(QApplication::translate("get_Ref_Proj_Bill", "R\303\251f\303\251rence du projet :", nullptr));
        pushButton_envoyez_Ref_Proj_to_facturer->setText(QApplication::translate("get_Ref_Proj_Bill", "Envoyez", nullptr));
    } // retranslateUi

};

namespace Ui {
    class get_Ref_Proj_Bill: public Ui_get_Ref_Proj_Bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_REF_PROJ_BILL_H
