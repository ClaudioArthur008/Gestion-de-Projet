/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Update
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_titre_Proj;
    QPushButton *pushButton_Titre_Proj;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit_DDP;
    QPushButton *pushButton_DDP;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *dateEdit_DFP;
    QPushButton *pushButton_DFP;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *lineEdit_Tarif;
    QPushButton *pushButton_Tarif;
    QPushButton *pushButton_save_Projet_Updates;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_Designation;
    QPushButton *pushButton_Designation;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QDateEdit *dateEdit_DDT;
    QPushButton *pushButton_DDT;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDateEdit *dateEdit_DFT;
    QPushButton *pushButton_DFT;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSpinBox *lineEdit_CI;
    QPushButton *pushButton_CI;
    QPushButton *pushButton_save_Tache_Updated;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_12;
    QLineEdit *lineEdit_Nom_Interv;
    QPushButton *pushButton_Nom_Interv;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lineEdit__Specialite;
    QPushButton *pushButton_Specialite;
    QPushButton *pushButton_save_Interv_Updated;

    void setupUi(QDialog *Update)
    {
        if (Update->objectName().isEmpty())
            Update->setObjectName(QString::fromUtf8("Update"));
        Update->resize(500, 436);
        Update->setMinimumSize(QSize(0, 0));
        Update->setMaximumSize(QSize(500, 500));
        Update->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(Update);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(Update);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_titre_Proj = new QLineEdit(page);
        lineEdit_titre_Proj->setObjectName(QString::fromUtf8("lineEdit_titre_Proj"));
        lineEdit_titre_Proj->setMinimumSize(QSize(150, 0));
        lineEdit_titre_Proj->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(lineEdit_titre_Proj);

        pushButton_Titre_Proj = new QPushButton(page);
        pushButton_Titre_Proj->setObjectName(QString::fromUtf8("pushButton_Titre_Proj"));
        pushButton_Titre_Proj->setMinimumSize(QSize(100, 20));
        pushButton_Titre_Proj->setMaximumSize(QSize(100, 20));

        horizontalLayout->addWidget(pushButton_Titre_Proj);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        dateEdit_DDP = new QDateEdit(page);
        dateEdit_DDP->setObjectName(QString::fromUtf8("dateEdit_DDP"));
        dateEdit_DDP->setMinimumSize(QSize(150, 0));
        dateEdit_DDP->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(dateEdit_DDP);

        pushButton_DDP = new QPushButton(page);
        pushButton_DDP->setObjectName(QString::fromUtf8("pushButton_DDP"));
        pushButton_DDP->setMinimumSize(QSize(100, 20));
        pushButton_DDP->setMaximumSize(QSize(100, 20));

        horizontalLayout_2->addWidget(pushButton_DDP);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        dateEdit_DFP = new QDateEdit(page);
        dateEdit_DFP->setObjectName(QString::fromUtf8("dateEdit_DFP"));
        dateEdit_DFP->setMinimumSize(QSize(150, 0));
        dateEdit_DFP->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(dateEdit_DFP);

        pushButton_DFP = new QPushButton(page);
        pushButton_DFP->setObjectName(QString::fromUtf8("pushButton_DFP"));
        pushButton_DFP->setMinimumSize(QSize(100, 20));
        pushButton_DFP->setMaximumSize(QSize(100, 20));

        horizontalLayout_3->addWidget(pushButton_DFP);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_Tarif = new QSpinBox(page);
        lineEdit_Tarif->setObjectName(QString::fromUtf8("lineEdit_Tarif"));
        lineEdit_Tarif->setMinimumSize(QSize(150, 0));
        lineEdit_Tarif->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(lineEdit_Tarif);

        pushButton_Tarif = new QPushButton(page);
        pushButton_Tarif->setObjectName(QString::fromUtf8("pushButton_Tarif"));
        pushButton_Tarif->setMinimumSize(QSize(100, 20));
        pushButton_Tarif->setMaximumSize(QSize(100, 20));

        horizontalLayout_4->addWidget(pushButton_Tarif);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_save_Projet_Updates = new QPushButton(page);
        pushButton_save_Projet_Updates->setObjectName(QString::fromUtf8("pushButton_save_Projet_Updates"));
        pushButton_save_Projet_Updates->setMinimumSize(QSize(80, 30));
        pushButton_save_Projet_Updates->setMaximumSize(QSize(80, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton_save_Projet_Updates->setFont(font);
        pushButton_save_Projet_Updates->setLayoutDirection(Qt::RightToLeft);
        pushButton_save_Projet_Updates->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);\n"
"border-color: rgb(0, 170, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        verticalLayout->addWidget(pushButton_save_Projet_Updates);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_Designation = new QLineEdit(page_2);
        lineEdit_Designation->setObjectName(QString::fromUtf8("lineEdit_Designation"));
        lineEdit_Designation->setMinimumSize(QSize(150, 0));
        lineEdit_Designation->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(lineEdit_Designation);

        pushButton_Designation = new QPushButton(page_2);
        pushButton_Designation->setObjectName(QString::fromUtf8("pushButton_Designation"));
        pushButton_Designation->setMinimumSize(QSize(100, 20));
        pushButton_Designation->setMaximumSize(QSize(100, 20));

        horizontalLayout_5->addWidget(pushButton_Designation);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        dateEdit_DDT = new QDateEdit(page_2);
        dateEdit_DDT->setObjectName(QString::fromUtf8("dateEdit_DDT"));
        dateEdit_DDT->setMinimumSize(QSize(150, 0));
        dateEdit_DDT->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_9->addWidget(dateEdit_DDT);

        pushButton_DDT = new QPushButton(page_2);
        pushButton_DDT->setObjectName(QString::fromUtf8("pushButton_DDT"));
        pushButton_DDT->setMinimumSize(QSize(100, 20));
        pushButton_DDT->setMaximumSize(QSize(100, 20));

        horizontalLayout_9->addWidget(pushButton_DDT);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        dateEdit_DFT = new QDateEdit(page_2);
        dateEdit_DFT->setObjectName(QString::fromUtf8("dateEdit_DFT"));
        dateEdit_DFT->setMinimumSize(QSize(150, 0));
        dateEdit_DFT->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_6->addWidget(dateEdit_DFT);

        pushButton_DFT = new QPushButton(page_2);
        pushButton_DFT->setObjectName(QString::fromUtf8("pushButton_DFT"));
        pushButton_DFT->setMinimumSize(QSize(100, 20));
        pushButton_DFT->setMaximumSize(QSize(100, 20));

        horizontalLayout_6->addWidget(pushButton_DFT);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        lineEdit_CI = new QSpinBox(page_2);
        lineEdit_CI->setObjectName(QString::fromUtf8("lineEdit_CI"));
        lineEdit_CI->setMinimumSize(QSize(150, 0));
        lineEdit_CI->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_7->addWidget(lineEdit_CI);

        pushButton_CI = new QPushButton(page_2);
        pushButton_CI->setObjectName(QString::fromUtf8("pushButton_CI"));
        pushButton_CI->setMinimumSize(QSize(100, 20));
        pushButton_CI->setMaximumSize(QSize(100, 20));

        horizontalLayout_7->addWidget(pushButton_CI);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_3);

        pushButton_save_Tache_Updated = new QPushButton(page_2);
        pushButton_save_Tache_Updated->setObjectName(QString::fromUtf8("pushButton_save_Tache_Updated"));
        pushButton_save_Tache_Updated->setMinimumSize(QSize(80, 30));
        pushButton_save_Tache_Updated->setMaximumSize(QSize(80, 30));
        pushButton_save_Tache_Updated->setFont(font);
        pushButton_save_Tache_Updated->setLayoutDirection(Qt::RightToLeft);
        pushButton_save_Tache_Updated->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);\n"
"border-color: rgb(0, 170, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        verticalLayout_5->addWidget(pushButton_save_Tache_Updated);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 30));

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_8->addWidget(label_12);

        lineEdit_Nom_Interv = new QLineEdit(page_3);
        lineEdit_Nom_Interv->setObjectName(QString::fromUtf8("lineEdit_Nom_Interv"));
        lineEdit_Nom_Interv->setMinimumSize(QSize(200, 0));
        lineEdit_Nom_Interv->setMaximumSize(QSize(200, 16777215));
        lineEdit_Nom_Interv->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_8->addWidget(lineEdit_Nom_Interv);

        pushButton_Nom_Interv = new QPushButton(page_3);
        pushButton_Nom_Interv->setObjectName(QString::fromUtf8("pushButton_Nom_Interv"));
        pushButton_Nom_Interv->setMinimumSize(QSize(100, 20));
        pushButton_Nom_Interv->setMaximumSize(QSize(100, 20));

        horizontalLayout_8->addWidget(pushButton_Nom_Interv);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_10->addWidget(label_13);

        lineEdit__Specialite = new QLineEdit(page_3);
        lineEdit__Specialite->setObjectName(QString::fromUtf8("lineEdit__Specialite"));
        lineEdit__Specialite->setMinimumSize(QSize(200, 0));
        lineEdit__Specialite->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_10->addWidget(lineEdit__Specialite);

        pushButton_Specialite = new QPushButton(page_3);
        pushButton_Specialite->setObjectName(QString::fromUtf8("pushButton_Specialite"));

        horizontalLayout_10->addWidget(pushButton_Specialite);


        verticalLayout_4->addLayout(horizontalLayout_10);

        pushButton_save_Interv_Updated = new QPushButton(page_3);
        pushButton_save_Interv_Updated->setObjectName(QString::fromUtf8("pushButton_save_Interv_Updated"));
        pushButton_save_Interv_Updated->setMinimumSize(QSize(80, 30));
        pushButton_save_Interv_Updated->setMaximumSize(QSize(80, 30));
        pushButton_save_Interv_Updated->setLayoutDirection(Qt::RightToLeft);
        pushButton_save_Interv_Updated->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);\n"
"border-color: rgb(0, 170, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        verticalLayout_4->addWidget(pushButton_save_Interv_Updated);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(Update);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Update);
    } // setupUi

    void retranslateUi(QDialog *Update)
    {
        Update->setWindowTitle(QApplication::translate("Update", "Dialog", nullptr));
        label_5->setText(QApplication::translate("Update", "TextLabel", nullptr));
        label->setText(QApplication::translate("Update", "Titre du Projet:", nullptr));
        pushButton_Titre_Proj->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_2->setText(QApplication::translate("Update", "Date du debut du Projet :", nullptr));
        pushButton_DDP->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_3->setText(QApplication::translate("Update", "Date de la fin du Projet :", nullptr));
        pushButton_DFP->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_4->setText(QApplication::translate("Update", "Tarif par Jour :", nullptr));
        pushButton_Tarif->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        pushButton_save_Projet_Updates->setText(QApplication::translate("Update", "Enregistrer", nullptr));
        label_6->setText(QApplication::translate("Update", "TextLabel", nullptr));
        label_7->setText(QApplication::translate("Update", "Designation", nullptr));
        pushButton_Designation->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_11->setText(QApplication::translate("Update", "Date du debut de la Tache", nullptr));
        pushButton_DDT->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_8->setText(QApplication::translate("Update", "Date de la fin de la tache", nullptr));
        pushButton_DFT->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_10->setText(QApplication::translate("Update", "Cout d'intervation", nullptr));
        pushButton_CI->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        pushButton_save_Tache_Updated->setText(QApplication::translate("Update", "Enregistrer", nullptr));
        label_9->setText(QApplication::translate("Update", "TextLabel", nullptr));
        label_12->setText(QApplication::translate("Update", "Nom de l'intervenant: ", nullptr));
        pushButton_Nom_Interv->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        label_13->setText(QApplication::translate("Update", "Specialite:", nullptr));
        pushButton_Specialite->setText(QApplication::translate("Update", "Ancienne valeur", nullptr));
        pushButton_save_Interv_Updated->setText(QApplication::translate("Update", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update: public Ui_Update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
