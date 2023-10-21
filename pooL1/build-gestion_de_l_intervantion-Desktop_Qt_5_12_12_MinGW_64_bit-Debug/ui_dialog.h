/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_search;
    QPushButton *search_pushButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *interv_radioButton_2;
    QRadioButton *projet_radioButton;
    QRadioButton *tache_radioButton_3;
    QTableView *tableView;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 400);
        Dialog->setMinimumSize(QSize(200, 200));
        Dialog->setMaximumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_search = new QLineEdit(Dialog);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));

        horizontalLayout_3->addWidget(lineEdit_search);

        search_pushButton = new QPushButton(Dialog);
        search_pushButton->setObjectName(QString::fromUtf8("search_pushButton"));

        horizontalLayout_3->addWidget(search_pushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        interv_radioButton_2 = new QRadioButton(Dialog);
        interv_radioButton_2->setObjectName(QString::fromUtf8("interv_radioButton_2"));

        horizontalLayout->addWidget(interv_radioButton_2);

        projet_radioButton = new QRadioButton(Dialog);
        projet_radioButton->setObjectName(QString::fromUtf8("projet_radioButton"));

        horizontalLayout->addWidget(projet_radioButton);

        tache_radioButton_3 = new QRadioButton(Dialog);
        tache_radioButton_3->setObjectName(QString::fromUtf8("tache_radioButton_3"));

        horizontalLayout->addWidget(tache_radioButton_3);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Recherche", nullptr));
        label->setText(QApplication::translate("Dialog", "Nom \303\240 rechercher :", nullptr));
        search_pushButton->setText(QApplication::translate("Dialog", "Recherche", nullptr));
        interv_radioButton_2->setText(QApplication::translate("Dialog", "Intervenant", nullptr));
        projet_radioButton->setText(QApplication::translate("Dialog", "Projet", nullptr));
        tache_radioButton_3->setText(QApplication::translate("Dialog", "T\303\242che", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
