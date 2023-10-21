/********************************************************************************
** Form generated from reading UI file 'dialog_participer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PARTICIPER_H
#define UI_DIALOG_PARTICIPER_H

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

class Ui_dialog_participer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox_tache;
    QLabel *label_4;
    QComboBox *comboBox_2_interv;
    QTableView *tableView_part;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2_ajouter_int;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_2_delete;

    void setupUi(QDialog *dialog_participer)
    {
        if (dialog_participer->objectName().isEmpty())
            dialog_participer->setObjectName(QString::fromUtf8("dialog_participer"));
        dialog_participer->resize(500, 500);
        dialog_participer->setMaximumSize(QSize(500, 500));
        verticalLayout = new QVBoxLayout(dialog_participer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(dialog_participer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: whitesmoke;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(dialog_participer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox_tache = new QComboBox(dialog_participer);
        comboBox_tache->setObjectName(QString::fromUtf8("comboBox_tache"));

        horizontalLayout->addWidget(comboBox_tache);

        label_4 = new QLabel(dialog_participer);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_2_interv = new QComboBox(dialog_participer);
        comboBox_2_interv->setObjectName(QString::fromUtf8("comboBox_2_interv"));

        horizontalLayout->addWidget(comboBox_2_interv);


        verticalLayout->addLayout(horizontalLayout);

        tableView_part = new QTableView(dialog_participer);
        tableView_part->setObjectName(QString::fromUtf8("tableView_part"));

        verticalLayout->addWidget(tableView_part);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2_ajouter_int = new QPushButton(dialog_participer);
        pushButton_2_ajouter_int->setObjectName(QString::fromUtf8("pushButton_2_ajouter_int"));
        pushButton_2_ajouter_int->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:  rgb(85, 170, 127);\n"
"border-color:   rgb(85, 170, 127);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;"));

        horizontalLayout_2->addWidget(pushButton_2_ajouter_int);

        pushButton_modifier = new QPushButton(dialog_participer);
        pushButton_modifier->setObjectName(QString::fromUtf8("pushButton_modifier"));
        pushButton_modifier->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 64, 194);\n"
"border-color:  rgb(64, 64, 194);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;"));

        horizontalLayout_2->addWidget(pushButton_modifier);

        pushButton_2_delete = new QPushButton(dialog_participer);
        pushButton_2_delete->setObjectName(QString::fromUtf8("pushButton_2_delete"));
        pushButton_2_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 31, 19);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(206, 31, 19);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;"));

        horizontalLayout_2->addWidget(pushButton_2_delete);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(dialog_participer);

        QMetaObject::connectSlotsByName(dialog_participer);
    } // setupUi

    void retranslateUi(QDialog *dialog_participer)
    {
        dialog_participer->setWindowTitle(QApplication::translate("dialog_participer", "Dialog", nullptr));
        label->setText(QApplication::translate("dialog_participer", "Assignation d'un intervenant", nullptr));
        label_2->setText(QApplication::translate("dialog_participer", "S\303\251lectionner une t\303\242che :", nullptr));
        label_4->setText(QApplication::translate("dialog_participer", "S\303\251lectionner un intervenant :", nullptr));
        pushButton_2_ajouter_int->setText(QApplication::translate("dialog_participer", "Ajouter", nullptr));
        pushButton_modifier->setText(QApplication::translate("dialog_participer", "Modifier", nullptr));
        pushButton_2_delete->setText(QApplication::translate("dialog_participer", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_participer: public Ui_dialog_participer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PARTICIPER_H
