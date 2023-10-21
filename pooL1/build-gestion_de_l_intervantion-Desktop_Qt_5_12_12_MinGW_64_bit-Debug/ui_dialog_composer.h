/********************************************************************************
** Form generated from reading UI file 'dialog_composer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_COMPOSER_H
#define UI_DIALOG_COMPOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialog_composer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_pro;
    QLabel *label_4;
    QComboBox *comboBox_2_ta;
    QTableView *tableView_projet;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ajoutercompo;
    QPushButton *pushButton_update;
    QPushButton *pushButton_2_supp;

    void setupUi(QDialog *dialog_composer)
    {
        if (dialog_composer->objectName().isEmpty())
            dialog_composer->setObjectName(QString::fromUtf8("dialog_composer"));
        dialog_composer->resize(500, 500);
        dialog_composer->setMaximumSize(QSize(500, 500));
        verticalLayout = new QVBoxLayout(dialog_composer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dialog_composer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: whitesmoke;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(dialog_composer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox_pro = new QComboBox(dialog_composer);
        comboBox_pro->setObjectName(QString::fromUtf8("comboBox_pro"));

        horizontalLayout->addWidget(comboBox_pro);

        label_4 = new QLabel(dialog_composer);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_2_ta = new QComboBox(dialog_composer);
        comboBox_2_ta->setObjectName(QString::fromUtf8("comboBox_2_ta"));

        horizontalLayout->addWidget(comboBox_2_ta);


        verticalLayout->addLayout(horizontalLayout);

        tableView_projet = new QTableView(dialog_composer);
        tableView_projet->setObjectName(QString::fromUtf8("tableView_projet"));

        verticalLayout->addWidget(tableView_projet);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_ajoutercompo = new QPushButton(dialog_composer);
        pushButton_ajoutercompo->setObjectName(QString::fromUtf8("pushButton_ajoutercompo"));
        pushButton_ajoutercompo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:  rgb(85, 170, 127);\n"
"border-color:   rgb(85, 170, 127);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;"));

        horizontalLayout_2->addWidget(pushButton_ajoutercompo);

        pushButton_update = new QPushButton(dialog_composer);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 64, 194);\n"
"border-color:  rgb(64, 64, 194);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));

        horizontalLayout_2->addWidget(pushButton_update);

        pushButton_2_supp = new QPushButton(dialog_composer);
        pushButton_2_supp->setObjectName(QString::fromUtf8("pushButton_2_supp"));
        pushButton_2_supp->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 31, 19);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(206, 31, 19);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));

        horizontalLayout_2->addWidget(pushButton_2_supp);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(dialog_composer);

        QMetaObject::connectSlotsByName(dialog_composer);
    } // setupUi

    void retranslateUi(QDialog *dialog_composer)
    {
        dialog_composer->setWindowTitle(QApplication::translate("dialog_composer", "Dialog", nullptr));
        label->setText(QApplication::translate("dialog_composer", "Composition d'un Projet", nullptr));
        label_2->setText(QApplication::translate("dialog_composer", "S\303\251lectionner un projet :", nullptr));
        label_4->setText(QApplication::translate("dialog_composer", "S\303\251lectionner une t\303\242che :", nullptr));
        pushButton_ajoutercompo->setText(QApplication::translate("dialog_composer", "Ajouter", nullptr));
        pushButton_update->setText(QApplication::translate("dialog_composer", "Modifier", nullptr));
        pushButton_2_supp->setText(QApplication::translate("dialog_composer", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_composer: public Ui_dialog_composer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_COMPOSER_H
