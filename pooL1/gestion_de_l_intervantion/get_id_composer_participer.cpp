#include "get_id_composer_participer.h"
#include "ui_get_id_composer_participer.h"

get_id_composer_participer::get_id_composer_participer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::get_id_composer_participer)
{
    ui->setupUi(this);
    connect_to_DB();
    modele=NULL;
}


get_id_composer_participer::~get_id_composer_participer()
{
    delete ui;
}

void get_id_composer_participer::open_first_page(){
    ui->stackedWidget->setCurrentIndex(0);
}
//afficher les taches qui sont inclus dans un projet
void get_id_composer_participer::on_pushButton_afficher_les_taches_inclus_dans_un_Projet_clicked()
{
    QSqlQuery requete;
    requete.exec("select ta.Num_Tache, ta.Designation, ta.Date_Debut_T, ta.Date_Fin_T, ta.CI from tache ta join composer c on c.Num_Tache = ta.Num_Tache join projet p on p.Ref_Proj = c.Ref_Proj where p.Ref_Proj ="+ui->lineEdit_Ref_Proj_pour_afficher_ses_taches->text());
    if(modele==NULL){
        modele= new QSqlQueryModel();
    }
    modele->setQuery(std::move(requete));
    modele->setHeaderData(0, Qt::Horizontal, "Numéro ");
    modele->setHeaderData(1, Qt::Horizontal, "Désignation");
    modele->setHeaderData(2, Qt::Horizontal, "Date de Debut");
    modele->setHeaderData(3, Qt::Horizontal, "Date de Fin");
    modele->setHeaderData(4, Qt::Horizontal, "Coût d'intervention");
    ui->tableView->setModel(modele);
}

//open second page
void get_id_composer_participer::open_second_page(){
    ui->stackedWidget->setCurrentIndex(1);
}


//afficher les projet qui inclusent des taches
void get_id_composer_participer::on_pushButton_2_clicked()
{
    QSqlQuery requete;
    requete.exec("select p.Ref_Proj, p.Titre_Proj, p.Date_Debut_P, p.Date_Fin_P, p.Tarif_par_J from projet p join composer c on c.Ref_Proj = p.Ref_Proj join tache ta on  c.Num_Tache = ta.Num_Tache where ta.Num_Tache ="+ ui->lineEdit_2->text());
    if(modele==NULL){
        modele= new QSqlQueryModel();
    }
    modele->setQuery(std::move(requete));
    modele->setHeaderData(0, Qt::Horizontal, "Référence ");
    modele->setHeaderData(1, Qt::Horizontal, "Titre");
    modele->setHeaderData(2, Qt::Horizontal, "Date de Debut");
    modele->setHeaderData(3, Qt::Horizontal, "Date de Fin");
    modele->setHeaderData(4, Qt::Horizontal, "Tarif par jour");
    ui->tableView_2->setModel(modele);
}

//open third page
void get_id_composer_participer::open_third_page(){
    ui->stackedWidget->setCurrentIndex(3);
}

//afficher les listes des intervenants assigner par une tache
void get_id_composer_participer::on_pushButton_3_clicked()
{
    QSqlQuery requete;
    requete.exec("select i.Num_Interv, i.Nom_Interv, i.Specialite from intervenant i join participer par on par.Num_Interv = i.Num_Interv join tache ta on ta.Num_Tache = par.Num_Tache where ta.Num_Tache="+ui->lineEdit_3->text());
    if(modele==NULL){
        modele= new QSqlQueryModel();
    }
    modele->setQuery(std::move(requete));
    modele->setHeaderData(0, Qt::Horizontal, "Numéro ");
    modele->setHeaderData(1, Qt::Horizontal, "Nom");
    modele->setHeaderData(2, Qt::Horizontal, "Spécialité");

    ui->tableView_3->setModel(modele);
}



