/********************************************************************************
** Form generated from reading UI file 'delete_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_DIALOG_H
#define UI_DELETE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delete_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_ref;
    QLabel *label_2;
    QPushButton *Boutton_Envoyez;
    QWidget *page_2;

    void setupUi(QDialog *Delete_Dialog)
    {
        if (Delete_Dialog->objectName().isEmpty())
            Delete_Dialog->setObjectName(QString::fromUtf8("Delete_Dialog"));
        Delete_Dialog->resize(350, 180);
        Delete_Dialog->setMaximumSize(QSize(350, 180));
        verticalLayout = new QVBoxLayout(Delete_Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(Delete_Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLayoutDirection(Qt::RightToLeft);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_ref = new QLineEdit(page);
        lineEdit_ref->setObjectName(QString::fromUtf8("lineEdit_ref"));

        horizontalLayout->addWidget(lineEdit_ref);

        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        Boutton_Envoyez = new QPushButton(page);
        Boutton_Envoyez->setObjectName(QString::fromUtf8("Boutton_Envoyez"));
        Boutton_Envoyez->setMinimumSize(QSize(80, 30));
        Boutton_Envoyez->setMaximumSize(QSize(80, 30));
        Boutton_Envoyez->setFont(font1);
        Boutton_Envoyez->setLayoutDirection(Qt::LeftToRight);
        Boutton_Envoyez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
""));

        verticalLayout_3->addWidget(Boutton_Envoyez);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(Delete_Dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Delete_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Delete_Dialog)
    {
        Delete_Dialog->setWindowTitle(QApplication::translate("Delete_Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Delete_Dialog", "Veuillez entrer la refeence du projet que vous voulez \n"
" supprimer:", nullptr));
        label_2->setText(QApplication::translate("Delete_Dialog", " Reference du Projet :", nullptr));
        Boutton_Envoyez->setText(QApplication::translate("Delete_Dialog", "Envoyez", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete_Dialog: public Ui_Delete_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_DIALOG_H
