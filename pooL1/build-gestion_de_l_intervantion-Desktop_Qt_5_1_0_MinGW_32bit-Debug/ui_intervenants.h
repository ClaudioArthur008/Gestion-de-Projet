/********************************************************************************
** Form generated from reading UI file 'intervenants.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERVENANTS_H
#define UI_INTERVENANTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Intervenants
{
public:
    QAction *actionProjet;
    QAction *actionTaches;
    QAction *actionIntervenant;
    QAction *actionFacture;
    QAction *actionHome;
    QAction *actionGestion_de_Projet;
    QAction *actionCreate_data;
    QAction *actionRead;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *Intervenants)
    {
        if (Intervenants->objectName().isEmpty())
            Intervenants->setObjectName(QStringLiteral("Intervenants"));
        Intervenants->resize(747, 480);
        actionProjet = new QAction(Intervenants);
        actionProjet->setObjectName(QStringLiteral("actionProjet"));
        actionProjet->setCheckable(false);
        actionProjet->setChecked(false);
        actionProjet->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/project.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionProjet->setIcon(icon);
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        actionProjet->setFont(font);
        actionProjet->setPriority(QAction::NormalPriority);
        QPalette palette;
        actionProjet->setProperty("Palette", QVariant(palette));
        actionTaches = new QAction(Intervenants);
        actionTaches->setObjectName(QStringLiteral("actionTaches"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/task.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionTaches->setIcon(icon1);
        actionTaches->setFont(font);
        actionIntervenant = new QAction(Intervenants);
        actionIntervenant->setObjectName(QStringLiteral("actionIntervenant"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/intervenant.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionIntervenant->setIcon(icon2);
        actionIntervenant->setFont(font);
        actionFacture = new QAction(Intervenants);
        actionFacture->setObjectName(QStringLiteral("actionFacture"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/facture.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionFacture->setIcon(icon3);
        actionFacture->setFont(font);
        actionFacture->setIconVisibleInMenu(true);
        actionHome = new QAction(Intervenants);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        actionHome->setCheckable(false);
        actionHome->setChecked(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/home.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon4);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        font1.setStyleStrategy(QFont::PreferDefault);
        actionHome->setFont(font1);
        actionGestion_de_Projet = new QAction(Intervenants);
        actionGestion_de_Projet->setObjectName(QStringLiteral("actionGestion_de_Projet"));
        actionGestion_de_Projet->setEnabled(false);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        actionGestion_de_Projet->setFont(font2);
        actionGestion_de_Projet->setPriority(QAction::NormalPriority);
        actionCreate_data = new QAction(Intervenants);
        actionCreate_data->setObjectName(QStringLiteral("actionCreate_data"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_data->setIcon(icon5);
        actionRead = new QAction(Intervenants);
        actionRead->setObjectName(QStringLiteral("actionRead"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/read.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRead->setIcon(icon6);
        actionCopy = new QAction(Intervenants);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/copy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionCut = new QAction(Intervenants);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/cut.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionPaste = new QAction(Intervenants);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/paste.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionUndo = new QAction(Intervenants);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/undo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionRedo = new QAction(Intervenants);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/redo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon11);
        centralwidget = new QWidget(Intervenants);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Intervenants->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Intervenants);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 747, 21));
        Intervenants->setMenuBar(menubar);
        statusbar = new QStatusBar(Intervenants);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Intervenants->setStatusBar(statusbar);
        toolBar = new QToolBar(Intervenants);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 71, 104);\n"
"color: rgb(217, 217, 217);"));
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Intervenants->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(Intervenants);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setStyleSheet(QLatin1String("background-color: rgb(0, 71, 104);\n"
"color: rgb(217, 217, 217);"));
        toolBar_2->setMovable(false);
        toolBar_2->setToolButtonStyle(Qt::ToolButtonTextOnly);
        Intervenants->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(Intervenants);
        toolBar_3->setObjectName(QStringLiteral("toolBar_3"));
        toolBar_3->setMovable(false);
        toolBar_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        Intervenants->addToolBar(Qt::TopToolBarArea, toolBar_3);
        Intervenants->insertToolBarBreak(toolBar_3);

        toolBar->addAction(actionHome);
        toolBar->addSeparator();
        toolBar->addAction(actionProjet);
        toolBar->addSeparator();
        toolBar->addAction(actionTaches);
        toolBar->addSeparator();
        toolBar->addAction(actionIntervenant);
        toolBar->addSeparator();
        toolBar->addAction(actionFacture);
        toolBar->addSeparator();
        toolBar_2->addAction(actionGestion_de_Projet);
        toolBar_3->addAction(actionCreate_data);
        toolBar_3->addAction(actionRead);
        toolBar_3->addSeparator();
        toolBar_3->addAction(actionCopy);
        toolBar_3->addAction(actionCut);
        toolBar_3->addAction(actionPaste);
        toolBar_3->addSeparator();
        toolBar_3->addAction(actionUndo);
        toolBar_3->addAction(actionRedo);

        retranslateUi(Intervenants);

        QMetaObject::connectSlotsByName(Intervenants);
    } // setupUi

    void retranslateUi(QMainWindow *Intervenants)
    {
        Intervenants->setWindowTitle(QApplication::translate("Intervenants", "MainWindow", 0));
        actionProjet->setText(QApplication::translate("Intervenants", "Projet", 0));
        actionTaches->setText(QApplication::translate("Intervenants", "Taches", 0));
        actionIntervenant->setText(QApplication::translate("Intervenants", "Intervenant", 0));
        actionFacture->setText(QApplication::translate("Intervenants", "Facture", 0));
        actionHome->setText(QApplication::translate("Intervenants", "Home", 0));
        actionGestion_de_Projet->setText(QApplication::translate("Intervenants", "GESTION DE PROJET", 0));
        actionCreate_data->setText(QApplication::translate("Intervenants", "Create data", 0));
        actionRead->setText(QApplication::translate("Intervenants", "Read data", 0));
        actionCopy->setText(QApplication::translate("Intervenants", "Copy", 0));
        actionCut->setText(QApplication::translate("Intervenants", "Cut", 0));
        actionPaste->setText(QApplication::translate("Intervenants", "Paste", 0));
        actionUndo->setText(QApplication::translate("Intervenants", "Undo", 0));
        actionRedo->setText(QApplication::translate("Intervenants", "Redo", 0));
        toolBar->setWindowTitle(QApplication::translate("Intervenants", "toolBar", 0));
        toolBar_2->setWindowTitle(QApplication::translate("Intervenants", "toolBar_2", 0));
        toolBar_3->setWindowTitle(QApplication::translate("Intervenants", "toolBar_3", 0));
    } // retranslateUi

};

namespace Ui {
    class Intervenants: public Ui_Intervenants {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERVENANTS_H
