#include "update.h"
#include "ui_update.h"

Update::Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update)
{
    ui->setupUi(this);
    connect_to_DB();

}

Update::~Update()
{
    delete ui;
}

//open first page and get Ref_id
void Update::open_firstPage_update(){
    ui->stackedWidget->setCurrentIndex(0);
    get_id = new update_delete(this);
    get_id->open_fourthpage();
    get_id->show();
    connect(get_id,&QDialog::finished,this,&Update::get_the_Reference);
}
void Update:: get_the_Reference(){
    Ref_Proj_got =get_id->get_Ref_Proj_Toupdate();
}


//get old value from projet
void Update::on_pushButton_Titre_Proj_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Titre_Proj from projet where Ref_Proj  = "+ Ref_Proj_got);
    requete.exec();
    while(requete.next()) {
        QString item =requete.value(0).toString();
        ui->lineEdit_titre_Proj->setText(item);
    }
}
void Update::on_pushButton_DDP_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Date_Debut_P from projet where Ref_Proj  = "+ Ref_Proj_got);
    requete.exec();
    while(requete.next()) {
        QDate item =requete.value(0).toDate();
        ui->dateEdit_DDP->setDate(item);
    }
}
void Update::on_pushButton_DFP_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Date_Fin_P from projet where Ref_Proj  = "+ Ref_Proj_got);
    requete.exec();
    while(requete.next()) {
        QDate item =requete.value(0).toDate();
        ui->dateEdit_DFP->setDate(item);
    }
}
void Update::on_pushButton_Tarif_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Tarif_par_J from projet where Ref_Proj  = "+ Ref_Proj_got);
    requete.exec();
    while(requete.next()) {
        int item =requete.value(0).toInt();
        ui->lineEdit_Tarif->setValue(item);
    }
}

//Update project
void Update::on_pushButton_save_Projet_Updates_clicked()
{
    QSqlQuery requete;
    QString TP = ui->lineEdit_titre_Proj->text();
    QDate DDP = ui->dateEdit_DDP->date();
    QDate DFP = ui->dateEdit_DFP->date();
    int TJ = ui->lineEdit_Tarif->value();


    if(DDP > DFP) QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut que la date de debut du projet soit inferieur a sa date de fin");

    else{
        requete.prepare("update projet set Titre_Proj =:TP, Date_Debut_P =:DDP, Date_Fin_P =:DFP, Tarif_par_J =:TJ where Ref_Proj = "+ Ref_Proj_got);
        requete.bindValue(":TP",TP);
        requete.bindValue(":DDP",DDP);
        requete.bindValue(":DFP",DFP);
        requete.bindValue(":TJ",TJ);
        requete.exec();
         QMessageBox::information(this, "Envoi vers BD", "Modification complete");
         close();
    }
    if(TP  == NULL && TJ==NULL) {
        QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut remplir le formulaire ");
    }

}


//open second page and get Ref_id
void Update::open_secondPage_update(){
    ui->stackedWidget->setCurrentIndex(1);
    get_id = new update_delete(this);
    get_id->open_fifthpage();
    get_id->show();
    connect(get_id,&QDialog::finished,this,&Update::get_the_Num_Tache);
}
void Update:: get_the_Num_Tache(){
    Num_Tache_got =get_id->get_Num_Tache_Toupdate();
}

//get old value from task

void Update::on_pushButton_Designation_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Designation from tache where Num_Tache  = "+ Num_Tache_got);
    requete.exec();
    while(requete.next()) {
        QString item =requete.value(0).toString();
        ui->lineEdit_Designation->setText(item);
    }
}


void Update::on_pushButton_DDT_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Date_Debut_T from tache where Num_Tache  = "+ Num_Tache_got);
    requete.exec();
    while (requete.next()) {
        QDate item=requete.value(0).toDate();
        ui->dateEdit_DDT->setDate(item);
    }
}


void Update::on_pushButton_DFT_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Date_Fin_T from tache where Num_Tache  = "+ Num_Tache_got);
    requete.exec();
    while (requete.next()) {
        QDate item=requete.value(0).toDate();
        ui->dateEdit_DFT->setDate(item);
    }
}


void Update::on_pushButton_CI_clicked()
{
    QSqlQuery requete;
    requete.prepare("select CI from tache where Num_Tache  = "+ Num_Tache_got);
    requete.exec();
    while(requete.next()) {
        int item =requete.value(0).toInt();
        ui->lineEdit_CI->setValue(item);
    }
}

//Update Task
void Update::on_pushButton_save_Tache_Updated_clicked()
{
    QSqlQuery requete;
    QString Designation = ui->lineEdit_Designation->text();
    QDate DDT = ui->dateEdit_DDT->date();
    QDate DFT = ui->dateEdit_DFT->date();
    QString CI = ui->lineEdit_CI->text();


    if(DDT > DFT  ) QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut que la date de debut de la Tache soit inferieur a sa date de fin");

    else{
        requete.prepare("update tache set Designation =:Designation, Date_Debut_T =:DDT, Date_Fin_T =:DFT, CI =:CI where Num_Tache = "+ Num_Tache_got);
        requete.bindValue(":Designation",Designation);
        requete.bindValue(":DDT",DDT);
        requete.bindValue(":DFT",DFT);
        requete.bindValue(":CI",CI);
        requete.exec();
        if(Designation == NULL&&  CI==NULL) {
            QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut remplir le formulaire ");
        }else
        {
        QMessageBox::information(this, "Envoi vers BD", "Modification complete");
        close();
        }
    }

}

//open third page and get Ref_id
void Update::open_thirdpage_update(){
    ui->stackedWidget->setCurrentIndex(2);
    get_id = new update_delete(this);
    get_id->open_sixthpage();
    get_id->show();
    connect(get_id,&QDialog::finished,this,&Update::get_the_Num_Interv);
}
void Update:: get_the_Num_Interv(){
    Num_Interv_got =get_id->get_Num_Interv_Toupdate();
}


void Update::on_pushButton_save_Interv_Updated_clicked()
{
    QSqlQuery requete;
    QString Nom_Interv = ui->lineEdit_Nom_Interv->text();
    QString Specialite = ui->lineEdit__Specialite->text();


        requete.prepare("update intervenant set Nom_Interv =:Nom_Interv,  Specialite =:Specialite where Num_Interv = "+ Num_Interv_got);
        requete.bindValue(":Nom_Interv",Nom_Interv);
        requete.bindValue(":Specialite",Specialite);
        requete.exec();
        if(Nom_Interv == NULL && Specialite==NULL) {
            QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut remplir le formulaire ");
        }else
        {
        QMessageBox::information(this, "Envoi vers BD", "Modification complete");
        close();
        }
}


//get old value from interv



void Update::on_pushButton_Nom_Interv_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Nom_Interv from intervenant where Num_Interv  = "+ Num_Interv_got);
    requete.exec();
    while(requete.next()) {
        QString item =requete.value(0).toString();
        ui->lineEdit_Nom_Interv->setText(item);
   }
}

void Update::on_pushButton_Specialite_clicked()
{
    QSqlQuery requete;
    requete.prepare("select Specialite from intervenant where Num_Interv  = "+ Num_Interv_got);
    requete.exec();
    while(requete.next()) {
        QString item =requete.value(0).toString();
        ui->lineEdit__Specialite->setText(item);

   }
}

