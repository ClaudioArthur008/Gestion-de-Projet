/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionProjet;
    QAction *actionTaches;
    QAction *actionIntervenant;
    QAction *actionBill;
    QAction *actionHome;
    QAction *actionGestion_de_Projet;
    QAction *actionCreate_data;
    QAction *actionRead;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *planning;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *ref_p;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *title_p;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *date_d;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *date_f;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *tarif;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *insertbtn;
    QPushButton *updatebtn;
    QPushButton *savebtn;
    QPushButton *deletebtn;
    QWidget *page_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1126, 680);
        MainWindow->setMinimumSize(QSize(80, 0));
        QFont font;
        font.setPointSize(8);
        MainWindow->setFont(font);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(239, 239, 239);"));
        MainWindow->setIconSize(QSize(30, 30));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        actionProjet = new QAction(MainWindow);
        actionProjet->setObjectName(QStringLiteral("actionProjet"));
        actionProjet->setCheckable(false);
        actionProjet->setChecked(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/project.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionProjet->setIcon(icon);
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        actionProjet->setFont(font1);
        actionProjet->setPriority(QAction::NormalPriority);
        actionTaches = new QAction(MainWindow);
        actionTaches->setObjectName(QStringLiteral("actionTaches"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/task.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionTaches->setIcon(icon1);
        actionTaches->setFont(font1);
        actionIntervenant = new QAction(MainWindow);
        actionIntervenant->setObjectName(QStringLiteral("actionIntervenant"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/intervenant.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionIntervenant->setIcon(icon2);
        actionIntervenant->setFont(font1);
        actionBill = new QAction(MainWindow);
        actionBill->setObjectName(QStringLiteral("actionBill"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/facture.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionBill->setIcon(icon3);
        actionBill->setFont(font1);
        actionBill->setIconVisibleInMenu(true);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        actionHome->setCheckable(false);
        actionHome->setChecked(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/home.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon4);
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStyleStrategy(QFont::PreferDefault);
        actionHome->setFont(font2);
        actionGestion_de_Projet = new QAction(MainWindow);
        actionGestion_de_Projet->setObjectName(QStringLiteral("actionGestion_de_Projet"));
        actionGestion_de_Projet->setEnabled(false);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        actionGestion_de_Projet->setFont(font3);
        actionGestion_de_Projet->setPriority(QAction::NormalPriority);
        actionCreate_data = new QAction(MainWindow);
        actionCreate_data->setObjectName(QStringLiteral("actionCreate_data"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_data->setIcon(icon5);
        QPalette palette;
        actionCreate_data->setProperty("Palette", QVariant(palette));
        actionRead = new QAction(MainWindow);
        actionRead->setObjectName(QStringLiteral("actionRead"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/read.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRead->setIcon(icon6);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/copy.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/cut.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon8);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/paste.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/undo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/redo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon11);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon12);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/about.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon13);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 361, 81));
        QFont font4;
        font4.setFamily(QStringLiteral("Gabriola"));
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 80, 331, 31));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(321, 161, 651, 381));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        planning = new QPushButton(layoutWidget);
        planning->setObjectName(QStringLiteral("planning"));
        planning->setMaximumSize(QSize(300, 80));
        planning->setFont(font4);
        planning->setCursor(QCursor(Qt::PointingHandCursor));
        planning->setLayoutDirection(Qt::LeftToRight);
        planning->setStyleSheet(QLatin1String("background-color: rgb(206, 31, 19);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(206, 31, 19);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/calendar.ico"), QSize(), QIcon::Normal, QIcon::Off);
        planning->setIcon(icon14);
        planning->setIconSize(QSize(50, 50));
        planning->setCheckable(false);
        planning->setDefault(false);
        planning->setFlat(false);

        horizontalLayout_10->addWidget(planning);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(300, 80));
        pushButton_4->setFont(font4);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 64, 194);\n"
"border-color:  rgb(64, 64, 194);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));

        horizontalLayout_10->addWidget(pushButton_4);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(190, 80));
        pushButton_3->setFont(font4);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 140, 0);\n"
"border-color:   rgb(0, 140, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));

        horizontalLayout_8->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(190, 80));
        pushButton_6->setFont(font4);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setAutoFillBackground(false);
        pushButton_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(189, 185, 55);\n"
"border-color:   rgb(189, 185, 55);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
"\n"
" "));

        horizontalLayout_8->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(190, 80));
        pushButton_7->setFont(font4);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setAutoFillBackground(false);
        pushButton_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(112, 0, 84);\n"
"border-color:   rgb(112, 0, 84);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
"\n"
" "));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icone_for_mainToolBar/icone/settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon15);
        pushButton_7->setIconSize(QSize(50, 50));

        horizontalLayout_8->addWidget(pushButton_7);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(300, 80));
        pushButton_2->setFont(font4);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(56, 113, 170);\n"
"color: rgb(255, 255, 255);\n"
"border-color:  rgb(56, 113, 170);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));

        horizontalLayout_9->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(300, 80));
        pushButton_5->setFont(font4);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(216, 144, 0);\n"
"border-color:   rgb(216, 144, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius: 5px;\n"
""));

        horizontalLayout_9->addWidget(pushButton_5);


        verticalLayout_4->addLayout(horizontalLayout_9);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font4);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(page_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(200, 16777215));

        verticalLayout_3->addWidget(label_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tableWidget = new QTableWidget(page_2);
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
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        tableWidget->setFont(font5);

        horizontalLayout_7->addWidget(tableWidget);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(500, 16777215));
        QFont font6;
        font6.setFamily(QStringLiteral("MingLiU_HKSCS-ExtB"));
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        groupBox->setFont(font6);
        groupBox->setStyleSheet(QStringLiteral("border-color: qlineargradient(spread:pad, x1:0.783, y1:0.596591, x2:1, y2:0, stop:1 rgba(14, 48, 71, 255));"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget_2 = new QWidget(splitter_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font7;
        font7.setPointSize(9);
        font7.setBold(true);
        font7.setWeight(75);
        label_2->setFont(font7);
        label_2->setLineWidth(2);
        label_2->setMidLineWidth(2);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        ref_p = new QLineEdit(layoutWidget_2);
        ref_p->setObjectName(QStringLiteral("ref_p"));

        horizontalLayout->addWidget(ref_p);

        splitter_2->addWidget(layoutWidget_2);
        horizontalLayoutWidget_2 = new QWidget(splitter_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font7);
        label_3->setLineWidth(2);
        label_3->setMidLineWidth(2);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        title_p = new QLineEdit(horizontalLayoutWidget_2);
        title_p->setObjectName(QStringLiteral("title_p"));

        horizontalLayout_2->addWidget(title_p);

        splitter_2->addWidget(horizontalLayoutWidget_2);
        layoutWidget_3 = new QWidget(splitter_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font7);
        label_4->setLineWidth(2);
        label_4->setMidLineWidth(2);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        date_d = new QLineEdit(layoutWidget_3);
        date_d->setObjectName(QStringLiteral("date_d"));

        horizontalLayout_3->addWidget(date_d);

        splitter_2->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font7);
        label_5->setLineWidth(2);
        label_5->setMidLineWidth(2);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        date_f = new QLineEdit(layoutWidget_4);
        date_f->setObjectName(QStringLiteral("date_f"));

        horizontalLayout_4->addWidget(date_f);

        splitter_2->addWidget(layoutWidget_4);
        layoutWidget_5 = new QWidget(splitter_2);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font7);
        label_6->setLineWidth(2);
        label_6->setMidLineWidth(2);

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(15, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        tarif = new QLineEdit(layoutWidget_5);
        tarif->setObjectName(QStringLiteral("tarif"));

        horizontalLayout_5->addWidget(tarif);

        splitter_2->addWidget(layoutWidget_5);

        verticalLayout_2->addWidget(splitter_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        insertbtn = new QPushButton(groupBox);
        insertbtn->setObjectName(QStringLiteral("insertbtn"));
        insertbtn->setMinimumSize(QSize(100, 30));
        insertbtn->setMaximumSize(QSize(100, 45));
        insertbtn->setFont(font7);
        insertbtn->setCursor(QCursor(Qt::PointingHandCursor));
        insertbtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(13, 83, 234);\n"
"\n"
"border-color:  rgb(13, 83, 234);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout_6->addWidget(insertbtn);

        updatebtn = new QPushButton(groupBox);
        updatebtn->setObjectName(QStringLiteral("updatebtn"));
        updatebtn->setMinimumSize(QSize(100, 30));
        updatebtn->setMaximumSize(QSize(100, 45));
        updatebtn->setFont(font7);
        updatebtn->setCursor(QCursor(Qt::PointingHandCursor));
        updatebtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(13, 83, 234);\n"
"border-color:  rgb(13, 83, 234);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout_6->addWidget(updatebtn);

        savebtn = new QPushButton(groupBox);
        savebtn->setObjectName(QStringLiteral("savebtn"));
        savebtn->setMinimumSize(QSize(100, 30));
        savebtn->setMaximumSize(QSize(100, 45));
        savebtn->setFont(font7);
        savebtn->setCursor(QCursor(Qt::PointingHandCursor));
        savebtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(17, 150, 7);\n"
"border-color: rgb(17, 150, 7);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout_6->addWidget(savebtn);

        deletebtn = new QPushButton(groupBox);
        deletebtn->setObjectName(QStringLiteral("deletebtn"));
        deletebtn->setMinimumSize(QSize(100, 30));
        deletebtn->setMaximumSize(QSize(100, 45));
        deletebtn->setFont(font7);
        deletebtn->setCursor(QCursor(Qt::PointingHandCursor));
        deletebtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(176, 0, 0);\n"
"border-color: rgb(176, 0, 0);\n"
"border-width:1px;\n"
"border-style:solid;\n"
"border-radius:3px;"));

        horizontalLayout_6->addWidget(deletebtn);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_7->addWidget(groupBox);


        verticalLayout_3->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget->addWidget(page_3);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1126, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        mainToolBar->setMinimumSize(QSize(0, 0));
        QPalette palette1;
        QBrush brush(QColor(217, 217, 217, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 71, 104, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        mainToolBar->setPalette(palette1);
        mainToolBar->setCursor(QCursor(Qt::PointingHandCursor));
        mainToolBar->setMouseTracking(false);
        mainToolBar->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 71, 104);\n"
"color: rgb(217, 217, 217);"));
        mainToolBar->setMovable(false);
        mainToolBar->setIconSize(QSize(50, 50));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QFont font8;
        font8.setPointSize(12);
        font8.setBold(false);
        font8.setWeight(50);
        toolBar->setFont(font8);
        toolBar->setStyleSheet(QLatin1String("background-color: rgb(0, 76, 111);\n"
"color: rgb(245, 245, 245);"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        toolBar_2->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        MainWindow->insertToolBarBreak(toolBar_2);

        mainToolBar->addAction(actionHome);
        mainToolBar->addAction(actionProjet);
        mainToolBar->addAction(actionTaches);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionIntervenant);
        mainToolBar->addSeparator();
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBill);
        toolBar->addAction(actionGestion_de_Projet);
        toolBar->addSeparator();
        toolBar_2->addAction(actionCreate_data);
        toolBar_2->addAction(actionRead);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionCut);
        toolBar_2->addAction(actionPaste);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionUndo);
        toolBar_2->addAction(actionRedo);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionHelp);
        toolBar_2->addAction(actionAbout);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QString());
        actionProjet->setText(QApplication::translate("MainWindow", "Project", 0));
        actionTaches->setText(QApplication::translate("MainWindow", "Task", 0));
        actionIntervenant->setText(QApplication::translate("MainWindow", "Intervenant", 0));
        actionBill->setText(QApplication::translate("MainWindow", "Bill", 0));
        actionHome->setText(QApplication::translate("MainWindow", "Home", 0));
        actionGestion_de_Projet->setText(QApplication::translate("MainWindow", "GESTION DE PROJET", 0));
        actionCreate_data->setText(QApplication::translate("MainWindow", "Create data", 0));
        actionRead->setText(QApplication::translate("MainWindow", "Read data", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        label->setText(QApplication::translate("MainWindow", "<h1>Let' s manage your data!</h1>", 0));
        label_7->setText(QApplication::translate("MainWindow", "Here are some shortees to acces some features of this software :", 0));
        planning->setText(QApplication::translate("MainWindow", "Planing general", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Setting", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Setting", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Setting", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", 0));
        label_8->setText(QApplication::translate("MainWindow", "Back up your data with us!!!", 0));
        label_9->setText(QApplication::translate("MainWindow", "<ol style=\"list-style-type:upper-roman;\">\n"
"      <li>\n"
"	 To <span style=\"color:blue;font-weight:bold; \"> insert<span> 		data : \n"
"      </li>\n"
"	\n"
"</ol>\n"
"<p>\n"
"      <ol>\n"
"	<li>Click the button insert</li>\n"
"	<li>Fill out the form</li>\n"
"	<li>Click Save</li>\n"
"     </ol>\n"
"</p> <br>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nouvelle colonne", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Titre Proj", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Date debut P", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Date fin P", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Tarif par J", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Manage your contents", 0));
        label_2->setText(QApplication::translate("MainWindow", "Reference du Projet : ", 0));
        label_3->setText(QApplication::translate("MainWindow", " Titre du Projet : ", 0));
        label_4->setText(QApplication::translate("MainWindow", "Date debut du Projet : ", 0));
        label_5->setText(QApplication::translate("MainWindow", "Date fin du Projet : ", 0));
        label_6->setText(QApplication::translate("MainWindow", "Tarif par jour :", 0));
        insertbtn->setText(QApplication::translate("MainWindow", "INSERT ", 0));
        updatebtn->setText(QApplication::translate("MainWindow", "UPDATE", 0));
        savebtn->setText(QApplication::translate("MainWindow", "SAVE", 0));
        deletebtn->setText(QApplication::translate("MainWindow", "DELETE", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
