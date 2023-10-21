/********************************************************************************
** Form generated from reading UI file 'show_composeretparticiper.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_COMPOSERETPARTICIPER_H
#define UI_SHOW_COMPOSERETPARTICIPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_show_composerEtparticiper
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_projet;
    QLabel *label;
    QComboBox *comboBox_tache;
    QTableView *tableView_addtaskt_into_project;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_add_task_into_project_From_Dialog;
    QPushButton *pushButton_supp_composer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_tache_pour_des_Intervs;
    QLabel *label_6;
    QComboBox *comboBox_Interv_qui_participe;
    QTableView *tableView_add_interv_into_Task;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_ajouter_un_interv;
    QPushButton *pushButton_supp_participer;

    void setupUi(QDialog *show_composerEtparticiper)
    {
        if (show_composerEtparticiper->objectName().isEmpty())
            show_composerEtparticiper->setObjectName(QString::fromUtf8("show_composerEtparticiper"));
        show_composerEtparticiper->resize(600, 503);
        show_composerEtparticiper->setMaximumSize(QSize(600, 16777215));
        verticalLayout_2 = new QVBoxLayout(show_composerEtparticiper);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(show_composerEtparticiper);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("Gabriola"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox_projet = new QComboBox(page);
        comboBox_projet->setObjectName(QString::fromUtf8("comboBox_projet"));

        horizontalLayout_3->addWidget(comboBox_projet);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox_tache = new QComboBox(page);
        comboBox_tache->setObjectName(QString::fromUtf8("comboBox_tache"));

        horizontalLayout_3->addWidget(comboBox_tache);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView_addtaskt_into_project = new QTableView(page);
        tableView_addtaskt_into_project->setObjectName(QString::fromUtf8("tableView_addtaskt_into_project"));

        verticalLayout->addWidget(tableView_addtaskt_into_project);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_add_task_into_project_From_Dialog = new QPushButton(page);
        pushButton_add_task_into_project_From_Dialog->setObjectName(QString::fromUtf8("pushButton_add_task_into_project_From_Dialog"));
        pushButton_add_task_into_project_From_Dialog->setMinimumSize(QSize(0, 30));
        pushButton_add_task_into_project_From_Dialog->setMaximumSize(QSize(16777214, 30));
        pushButton_add_task_into_project_From_Dialog->setLayoutDirection(Qt::RightToLeft);
        pushButton_add_task_into_project_From_Dialog->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);\n"
"border-color: rgb(0, 170, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout_2->addWidget(pushButton_add_task_into_project_From_Dialog);

        pushButton_supp_composer = new QPushButton(page);
        pushButton_supp_composer->setObjectName(QString::fromUtf8("pushButton_supp_composer"));
        pushButton_supp_composer->setMinimumSize(QSize(0, 30));
        pushButton_supp_composer->setMaximumSize(QSize(16777215, 30));
        pushButton_supp_composer->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 48, 7);\n"
"border-color: rgb(255, 48, 7);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout_2->addWidget(pushButton_supp_composer);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_tache_pour_des_Intervs = new QComboBox(page_2);
        comboBox_tache_pour_des_Intervs->setObjectName(QString::fromUtf8("comboBox_tache_pour_des_Intervs"));

        horizontalLayout_4->addWidget(comboBox_tache_pour_des_Intervs);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        comboBox_Interv_qui_participe = new QComboBox(page_2);
        comboBox_Interv_qui_participe->setObjectName(QString::fromUtf8("comboBox_Interv_qui_participe"));

        horizontalLayout_4->addWidget(comboBox_Interv_qui_participe);


        verticalLayout_3->addLayout(horizontalLayout_4);

        tableView_add_interv_into_Task = new QTableView(page_2);
        tableView_add_interv_into_Task->setObjectName(QString::fromUtf8("tableView_add_interv_into_Task"));

        verticalLayout_3->addWidget(tableView_add_interv_into_Task);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_ajouter_un_interv = new QPushButton(page_2);
        pushButton_ajouter_un_interv->setObjectName(QString::fromUtf8("pushButton_ajouter_un_interv"));
        pushButton_ajouter_un_interv->setMinimumSize(QSize(0, 30));
        pushButton_ajouter_un_interv->setMaximumSize(QSize(16777215, 30));
        pushButton_ajouter_un_interv->setLayoutDirection(Qt::RightToLeft);
        pushButton_ajouter_un_interv->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 170, 0);\n"
"border-color: rgb(0, 170, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout->addWidget(pushButton_ajouter_un_interv);

        pushButton_supp_participer = new QPushButton(page_2);
        pushButton_supp_participer->setObjectName(QString::fromUtf8("pushButton_supp_participer"));
        pushButton_supp_participer->setMinimumSize(QSize(0, 30));
        pushButton_supp_participer->setMaximumSize(QSize(16777215, 30));
        pushButton_supp_participer->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 48, 7);\n"
"border-color: rgb(255, 48, 7);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
""));

        horizontalLayout->addWidget(pushButton_supp_participer);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_2);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(show_composerEtparticiper);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(show_composerEtparticiper);
    } // setupUi

    void retranslateUi(QDialog *show_composerEtparticiper)
    {
        show_composerEtparticiper->setWindowTitle(QApplication::translate("show_composerEtparticiper", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        show_composerEtparticiper->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("show_composerEtparticiper", "Back up your data with us :", nullptr));
        label_2->setText(QApplication::translate("show_composerEtparticiper", "S\303\251l\303\251ctionner une projet : ", nullptr));
        label->setText(QApplication::translate("show_composerEtparticiper", "S\303\251l\303\251ctionner une t\303\242che  :", nullptr));
        pushButton_add_task_into_project_From_Dialog->setText(QApplication::translate("show_composerEtparticiper", "Ajouter", nullptr));
        pushButton_supp_composer->setText(QApplication::translate("show_composerEtparticiper", "Supprimer", nullptr));
        label_4->setText(QApplication::translate("show_composerEtparticiper", "Back up your data with us !", nullptr));
        label_5->setText(QApplication::translate("show_composerEtparticiper", "S\303\251l\303\251ctionner une t\303\242che :", nullptr));
        label_6->setText(QApplication::translate("show_composerEtparticiper", "S\303\251l\303\251ctionner un intervenant :", nullptr));
        pushButton_ajouter_un_interv->setText(QApplication::translate("show_composerEtparticiper", "Ajouter", nullptr));
        pushButton_supp_participer->setText(QApplication::translate("show_composerEtparticiper", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class show_composerEtparticiper: public Ui_show_composerEtparticiper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_COMPOSERETPARTICIPER_H
