#include "show_composeretparticiper.h"
#include "ui_show_composeretparticiper.h"

show_composerEtparticiper::show_composerEtparticiper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_composerEtparticiper)
{
    ui->setupUi(this);
    connect_to_DB();
    modele=NULL;

}

show_composerEtparticiper::~show_composerEtparticiper()
{
    delete ui;
}
//ajouter des item dans les combo_box
void show_composerEtparticiper:: read_combo_box(){
    QSqlQuery requete;
    if(ui->stackedWidget->currentIndex()==0){
        requete.prepare("select Titre_Proj from projet");
        requete.exec();
        while(requete.next()){
            ui->comboBox_projet->addItem(requete.value(0).toString());
        }
        requete.prepare("select Designation from tache");
        requete.exec();
        while (requete.next()) {
            ui->comboBox_tache->addItem(requete.value(0).toString());
        }
    }
    else if(ui->stackedWidget->currentIndex()==1){
            requete.prepare("select Designation from tache");
            requete.exec();
            while (requete.next()) {
                ui->comboBox_tache_pour_des_Intervs->addItem(requete.value(0).toString());
            }
            requete.prepare("select Nom_Interv from intervenant");
            requete.exec();
            while (requete.next()) {
                ui->comboBox_Interv_qui_participe->addItem(requete.value(0).toString());
            }
    }
}
//ouvrir le premier page du dialogue
void show_composerEtparticiper::open_fist_Page(){
    ui->stackedWidget->setCurrentIndex(0);
}
//fonction read
void show_composerEtparticiper::Read_composer(){
    QSqlQuery requete;

    if(ui->stackedWidget->currentIndex()==0){
        requete.exec("select * from composer");
        if(modele==NULL){
            modele= new QSqlQueryModel();
        }
        modele->setQuery(std::move(requete));
        modele->setHeaderData(0, Qt::Horizontal, "Référence du projet");
        modele->setHeaderData(1, Qt::Horizontal, "Numéro de tâche");

        ui->tableView_addtaskt_into_project->setModel(modele);
    }else if(ui->stackedWidget->currentIndex()==1){
        requete.exec("select * from participer");
        if(modele==NULL){
            modele= new QSqlQueryModel();
        }
        modele->setQuery(std::move(requete));
        modele->setHeaderData(0, Qt::Horizontal, "Numéro de tâche");
        modele->setHeaderData(1, Qt::Horizontal, "Numéro d'intervenant");
        ui->tableView_add_interv_into_Task->setModel(modele);
    }
}
//ajouter des data dans composer
void show_composerEtparticiper::on_pushButton_add_task_into_project_From_Dialog_clicked()
{
    QString Titre_Proj = ui->comboBox_projet->currentText();
    QString Designation = ui->comboBox_tache->currentText();
    QSqlQuery requete_Ref_Proj;
    QSqlQuery requete_Num_Tache;
    QSqlQuery requete;

    requete_Ref_Proj.prepare("Select Ref_Proj from projet where Titre_Proj = '"+Titre_Proj+"'");
    requete_Ref_Proj.bindValue(":Titre_Proj",Titre_Proj);

    requete_Num_Tache.prepare("select Num_Tache from tache where Designation ='"+Designation+"'");
    requete_Num_Tache.bindValue(":Designation",Designation);


    if(requete_Num_Tache.exec() && requete_Ref_Proj.exec())
    {
        if(requete_Num_Tache.next() && requete_Ref_Proj.next())
        {
            QVariant Num_Tache=requete_Num_Tache.value(0).toString();
            QVariant Ref_Proj=requete_Ref_Proj.value(0).toString();

            requete.prepare("insert into composer (Ref_Proj, Num_Tache) values ( :Ref_Proj, :Num_Tache )");
            requete.bindValue(":Ref_Proj",Ref_Proj);
            requete.bindValue(":Num_Tache",Num_Tache);

            if(requete.exec())
            {
                QMessageBox::information(this, "Envoi vers BD", "Envoi complet");
            }else
            {
                QMessageBox::warning(this,"Erreur","Echec d'envoi !");
            }
        }else
            {
                QMessageBox::warning(this,"Erreur","Impossible de trouver le projet ou la tâche ");
            }
    }else{
        QMessageBox::warning(this,"Erreur","Erreur lors de la recherche ");

    }

    Read_composer();
}
//delete from composer

void show_composerEtparticiper:: on_pushButton_supp_composer_clicked(){
    delete_composer_participer = new update_delete(this);
    delete_composer_participer->open_seventh_page();
    delete_composer_participer->open();
    connect(delete_composer_participer,&QDialog::finished,this,&show_composerEtparticiper::Read_composer);
}


//ouvrir le second page
void show_composerEtparticiper::open_second_Page(){
    ui->stackedWidget->setCurrentIndex(1);
}
//ajouter des data dans participer
void show_composerEtparticiper::on_pushButton_ajouter_un_interv_clicked()
{
    QString Designation = ui->comboBox_tache_pour_des_Intervs->currentText();
    QString Nom_Interv = ui->comboBox_Interv_qui_participe->currentText();
    QSqlQuery requete_Num_Tache;
    QSqlQuery requete_Num_Interv;
    QSqlQuery requete;


    requete_Num_Tache.prepare("select Num_Tache from tache where Designation = '"+Designation+"'");
    requete_Num_Tache.bindValue(":Designation",Designation);

    requete_Num_Interv.prepare("select Num_Interv from intervenant where Nom_Interv ='"+Nom_Interv+"'");
    requete_Num_Interv.bindValue(":Nom_Interv",Nom_Interv);

    if(requete_Num_Tache.exec() && requete_Num_Interv.exec()){
        if(requete_Num_Tache.next() && requete_Num_Interv.next()){
            QVariant Num_Tache=requete_Num_Tache.value(0).toString();
            QVariant Num_Interv=requete_Num_Interv.value(0).toString();

            requete.prepare( "insert into participer (Num_Tache, Num_Interv) values ( :Num_Tache, :Num_Interv )" );
            requete.bindValue(":Num_Tache",Num_Tache);
            requete.bindValue(":Num_Interv",Num_Interv);
            if(requete.exec())
            {
                QMessageBox::information(this, "Envoi vers BD", "Envoi complet");

            }else{

                QMessageBox::warning(this,"Erreur","Echec d'envoi !");
            }
        }else QMessageBox::warning(this,"Erreur","Impossible de trouver la tâche ou l'intervenant ");
   }else {
        QMessageBox::warning(this,"Erreur","Erreur lors de la recherche ");
        }
        Read_composer();

}

//delete from participer
void show_composerEtparticiper::on_pushButton_supp_participer_clicked()
{
    delete_composer_participer = new update_delete(this);
    delete_composer_participer->open_eigth_Page();
    delete_composer_participer->open();
    connect(delete_composer_participer,&QDialog::finished,this,&show_composerEtparticiper::Read_composer);
}

