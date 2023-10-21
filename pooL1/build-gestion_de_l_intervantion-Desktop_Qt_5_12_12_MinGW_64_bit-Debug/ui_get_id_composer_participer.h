/********************************************************************************
** Form generated from reading UI file 'get_id_composer_participer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_ID_COMPOSER_PARTICIPER_H
#define UI_GET_ID_COMPOSER_PARTICIPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_get_id_composer_participer
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Ref_Proj_pour_afficher_ses_taches;
    QPushButton *pushButton_afficher_les_taches_inclus_dans_un_Projet;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QTableView *tableView;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QTableView *tableView_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QTableView *tableView_3;

    void setupUi(QDialog *get_id_composer_participer)
    {
        if (get_id_composer_participer->objectName().isEmpty())
            get_id_composer_participer->setObjectName(QString::fromUtf8("get_id_composer_participer"));
        get_id_composer_participer->resize(500, 400);
        get_id_composer_participer->setMinimumSize(QSize(500, 300));
        get_id_composer_participer->setMaximumSize(QSize(500, 400));
        verticalLayout_3 = new QVBoxLayout(get_id_composer_participer);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stackedWidget = new QStackedWidget(get_id_composer_participer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit_Ref_Proj_pour_afficher_ses_taches = new QLineEdit(page);
        lineEdit_Ref_Proj_pour_afficher_ses_taches->setObjectName(QString::fromUtf8("lineEdit_Ref_Proj_pour_afficher_ses_taches"));

        horizontalLayout->addWidget(lineEdit_Ref_Proj_pour_afficher_ses_taches);

        pushButton_afficher_les_taches_inclus_dans_un_Projet = new QPushButton(page);
        pushButton_afficher_les_taches_inclus_dans_un_Projet->setObjectName(QString::fromUtf8("pushButton_afficher_les_taches_inclus_dans_un_Projet"));
        pushButton_afficher_les_taches_inclus_dans_un_Projet->setMinimumSize(QSize(80, 30));
        pushButton_afficher_les_taches_inclus_dans_un_Projet->setMaximumSize(QSize(80, 30));
        pushButton_afficher_les_taches_inclus_dans_un_Projet->setLayoutDirection(Qt::RightToLeft);
        pushButton_afficher_les_taches_inclus_dans_un_Projet->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"width:80px;\n"
"height:30px;"));

        horizontalLayout->addWidget(pushButton_afficher_les_taches_inclus_dans_un_Projet);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        label_9 = new QLabel(page);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);

        tableView = new QTableView(page);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(0, 250));

        verticalLayout_2->addWidget(tableView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 30));
        pushButton_2->setMaximumSize(QSize(80, 30));
        pushButton_2->setLayoutDirection(Qt::RightToLeft);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"width:80px;\n"
"height:30px;"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        tableView_2 = new QTableView(page_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setMinimumSize(QSize(0, 250));

        verticalLayout->addWidget(tableView_2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);

        lineEdit_3 = new QLineEdit(page_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(80, 30));
        pushButton_3->setMaximumSize(QSize(80, 30));
        pushButton_3->setLayoutDirection(Qt::RightToLeft);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 127, 190);\n"
"color:white;\n"
"border-color:  rgb(0, 127, 190);\n"
"border-width:2px;\n"
"border-style:solid;\n"
"border-radius:3px;\n"
"width:80px;\n"
"height:30px;"));

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        tableView_3 = new QTableView(page_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setMinimumSize(QSize(0, 250));

        verticalLayout_4->addWidget(tableView_3);

        stackedWidget->addWidget(page_3);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(get_id_composer_participer);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(get_id_composer_participer);
    } // setupUi

    void retranslateUi(QDialog *get_id_composer_participer)
    {
        get_id_composer_participer->setWindowTitle(QApplication::translate("get_id_composer_participer", "Dialog", nullptr));
        label->setText(QApplication::translate("get_id_composer_participer", "Pour afficher les listes t\303\242ches inclusent dans un projet, veuillez saisir sa r\303\251f\303\251rence :", nullptr));
        label_2->setText(QApplication::translate("get_id_composer_participer", "R\303\251f\303\251rence du Projet :", nullptr));
        pushButton_afficher_les_taches_inclus_dans_un_Projet->setText(QApplication::translate("get_id_composer_participer", "Afficher", nullptr));
        label_9->setText(QApplication::translate("get_id_composer_participer", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("get_id_composer_participer", "Pour afficher la liste des projets dont les t\303\242ches sont inclus, veuillez saisir la num\303\251ro de t\303\242che :", nullptr));
        label_4->setText(QApplication::translate("get_id_composer_participer", "Num\303\251ro de t\303\242che :", nullptr));
        pushButton_2->setText(QApplication::translate("get_id_composer_participer", "Afficher", nullptr));
        label_6->setText(QApplication::translate("get_id_composer_participer", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("get_id_composer_participer", " Pour pouvoir afficher les listes des intervenants qui participent dans un t\303\242che, veuillez \n"
"  saisir le num\303\251ro de t\303\242che :", nullptr));
        label_7->setText(QApplication::translate("get_id_composer_participer", " Num\303\251ro de t\303\242che :", nullptr));
        pushButton_3->setText(QApplication::translate("get_id_composer_participer", "Afficher", nullptr));
        label_8->setText(QApplication::translate("get_id_composer_participer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class get_id_composer_participer: public Ui_get_id_composer_participer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_ID_COMPOSER_PARTICIPER_H
