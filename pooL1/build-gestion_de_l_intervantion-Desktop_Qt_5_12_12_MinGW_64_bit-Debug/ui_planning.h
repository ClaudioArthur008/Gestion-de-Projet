/********************************************************************************
** Form generated from reading UI file 'planning.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNING_H
#define UI_PLANNING_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planning
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QCalendarWidget *calendarWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back_to_calendar;
    QLabel *label_4;
    QLineEdit *lineEdit_name_to_search;
    QPushButton *pushButton_search;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *planning)
    {
        if (planning->objectName().isEmpty())
            planning->setObjectName(QString::fromUtf8("planning"));
        planning->resize(500, 480);
        planning->setMaximumSize(QSize(500, 16777215));
        verticalLayout = new QVBoxLayout(planning);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(planning);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Gabriola"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        calendarWidget = new QCalendarWidget(page);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setMinimumSize(QSize(0, 300));

        verticalLayout_3->addWidget(calendarWidget);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_back_to_calendar = new QPushButton(page_2);
        pushButton_back_to_calendar->setObjectName(QString::fromUtf8("pushButton_back_to_calendar"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_back_to_calendar->sizePolicy().hasHeightForWidth());
        pushButton_back_to_calendar->setSizePolicy(sizePolicy);
        pushButton_back_to_calendar->setMinimumSize(QSize(40, 30));
        pushButton_back_to_calendar->setMaximumSize(QSize(40, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icone_for_mainToolBar/icone/back_to.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_back_to_calendar->setIcon(icon);
        pushButton_back_to_calendar->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButton_back_to_calendar);

        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label_4);

        lineEdit_name_to_search = new QLineEdit(page_2);
        lineEdit_name_to_search->setObjectName(QString::fromUtf8("lineEdit_name_to_search"));

        horizontalLayout->addWidget(lineEdit_name_to_search);

        pushButton_search = new QPushButton(page_2);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));

        horizontalLayout->addWidget(pushButton_search);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        listWidget = new QListWidget(page_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(0, 350));

        verticalLayout_2->addWidget(listWidget);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(planning);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(planning);
    } // setupUi

    void retranslateUi(QDialog *planning)
    {
        planning->setWindowTitle(QApplication::translate("planning", "Dialog", nullptr));
        label_2->setText(QApplication::translate("planning", "Planning des intervenants :", nullptr));
        label_3->setText(QApplication::translate("planning", "Pour voir les listes des intervenants  occup\303\251s pour une date pr\303\251cise, veuillez cliquer\n"
" sur une date .", nullptr));
        pushButton_back_to_calendar->setText(QString());
        label_4->setText(QApplication::translate("planning", "Nom \303\240 rechercher :", nullptr));
        pushButton_search->setText(QApplication::translate("planning", "Recherche", nullptr));
        label->setText(QApplication::translate("planning", "text Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planning: public Ui_planning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNING_H
