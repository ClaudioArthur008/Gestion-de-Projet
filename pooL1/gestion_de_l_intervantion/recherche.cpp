#include "recherche.h"
#include "ui_recherche.h"

Recherche::Recherche(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Recherche)
{
    ui->setupUi(this);
    connect_to_DB();
    model_recherche =NULL;
    ui->comboBox_projet->addItem("Ref_Proj");
    ui->comboBox_projet->addItem("Titre_Proj");

    ui->comboBox_tache->addItem("Num_Tache");
    ui->comboBox_tache->addItem("Designation");

    ui->comboBox_Interv->addItem("Num_Interv");
    ui->comboBox_Interv->addItem("Nom_Interv");

}

Recherche::~Recherche()
{
    delete ui;
}



void Recherche::on_pushButton_Recherche_clicked()
{
    QSqlQuery requete;
    if(ui->radioButton_projet->isChecked()){
        if(ui->comboBox_projet->currentText()=="Ref_Proj")
        {
            QString current_index_combo;
            current_index_combo=ui->lineEdit->text();
            requete.prepare("select * from projet where Ref_Proj like '%"+ current_index_combo +"%'");
            requete.exec();
            while(requete.next())
            {

                if(model_recherche==NULL){
                    model_recherche= new QSqlQueryModel();
                }
                model_recherche->setQuery(std::move(requete));
                model_recherche->setHeaderData(0, Qt::Horizontal, "Reference ");
                model_recherche->setHeaderData(1, Qt::Horizontal, "Titre");
                model_recherche->setHeaderData(2, Qt::Horizontal, "Date de Debut");
                model_recherche->setHeaderData(3, Qt::Horizontal, "Date de Fin");
                model_recherche->setHeaderData(4, Qt::Horizontal, "Tarif par jour");
                ui->tableView->setModel(model_recherche);


            }
        }
        else if(ui->comboBox_projet->currentText()=="Titre_Proj")
        {
            QString current_index_combo;
            current_index_combo=ui->lineEdit->text();
            requete.prepare("select * from projet where Titre_Proj='"+current_index_combo+"'");
            requete.exec();
            while(requete.next())
            {

                if(model_recherche==NULL){
                    model_recherche= new QSqlQueryModel();
                }
                model_recherche->setQuery(std::move(requete));
                model_recherche->setHeaderData(0, Qt::Horizontal, "Reference ");
                model_recherche->setHeaderData(1, Qt::Horizontal, "Titre");
                model_recherche->setHeaderData(2, Qt::Horizontal, "Date de Debut");
                model_recherche->setHeaderData(3, Qt::Horizontal, "Date de Fin");
                model_recherche->setHeaderData(4, Qt::Horizontal, "Tarif par jour");
                ui->tableView->setModel(model_recherche);
            }
        }
    }
    else if(ui->radioButton_tache->isChecked())
    {
        if(ui->comboBox_tache->currentText()=="Designation")
        {
            QString current_index_combo;
            current_index_combo=ui->lineEdit->text();
            requete.prepare("select * from tache where Designation='"+current_index_combo+"'");
            requete.exec();
            while(requete.next())
            {

                if(model_recherche==NULL){
                    model_recherche= new QSqlQueryModel();
                }
                model_recherche->setQuery(std::move(requete));
                model_recherche->setHeaderData(0, Qt::Horizontal, "Numéro ");
                model_recherche->setHeaderData(1, Qt::Horizontal, "Désignation");
                model_recherche->setHeaderData(2, Qt::Horizontal, "Date de Debut");
                model_recherche->setHeaderData(3, Qt::Horizontal, "Date de Fin");
                model_recherche->setHeaderData(4, Qt::Horizontal, "Coût d'intervention");
                ui->tableView->setModel(model_recherche);
            }
        }
        else if(ui->comboBox_tache->currentText()=="Num_Tache")
        {
            QString current_index_combo;
            current_index_combo=ui->lineEdit->text();
            requete.prepare("select * from tache where Num_Tache="+current_index_combo);
            requete.exec();
            while(requete.next())
            {

                if(model_recherche==NULL){
                    model_recherche= new QSqlQueryModel();
                }
                model_recherche->setQuery(std::move(requete));
                model_recherche->setHeaderData(0, Qt::Horizontal, "Numéro ");
                model_recherche->setHeaderData(1, Qt::Horizontal, "Désignation");
                model_recherche->setHeaderData(2, Qt::Horizontal, "Date de Debut");
                model_recherche->setHeaderData(3, Qt::Horizontal, "Date de Fin");
                model_recherche->setHeaderData(4, Qt::Horizontal, "Coût d'intervention");
                ui->tableView->setModel(model_recherche);
            }
        }
    }
    else if(ui->radioButton_Interv->isChecked())
    {
        if(ui->comboBox_Interv->currentText()=="Num_Interv")
        {
            QString current_index_combo;
            current_index_combo=ui->lineEdit->text();
            requete.prepare("select * from intervenant where Num_Interv="+current_index_combo);
            requete.exec();
            while(requete.next())
            {

                if(model_recherche==NULL){
                    model_recherche= new QSqlQueryModel();
                }
                model_recherche->setQuery(std::move(requete));
                model_recherche->setHeaderData(0, Qt::Horizontal, "Numéro ");
                model_recherche->setHeaderData(1, Qt::Horizontal, "Nom");
                model_recherche->setHeaderData(2, Qt::Horizontal, "Spécialité");

                ui->tableView->setModel(model_recherche);
            }
        }
        else if(ui->comboBox_Interv->currentText()=="Nom_Interv")
        {
            QString current_index_combo;
            current_index_combo=ui->lineEdit->text();
            requete.prepare("select * from intervenant where Nom_Interv='"+current_index_combo+"'");
            requete.exec();
            while(requete.next())
            {

                if(model_recherche==NULL){
                    model_recherche= new QSqlQueryModel();
                }
                model_recherche->setQuery(std::move(requete));
                model_recherche->setHeaderData(0, Qt::Horizontal, "Numéro ");
                model_recherche->setHeaderData(1, Qt::Horizontal, "Nom");
                model_recherche->setHeaderData(2, Qt::Horizontal, "Spécialité");

                ui->tableView->setModel(model_recherche);
            }
         }
   }
}
