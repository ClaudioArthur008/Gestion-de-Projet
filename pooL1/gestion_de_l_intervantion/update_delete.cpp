#include "update_delete.h"
#include "ui_update_delete.h"

update_delete::update_delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_delete)
{
    ui->setupUi(this);

}

update_delete::~update_delete()
{
    delete ui;
}

//open first page get the proct's id you want to delete and confirm your complaint
void update_delete:: open_firstpage(){
 ui->stackedWidget->setCurrentIndex(0);
}

void update_delete::on_pushButton_envoyez_clicked()
{   if(ui->lineEdit_Ref_Proj->text()==NULL) QMessageBox::warning(this,"Warning", "La reférence ne peut pas être vide ! \n Veuillez saisir la reférence du Projet que vous voulez supprimer");
   else{
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation de la suppression", "Voulez-vous vraiment supprimer ces données?", QMessageBox::Yes | QMessageBox::No);
            if(reply == QMessageBox:: Yes)
                   {
                        QSqlQuery requete;
                        requete.prepare("DELETE FROM projet where Ref_Proj = " + ui->lineEdit_Ref_Proj->text());
                         requete.exec();
                    }else;
                    close();
    }
}

//open second page get the task's id you want to delete and confirm your complaint

void update_delete::open_secondpage(){
    ui->stackedWidget->setCurrentIndex(1);
}

void update_delete::on_pushButton_envoyez_tache_clicked()
{
    if(ui->lineEdit_tache->text()==NULL) QMessageBox::warning(this,"Warning", "Le numéro de tâche ne peut pas être vide ! \n Veuillez saisir le numéro de tâche que vous voulez supprimer");
       else{
            QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation de la suppression", "Voulez-vous vraiment supprimer ces données?", QMessageBox::Yes | QMessageBox::No);
                if(reply == QMessageBox:: Yes)
                       {
                            QSqlQuery requete;
                            requete.prepare("DELETE FROM tache where Num_Tache = " + ui->lineEdit_tache->text());
                             requete.exec();

                        }else;
                        close();
        }
}


//open third page get the Empyee's id you want to delete and confirm your complaint

void update_delete::open_thirdpage(){
    ui->stackedWidget->setCurrentIndex(2);
}

void update_delete::on_pushButton_envoyez_Interv_clicked()
{
    if(ui->lineEdit_Interv->text()==NULL) QMessageBox::warning(this,"Warning", "Le numéro de l'intervenant  ne peut pas être vide ! \n Veuillez saisir le numéro de l'intervenant que vous voulez supprimer");
       else{
            QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation de la suppression", "Voulez-vous vraiment supprimer ces données?", QMessageBox::Yes | QMessageBox::No);
                if(reply == QMessageBox:: Yes)
                       {
                            QSqlQuery requete;
                             requete.prepare("DELETE FROM intervenant where Num_Interv = " + ui->lineEdit_Interv->text());
                             requete.exec();

                        }else;
                        close();
        }
}

//open fourth page  and get the project's id you want to update

void update_delete::open_fourthpage(){
    ui->stackedWidget->setCurrentIndex(3);
}
void update_delete::on_pushButton_send_Ref_Proj_Toupdate_clicked()
{
    Ref_Proj_toupdate = ui->lineEdit_Ref_Proj_toupdate->text();
    close();
}
QString update_delete::get_Ref_Proj_Toupdate(){
    return Ref_Proj_toupdate;
}

//open fifth page  and get the task's id you want to update

void update_delete::open_fifthpage(){
    ui->stackedWidget->setCurrentIndex(4);
}
void update_delete::on_pushButton_send_Num_Tache_Toupdate_clicked()
{
 Num_Tache_toupdate = ui->lineEdit_Num_Tache_Toupdate->text();
 close();
}
QString update_delete::get_Num_Tache_Toupdate(){
    return Num_Tache_toupdate;
}

//open sixth page  and get the employee's id you want to update

void update_delete::open_sixthpage(){
    ui->stackedWidget->setCurrentIndex(5);
}

void update_delete::on_pushButton_send_Num_Tache_Toupdate_2_clicked()
{
    Num_Interv_toupdate=ui->lineEdit_Num_Interv_Toupdate->text();
    close();
}
QString update_delete::get_Num_Interv_Toupdate(){
    return Num_Interv_toupdate;
}
//open seventh page
void update_delete::open_seventh_page(){
    ui->stackedWidget->setCurrentIndex(6);
}

void update_delete::on_pushButton_confrirmation_Supp_Composer_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation de la suppression", "Voulez-vous vraiment supprimer ces données?", QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox:: Yes)
               {
            QSqlQuery requete;
            requete.prepare("delete from composer where Ref_Proj='"+ui->lineEdit_Ref_Proj_to_delete_composer->text() + "'and Num_Tache='"+ ui->lineEdit_Num_tache_to_delete_composer->text()+"'");
            requete.exec();
        }
        else;
        close();
}

//open eigth page
void update_delete::open_eigth_Page(){
    ui->stackedWidget->setCurrentIndex(7);
}
void update_delete::on_pushButton_delete_from_participer_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Confirmation de la suppression", "Voulez-vous vraiment supprimer ces données?", QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox:: Yes)
               {
            QSqlQuery requete;
            requete.prepare("delete from participer where Num_Tache='"+ui->lineEdit_Num_tache_to_delete_participer->text() + "'and Num_Interv='"+ ui->lineEdit_Num_Interv_to_delete_participer->text()+"'");
            requete.exec();
        }
        else;
        close();
}

