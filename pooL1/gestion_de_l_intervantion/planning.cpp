#include "planning.h"
#include "ui_planning.h"
#include<QMessageBox>

planning::planning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planning)
{
    ui->setupUi(this);
    connect_to_DB();

}

planning::~planning()
{
    delete ui;
}
void planning::open_first_page()
{
ui->stackedWidget->setCurrentIndex(0);
}

void planning::on_calendarWidget_clicked(const QDate &date)
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->label->setText("Liste des intervenants occupés le:" + date.toString("yyyy-dd-MM"));
    if(ui->stackedWidget->currentIndex()==1){
        QSqlQuery requete;QString current_dt;
        current_dt=date.toString("yyyy-dd-MM");
        requete.prepare("select Nom_Interv from intervenant i join participer par on par.Num_Interv = i.Num_Interv join tache ta on  ta.Num_Tache = par.Num_Tache where '"+current_dt+"' between ta.Date_Debut_T and ta.Date_Fin_T");
        requete.exec();
        while(requete.next()){
            ui->listWidget->addItem(requete.value(0).toString());
        }
    }
}


void planning::on_pushButton_search_clicked()
{
    QSqlQuery requete;

    QString current_dt=ui->calendarWidget->selectedDate().toString("yyyy-dd-MM");;
    QString name=ui->lineEdit_name_to_search->text();

            requete.prepare("Select Nom_Interv  from intervenant i join participer par on par.Num_Interv = i.Num_Interv join tache ta on  ta.Num_Tache = par.Num_Tache where ('"+current_dt+"' between ta.Date_Debut_T and ta.Date_Fin_T) and  i.Nom_Interv like '"+name+"'");
            requete.exec();
            qDebug()<<"Last requete:"<<requete.lastQuery();
            qDebug()<<"Last error:"<<requete.lastError();
            if(requete.value(0).toString()==NULL)
            {
                ui->listWidget->clear();
                while(requete.next()){
                    ui->listWidget->addItem(requete.value(0).toString());
                }
           }

}


void planning::on_pushButton_back_to_calendar_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

