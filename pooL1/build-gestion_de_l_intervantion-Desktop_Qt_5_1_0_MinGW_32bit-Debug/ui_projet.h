/********************************************************************************
** Form generated from reading UI file 'projet.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJET_H
#define UI_PROJET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projet
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
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *ref_p;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *title_p;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *date_d;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *date_f;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *tarif;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *insertbtn;
    QPushButton *updatebtn;
    QPushButton *savebtn;
    QPushButton *deletebtn;
    QMenuBar *menubar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QStatusBar *statusBar;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *projet)
    {
        if (projet->objectName().isEmpty())
            projet->setObjectName(QStringLiteral("projet"));
        projet->resize(1017, 736);
        projet->setAutoFillBackground(true);
        projet->setAnimated(false);
        actionProjet = new QAction(projet);
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
        actionTaches = new QAction(projet);
        actionTaches->setObjectName(QStringLiteral("actionTaches"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/task.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionTaches->setIcon(icon1);
        actionTaches->setFont(font);
        actionIntervenant = new QAction(projet);
        actionIntervenant->setObjectName(QStringLiteral("actionIntervenant"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/intervenant.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionIntervenant->setIcon(icon2);
        actionIntervenant->setFont(font);
        actionFacture = new QAction(projet);
        actionFacture->setObjectName(QStringLiteral("actionFacture"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/facture.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionFacture->setIcon(icon3);
        actionFacture->setFont(font);
        actionFacture->setIconVisibleInMenu(true);
        actionHome = new QAction(projet);
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
        actionGestion_de_Projet = new QAction(projet);
        actionGestion_de_Projet->setObjectName(QStringLiteral("actionGestion_de_Projet"));
        actionGestion_de_Projet->setEnabled(false);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        actionGestion_de_Projet->setFont(font2);
        actionGestion_de_Projet->setPriority(QAction::NormalPriority);
        actionCreate_data = new QAction(projet);
        actionCreate_data->setObjectName(QStringLiteral("actionCreate_data"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_data->setIcon(icon5);
        actionRead = new QAction(projet);
        actionRead->setObjectName(QStringLiteral("actionRead"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/read.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRead->setIcon(icon6);
        actionCopy = new QAction(projet);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/copy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionCut = new QAction(projet);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/cut.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionPaste = new QAction(projet);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/paste.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionUndo = new QAction(projet);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/undo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionRedo = new QAction(projet);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/redo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon11);
        centralwidget = new QWidget(projet);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font3;
        font3.setFamily(QStringLiteral("Bahnschrift SemiBold SemiConden"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        label->setFont(font3);
        label->setAutoFillBackground(true);
        label->setLineWidth(20);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(15);
        label->setIndent(1);

        verticalLayout_2->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(213, 213, 213));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(213, 213, 213));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(213, 213, 213));
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem3->setBackground(QColor(213, 213, 213));
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem4->setBackground(QColor(213, 213, 213));
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        tableWidget->setFont(font4);

        horizontalLayout_7->addWidget(tableWidget);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(500, 16777215));
        QFont font5;
        font5.setFamily(QStringLiteral("MingLiU_HKSCS-ExtB"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        groupBox->setFont(font5);
        groupBox->setStyleSheet(QStringLiteral("border-color: qlineargradient(spread:pad, x1:0.783, y1:0.596591, x2:1, y2:0, stop:1 rgba(14, 48, 71, 255));"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(true);
        font6.setWeight(75);
        label_2->setFont(font6);
        label_2->setLineWidth(2);
        label_2->setMidLineWidth(2);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        ref_p = new QLineEdit(layoutWidget);
        ref_p->setObjectName(QStringLiteral("ref_p"));

        horizontalLayout->addWidget(ref_p);

        splitter_2->addWidget(layoutWidget);
        horizontalLayoutWidget_2 = new QWidget(splitter_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font6);
        label_3->setLineWidth(2);
        label_3->setMidLineWidth(2);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        title_p = new QLineEdit(horizontalLayoutWidget_2);
        title_p->setObjectName(QStringLiteral("title_p"));

        horizontalLayout_2->addWidget(title_p);

        splitter_2->addWidget(horizontalLayoutWidget_2);
        layoutWidget1 = new QWidget(splitter_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font6);
        label_4->setLineWidth(2);
        label_4->setMidLineWidth(2);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        date_d = new QLineEdit(layoutWidget1);
        date_d->setObjectName(QStringLiteral("date_d"));

        horizontalLayout_3->addWidget(date_d);

        splitter_2->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font6);
        label_5->setLineWidth(2);
        label_5->setMidLineWidth(2);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        date_f = new QLineEdit(layoutWidget2);
        date_f->setObjectName(QStringLiteral("date_f"));

        horizontalLayout_4->addWidget(date_f);

        splitter_2->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font6);
        label_6->setLineWidth(2);
        label_6->setMidLineWidth(2);

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(15, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        tarif = new QLineEdit(layoutWidget3);
        tarif->setObjectName(QStringLiteral("tarif"));

        horizontalLayout_5->addWidget(tarif);

        splitter_2->addWidget(layoutWidget3);

        verticalLayout->addWidget(splitter_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        insertbtn = new QPushButton(groupBox);
        insertbtn->setObjectName(QStringLiteral("insertbtn"));
        insertbtn->setMaximumSize(QSize(100, 45));
        insertbtn->setFont(font6);
        insertbtn->setCursor(QCursor(Qt::PointingHandCursor));
        insertbtn->setStyleSheet(QLatin1String("color: rgb(206, 206, 206);\n"
"background-color: rgb(13, 83, 234);\n"
"\n"
""));

        horizontalLayout_6->addWidget(insertbtn);

        updatebtn = new QPushButton(groupBox);
        updatebtn->setObjectName(QStringLiteral("updatebtn"));
        updatebtn->setMaximumSize(QSize(100, 45));
        updatebtn->setFont(font6);
        updatebtn->setCursor(QCursor(Qt::PointingHandCursor));
        updatebtn->setStyleSheet(QLatin1String("color: rgb(206, 206, 206);\n"
"background-color: rgb(13, 83, 234);"));

        horizontalLayout_6->addWidget(updatebtn);

        savebtn = new QPushButton(groupBox);
        savebtn->setObjectName(QStringLiteral("savebtn"));
        savebtn->setMaximumSize(QSize(100, 45));
        savebtn->setFont(font6);
        savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        savebtn->setStyleSheet(QLatin1String("color: rgb(206, 206, 206);\n"
"background-color: rgb(17, 150, 7);"));

        horizontalLayout_6->addWidget(savebtn);

        deletebtn = new QPushButton(groupBox);
        deletebtn->setObjectName(QStringLiteral("deletebtn"));
        deletebtn->setMaximumSize(QSize(100, 45));
        deletebtn->setFont(font6);
        deletebtn->setCursor(QCursor(Qt::PointingHandCursor));
        deletebtn->setStyleSheet(QLatin1String("color: rgb(206, 206, 206);\n"
"background-color: rgb(176, 0, 0);"));

        horizontalLayout_6->addWidget(deletebtn);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        projet->setCentralWidget(centralwidget);
        menubar = new QMenuBar(projet);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1017, 21));
        projet->setMenuBar(menubar);
        toolBar = new QToolBar(projet);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 71, 104);\n"
"color: rgb(217, 217, 217);"));
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(50, 50));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        projet->addToolBar(Qt::LeftToolBarArea, toolBar);
        toolBar_2 = new QToolBar(projet);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setStyleSheet(QLatin1String("background-color: rgb(0, 71, 104);\n"
"color: rgb(217, 217, 217);"));
        toolBar_2->setMovable(false);
        toolBar_2->setToolButtonStyle(Qt::ToolButtonTextOnly);
        projet->addToolBar(Qt::TopToolBarArea, toolBar_2);
        statusBar = new QStatusBar(projet);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        projet->setStatusBar(statusBar);
        toolBar_3 = new QToolBar(projet);
        toolBar_3->setObjectName(QStringLiteral("toolBar_3"));
        toolBar_3->setMovable(false);
        toolBar_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        projet->addToolBar(Qt::TopToolBarArea, toolBar_3);
        projet->insertToolBarBreak(toolBar_3);

        toolBar->addAction(actionHome);
        toolBar->addAction(actionProjet);
        toolBar->addAction(actionTaches);
        toolBar->addAction(actionIntervenant);
        toolBar->addAction(actionFacture);
        toolBar_2->addAction(actionGestion_de_Projet);
        toolBar_2->addSeparator();
        toolBar_3->addAction(actionCreate_data);
        toolBar_3->addAction(actionRead);
        toolBar_3->addSeparator();
        toolBar_3->addAction(actionCopy);
        toolBar_3->addAction(actionCut);
        toolBar_3->addAction(actionPaste);
        toolBar_3->addSeparator();
        toolBar_3->addAction(actionUndo);
        toolBar_3->addAction(actionRedo);

        retranslateUi(projet);

        QMetaObject::connectSlotsByName(projet);
    } // setupUi

    void retranslateUi(QMainWindow *projet)
    {
        projet->setWindowTitle(QApplication::translate("projet", "MainWindow", 0));
        actionProjet->setText(QApplication::translate("projet", "Projet", 0));
        actionTaches->setText(QApplication::translate("projet", "Taches", 0));
        actionIntervenant->setText(QApplication::translate("projet", "Intervenant", 0));
        actionFacture->setText(QApplication::translate("projet", "Facture", 0));
        actionHome->setText(QApplication::translate("projet", "Home", 0));
        actionGestion_de_Projet->setText(QApplication::translate("projet", "GESTION DE PROJET", 0));
        actionCreate_data->setText(QApplication::translate("projet", "Create data", 0));
        actionRead->setText(QApplication::translate("projet", "Read data", 0));
        actionCopy->setText(QApplication::translate("projet", "Copy", 0));
        actionCut->setText(QApplication::translate("projet", "Cut", 0));
        actionPaste->setText(QApplication::translate("projet", "Paste", 0));
        actionUndo->setText(QApplication::translate("projet", "Undo", 0));
        actionRedo->setText(QApplication::translate("projet", "Redo", 0));
        label->setText(QApplication::translate("projet", "<html><head/><body><p>LISTE DES PROJETS A FAIRE :</p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("projet", "Nouvelle colonne", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("projet", "Titre Proj", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("projet", "Date debut P", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("projet", "Date fin P", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("projet", "Tarif par J", 0));
        groupBox->setTitle(QApplication::translate("projet", "GERER VOTRE CONTENU", 0));
        label_2->setText(QApplication::translate("projet", "Reference du Projet : ", 0));
        label_3->setText(QApplication::translate("projet", " Titre du Projet : ", 0));
        label_4->setText(QApplication::translate("projet", "Date debut du Projet : ", 0));
        label_5->setText(QApplication::translate("projet", "Date fin du Projet : ", 0));
        label_6->setText(QApplication::translate("projet", "Tarif par jour :", 0));
        insertbtn->setText(QApplication::translate("projet", "INSERT ", 0));
        updatebtn->setText(QApplication::translate("projet", "UPDATE", 0));
        savebtn->setText(QApplication::translate("projet", "SAVE", 0));
        deletebtn->setText(QApplication::translate("projet", "DELETE", 0));
        toolBar->setWindowTitle(QApplication::translate("projet", "toolBar", 0));
        toolBar_2->setWindowTitle(QApplication::translate("projet", "toolBar_2", 0));
        toolBar_3->setWindowTitle(QApplication::translate("projet", "toolBar_3", 0));
    } // retranslateUi

};

namespace Ui {
    class projet: public Ui_projet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJET_H
