/********************************************************************************
** Form generated from reading UI file 'update_delete.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_DELETE_H
#define UI_UPDATE_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_update_delete
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Ref_Proj;
    QPushButton *pushButton_envoyez;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_tache;
    QPushButton *pushButton_envoyez_tache;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_Interv;
    QPushButton *pushButton_envoyez_Interv;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_Ref_Proj_toupdate;
    QPushButton *pushButton_send_Ref_Proj_Toupdate;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpinBox *lineEdit_Num_Tache_Toupdate;
    QPushButton *pushButton_send_Num_Tache_Toupdate;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_12;
    QSpinBox *lineEdit_Num_Interv_Toupdate;
    QPushButton *pushButton_send_Num_Tache_Toupdate_2;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QLineEdit *lineEdit_Ref_Proj_to_delete_composer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLineEdit *lineEdit_Num_tache_to_delete_composer;
    QPushButton *pushButton_confrirmation_Supp_Composer;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_17;
    QLineEdit *lineEdit_Num_tache_to_delete_participer;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_18;
    QLineEdit *lineEdit_Num_Interv_to_delete_participer;
    QPushButton *pushButton_delete_from_participer;

    void setupUi(QDialog *update_delete)
    {
        if (update_delete->objectName().isEmpty())
            update_delete->setObjectName(QString::fromUtf8("update_delete"));
        update_delete->resize(400, 200);
        update_delete->setMinimumSize(QSize(400, 200));
        update_delete->setMaximumSize(QSize(400, 200));
        verticalLayout_2 = new QVBoxLayout(update_delete);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(update_delete);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEdit_Ref_Proj = new QLineEdit(page);
        lineEdit_Ref_Proj->setObjectName(QString::fromUtf8("lineEdit_Ref_Proj"));

        horizontalLayout->addWidget(lineEdit_Ref_Proj);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_envoyez = new QPushButton(page);
        pushButton_envoyez->setObjectName(QString::fromUtf8("pushButton_envoyez"));
        pushButton_envoyez->setMinimumSize(QSize(80, 30));
        pushButton_envoyez->setMaximumSize(QSize(80, 30));
        pushButton_envoyez->setLayoutDirection(Qt::RightToLeft);
        pushButton_envoyez->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
""));

        verticalLayout->addWidget(pushButton_envoyez);


        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_5->addWidget(label_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_tache = new QLineEdit(page_2);
        lineEdit_tache->setObjectName(QString::fromUtf8("lineEdit_tache"));

        horizontalLayout_2->addWidget(lineEdit_tache);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton_envoyez_tache = new QPushButton(page_2);
        pushButton_envoyez_tache->setObjectName(QString::fromUtf8("pushButton_envoyez_tache"));
        pushButton_envoyez_tache->setMinimumSize(QSize(80, 30));
        pushButton_envoyez_tache->setMaximumSize(QSize(80, 30));
        pushButton_envoyez_tache->setLayoutDirection(Qt::RightToLeft);
        pushButton_envoyez_tache->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
""));

        verticalLayout_4->addWidget(pushButton_envoyez_tache);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_8->addWidget(label_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_3->addWidget(label_6);

        lineEdit_Interv = new QLineEdit(page_3);
        lineEdit_Interv->setObjectName(QString::fromUtf8("lineEdit_Interv"));

        horizontalLayout_3->addWidget(lineEdit_Interv);


        verticalLayout_7->addLayout(horizontalLayout_3);

        pushButton_envoyez_Interv = new QPushButton(page_3);
        pushButton_envoyez_Interv->setObjectName(QString::fromUtf8("pushButton_envoyez_Interv"));
        pushButton_envoyez_Interv->setMinimumSize(QSize(80, 30));
        pushButton_envoyez_Interv->setMaximumSize(QSize(80, 30));
        pushButton_envoyez_Interv->setLayoutDirection(Qt::RightToLeft);
        pushButton_envoyez_Interv->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
""));

        verticalLayout_7->addWidget(pushButton_envoyez_Interv);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_8);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_10 = new QVBoxLayout(page_4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_10->addWidget(label_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_4->addWidget(label_8);

        lineEdit_Ref_Proj_toupdate = new QLineEdit(page_4);
        lineEdit_Ref_Proj_toupdate->setObjectName(QString::fromUtf8("lineEdit_Ref_Proj_toupdate"));

        horizontalLayout_4->addWidget(lineEdit_Ref_Proj_toupdate);


        verticalLayout_10->addLayout(horizontalLayout_4);

        pushButton_send_Ref_Proj_Toupdate = new QPushButton(page_4);
        pushButton_send_Ref_Proj_Toupdate->setObjectName(QString::fromUtf8("pushButton_send_Ref_Proj_Toupdate"));
        pushButton_send_Ref_Proj_Toupdate->setMinimumSize(QSize(80, 30));
        pushButton_send_Ref_Proj_Toupdate->setMaximumSize(QSize(80, 30));
        pushButton_send_Ref_Proj_Toupdate->setLayoutDirection(Qt::RightToLeft);
        pushButton_send_Ref_Proj_Toupdate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
""));

        verticalLayout_10->addWidget(pushButton_send_Ref_Proj_Toupdate);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_11 = new QVBoxLayout(page_5);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_11->addWidget(label_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        horizontalLayout_5->addWidget(label_10);

        lineEdit_Num_Tache_Toupdate = new QSpinBox(page_5);
        lineEdit_Num_Tache_Toupdate->setObjectName(QString::fromUtf8("lineEdit_Num_Tache_Toupdate"));

        horizontalLayout_5->addWidget(lineEdit_Num_Tache_Toupdate);


        verticalLayout_11->addLayout(horizontalLayout_5);

        pushButton_send_Num_Tache_Toupdate = new QPushButton(page_5);
        pushButton_send_Num_Tache_Toupdate->setObjectName(QString::fromUtf8("pushButton_send_Num_Tache_Toupdate"));
        pushButton_send_Num_Tache_Toupdate->setMinimumSize(QSize(80, 30));
        pushButton_send_Num_Tache_Toupdate->setMaximumSize(QSize(80, 30));
        pushButton_send_Num_Tache_Toupdate->setLayoutDirection(Qt::RightToLeft);
        pushButton_send_Num_Tache_Toupdate->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"width:80px;\n"
"height:30px;"));

        verticalLayout_11->addWidget(pushButton_send_Num_Tache_Toupdate);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        verticalLayout_12 = new QVBoxLayout(page_6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_11 = new QLabel(page_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_12->addWidget(label_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_12 = new QLabel(page_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        horizontalLayout_6->addWidget(label_12);

        lineEdit_Num_Interv_Toupdate = new QSpinBox(page_6);
        lineEdit_Num_Interv_Toupdate->setObjectName(QString::fromUtf8("lineEdit_Num_Interv_Toupdate"));

        horizontalLayout_6->addWidget(lineEdit_Num_Interv_Toupdate);


        verticalLayout_12->addLayout(horizontalLayout_6);

        pushButton_send_Num_Tache_Toupdate_2 = new QPushButton(page_6);
        pushButton_send_Num_Tache_Toupdate_2->setObjectName(QString::fromUtf8("pushButton_send_Num_Tache_Toupdate_2"));
        pushButton_send_Num_Tache_Toupdate_2->setMinimumSize(QSize(80, 30));
        pushButton_send_Num_Tache_Toupdate_2->setMaximumSize(QSize(80, 30));
        pushButton_send_Num_Tache_Toupdate_2->setLayoutDirection(Qt::RightToLeft);
        pushButton_send_Num_Tache_Toupdate_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"width:80px;\n"
"height:30px;"));

        verticalLayout_12->addWidget(pushButton_send_Num_Tache_Toupdate_2);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_13 = new QVBoxLayout(page_7);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_15 = new QLabel(page_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_13->addWidget(label_15);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_13 = new QLabel(page_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);

        horizontalLayout_8->addWidget(label_13);

        lineEdit_Ref_Proj_to_delete_composer = new QLineEdit(page_7);
        lineEdit_Ref_Proj_to_delete_composer->setObjectName(QString::fromUtf8("lineEdit_Ref_Proj_to_delete_composer"));
        lineEdit_Ref_Proj_to_delete_composer->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_8->addWidget(lineEdit_Ref_Proj_to_delete_composer);


        verticalLayout_13->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_14 = new QLabel(page_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        horizontalLayout_7->addWidget(label_14);

        lineEdit_Num_tache_to_delete_composer = new QLineEdit(page_7);
        lineEdit_Num_tache_to_delete_composer->setObjectName(QString::fromUtf8("lineEdit_Num_tache_to_delete_composer"));
        lineEdit_Num_tache_to_delete_composer->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_7->addWidget(lineEdit_Num_tache_to_delete_composer);


        verticalLayout_13->addLayout(horizontalLayout_7);

        pushButton_confrirmation_Supp_Composer = new QPushButton(page_7);
        pushButton_confrirmation_Supp_Composer->setObjectName(QString::fromUtf8("pushButton_confrirmation_Supp_Composer"));
        pushButton_confrirmation_Supp_Composer->setMinimumSize(QSize(80, 30));
        pushButton_confrirmation_Supp_Composer->setMaximumSize(QSize(80, 30));
        pushButton_confrirmation_Supp_Composer->setLayoutDirection(Qt::RightToLeft);
        pushButton_confrirmation_Supp_Composer->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_13->addWidget(pushButton_confrirmation_Supp_Composer);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        verticalLayout_14 = new QVBoxLayout(page_8);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_16 = new QLabel(page_8);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_14->addWidget(label_16);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_17 = new QLabel(page_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);

        horizontalLayout_9->addWidget(label_17);

        lineEdit_Num_tache_to_delete_participer = new QLineEdit(page_8);
        lineEdit_Num_tache_to_delete_participer->setObjectName(QString::fromUtf8("lineEdit_Num_tache_to_delete_participer"));
        lineEdit_Num_tache_to_delete_participer->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_9->addWidget(lineEdit_Num_tache_to_delete_participer);


        verticalLayout_14->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_18 = new QLabel(page_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);

        horizontalLayout_10->addWidget(label_18);

        lineEdit_Num_Interv_to_delete_participer = new QLineEdit(page_8);
        lineEdit_Num_Interv_to_delete_participer->setObjectName(QString::fromUtf8("lineEdit_Num_Interv_to_delete_participer"));
        lineEdit_Num_Interv_to_delete_participer->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_10->addWidget(lineEdit_Num_Interv_to_delete_participer);


        verticalLayout_14->addLayout(horizontalLayout_10);

        pushButton_delete_from_participer = new QPushButton(page_8);
        pushButton_delete_from_participer->setObjectName(QString::fromUtf8("pushButton_delete_from_participer"));
        pushButton_delete_from_participer->setMinimumSize(QSize(80, 30));
        pushButton_delete_from_participer->setMaximumSize(QSize(80, 30));
        pushButton_delete_from_participer->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_14->addWidget(pushButton_delete_from_participer);

        stackedWidget->addWidget(page_8);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(update_delete);

        stackedWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(update_delete);
    } // setupUi

    void retranslateUi(QDialog *update_delete)
    {
        update_delete->setWindowTitle(QApplication::translate("update_delete", "Dialog", nullptr));
        label->setText(QApplication::translate("update_delete", "Veuillez entrer la reference du projet que  vous voulez supprimer :", nullptr));
        label_2->setText(QApplication::translate("update_delete", "Reference du Projet :", nullptr));
        pushButton_envoyez->setText(QApplication::translate("update_delete", "Envoyez", nullptr));
        label_3->setText(QApplication::translate("update_delete", "Veuillez entrer le num\303\251ro de t\303\242che  que vous voulez supprimer :", nullptr));
        label_4->setText(QApplication::translate("update_delete", "Num\303\251ro de T\303\242che :", nullptr));
        pushButton_envoyez_tache->setText(QApplication::translate("update_delete", "Envoyez", nullptr));
        label_5->setText(QApplication::translate("update_delete", "Veuillez entrer le num\303\251ro de l'intervenant  que vous voulez supprimer :", nullptr));
        label_6->setText(QApplication::translate("update_delete", "Num\303\251ro de l'intervenant :", nullptr));
        pushButton_envoyez_Interv->setText(QApplication::translate("update_delete", "Envoyez", nullptr));
        label_7->setText(QApplication::translate("update_delete", "Veuillez entrer la reference du projet que  vous souhaitez modifier:", nullptr));
        label_8->setText(QApplication::translate("update_delete", "Reference du projet :", nullptr));
        pushButton_send_Ref_Proj_Toupdate->setText(QApplication::translate("update_delete", "Envoyez", nullptr));
        label_9->setText(QApplication::translate("update_delete", "Veuillez entrer le num\303\251ro de t\303\242che  que vous souhaitez modifier:", nullptr));
        label_10->setText(QApplication::translate("update_delete", "Num\303\251ro de t\303\242che :", nullptr));
        pushButton_send_Num_Tache_Toupdate->setText(QApplication::translate("update_delete", "Envoyez", nullptr));
        label_11->setText(QApplication::translate("update_delete", "Veuillez entrer le num\303\251ro de l'intervenant  que vous souhaitez modifier :", nullptr));
        label_12->setText(QApplication::translate("update_delete", "Num\303\251ro de l'intervenant :", nullptr));
        pushButton_send_Num_Tache_Toupdate_2->setText(QApplication::translate("update_delete", "Envoyez", nullptr));
        label_15->setText(QApplication::translate("update_delete", "Veuillez saisir l'indentifiant du donn\303\251es que vous voulez supprimer:", nullptr));
        label_13->setText(QApplication::translate("update_delete", "R\303\251f\303\251rence du projet :", nullptr));
        label_14->setText(QApplication::translate("update_delete", "Num\303\251ro de t\303\242che :", nullptr));
        pushButton_confrirmation_Supp_Composer->setText(QApplication::translate("update_delete", "Supprimer", nullptr));
        label_16->setText(QApplication::translate("update_delete", "Veuillez saisir l'indentifiant du donn\303\251es que vous voulez supprimer:", nullptr));
        label_17->setText(QApplication::translate("update_delete", "Num\303\251ro de t\303\242che :", nullptr));
        label_18->setText(QApplication::translate("update_delete", "Num\303\251ro d'intervenant :", nullptr));
        pushButton_delete_from_participer->setText(QApplication::translate("update_delete", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update_delete: public Ui_update_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_DELETE_H
