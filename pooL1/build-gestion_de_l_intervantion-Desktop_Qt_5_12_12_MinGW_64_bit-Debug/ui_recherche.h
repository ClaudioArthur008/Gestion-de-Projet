/********************************************************************************
** Form generated from reading UI file 'recherche.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHERCHE_H
#define UI_RECHERCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Recherche
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Recherche;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_projet;
    QComboBox *comboBox_projet;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_tache;
    QComboBox *comboBox_tache;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_Interv;
    QComboBox *comboBox_Interv;
    QTableView *tableView;

    void setupUi(QDialog *Recherche)
    {
        if (Recherche->objectName().isEmpty())
            Recherche->setObjectName(QString::fromUtf8("Recherche"));
        Recherche->resize(400, 400);
        Recherche->setMinimumSize(QSize(400, 400));
        Recherche->setMaximumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(Recherche);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(Recherche);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_Recherche = new QPushButton(Recherche);
        pushButton_Recherche->setObjectName(QString::fromUtf8("pushButton_Recherche"));

        horizontalLayout->addWidget(pushButton_Recherche);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_projet = new QRadioButton(Recherche);
        radioButton_projet->setObjectName(QString::fromUtf8("radioButton_projet"));

        horizontalLayout_2->addWidget(radioButton_projet);

        comboBox_projet = new QComboBox(Recherche);
        comboBox_projet->setObjectName(QString::fromUtf8("comboBox_projet"));

        horizontalLayout_2->addWidget(comboBox_projet);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_tache = new QRadioButton(Recherche);
        radioButton_tache->setObjectName(QString::fromUtf8("radioButton_tache"));

        horizontalLayout_3->addWidget(radioButton_tache);

        comboBox_tache = new QComboBox(Recherche);
        comboBox_tache->setObjectName(QString::fromUtf8("comboBox_tache"));

        horizontalLayout_3->addWidget(comboBox_tache);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton_Interv = new QRadioButton(Recherche);
        radioButton_Interv->setObjectName(QString::fromUtf8("radioButton_Interv"));

        horizontalLayout_4->addWidget(radioButton_Interv);

        comboBox_Interv = new QComboBox(Recherche);
        comboBox_Interv->setObjectName(QString::fromUtf8("comboBox_Interv"));

        horizontalLayout_4->addWidget(comboBox_Interv);


        verticalLayout->addLayout(horizontalLayout_4);

        tableView = new QTableView(Recherche);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(Recherche);

        QMetaObject::connectSlotsByName(Recherche);
    } // setupUi

    void retranslateUi(QDialog *Recherche)
    {
        Recherche->setWindowTitle(QApplication::translate("Recherche", "Dialog", nullptr));
        pushButton_Recherche->setText(QApplication::translate("Recherche", "Recherche", nullptr));
        radioButton_projet->setText(QApplication::translate("Recherche", "Projet", nullptr));
        radioButton_tache->setText(QApplication::translate("Recherche", "T\303\242che", nullptr));
        radioButton_Interv->setText(QApplication::translate("Recherche", "Intervenant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recherche: public Ui_Recherche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHERCHE_H
