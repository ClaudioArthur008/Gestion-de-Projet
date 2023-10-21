#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->stackedWidget);
    connect_to_DB();
    modele=NULL;
    on_actionRead_triggered();
    ui->stackedWidget->setCurrentIndex(0);



}


MainWindow::~MainWindow()
{
    delete ui;
}
//actualiser


void MainWindow::on_actionRead_triggered()
{

    QSqlQuery requete;
    if(ui->stackedWidget->currentIndex()==1)
    {
            requete.exec("select * from projet");

            if(modele==NULL){
                modele= new QSqlQueryModel();
            }
            modele->setQuery(std::move(requete));
            modele->setHeaderData(0, Qt::Horizontal, "Reference ");
            modele->setHeaderData(1, Qt::Horizontal, "Titre");
            modele->setHeaderData(2, Qt::Horizontal, "Date de Debut");
            modele->setHeaderData(3, Qt::Horizontal, "Date de Fin");
            modele->setHeaderData(4, Qt::Horizontal, "Tarif par jour");
            ui->tableView->setModel(modele);

    }
    else if (ui->stackedWidget->currentIndex()==2) {
            requete.exec("select * from tache");
            if(modele==NULL){
                modele= new QSqlQueryModel();
            }
            modele->setQuery(std::move(requete));
            modele->setHeaderData(0, Qt::Horizontal, "Numero ");
            modele->setHeaderData(1, Qt::Horizontal, "Designation");
            modele->setHeaderData(2, Qt::Horizontal, "Date de Debut");
            modele->setHeaderData(3, Qt::Horizontal, "Date de Fin");
            modele->setHeaderData(4, Qt::Horizontal, "CI");
             ui->tableView_tache->setModel(modele);

    }else if(ui->stackedWidget->currentIndex()==3){
        requete.exec("select * from intervenant");
        if(modele==NULL){
            modele= new QSqlQueryModel();
        }
        modele->setQuery(std::move(requete));
        modele->setHeaderData(0, Qt::Horizontal, "Numero ");
        modele->setHeaderData(1, Qt::Horizontal, "Nom");
        modele->setHeaderData(2, Qt::Horizontal, "Specialite");

         ui->tableView_Interv->setModel(modele);
    }
}

//open home's page

void MainWindow::on_actionHome_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
    on_actionRead_triggered();
}
//recherche

void MainWindow::on_pushButton_2_clicked()
{
    new_dialogue_search = new Recherche(this);
    new_dialogue_search->open();
}

//Listes des taches dans un projet
void MainWindow::on_pushButton_List_Of_task_add_into_project_home_clicked()
{
    afficher_composer_participer =new get_id_composer_participer(this);
    afficher_composer_participer->open_first_page();
    afficher_composer_participer->open();
}


//add task into project
void MainWindow::on_ajouter_une_tache_dans_un_projet_Home_clicked()
{
  on_add_task_into_project_clicked();

}

//assigner un intervenant a une tache
void MainWindow::on_assigner_un_Intervenant_dans_une_Tache_clicked()
{
    on_pushButton_9_clicked();
}
//open project's page
void MainWindow::on_actionProjet_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
    on_actionRead_triggered();

}

//insert in project data

void MainWindow::on_insertbtn_clicked()
{
    QSqlQuery requete;
    QString Titre_Proj = ui->Titre_Proj->text();
    QDate Date_Debut_P = ui->Date_Debut_P->date();
    QDate Date_Fin_P = ui->Date_FinP->date();
    double Tarif_par_J = ui->Tarif_par_J->value();


    if(Date_Debut_P > Date_Fin_P)
    {
        QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut que la date de debut du projet soit inferieur a sa date de fin");

    }
    if(Titre_Proj == NULL) {
            QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut remplir le formulaire ");
    }
    else{
    requete.prepare("insert into projet (Titre_Proj, Date_Debut_P, Date_Fin_P, Tarif_par_J) values ( :Titre_Proj, :Date_Debut_P, :Date_Fin_P, :Tarif_par_J)");
    requete.bindValue(":Titre_Proj",Titre_Proj);
    requete.bindValue(":Date_Debut_P",Date_Debut_P);
    requete.bindValue(":Date_Fin_P",Date_Fin_P);
    requete.bindValue(":Tarif_par_J",Tarif_par_J);

    requete.exec();

      QMessageBox::information(this, "Envoi vers BD", "Envoi complet");
       on_actionRead_triggered();
}
}
//ajouter une tache a un projet

void MainWindow::on_add_task_into_project_clicked()
{

        ajouter_une_tache_a_un_projet = new show_composerEtparticiper(this);
        ajouter_une_tache_a_un_projet->open_fist_Page();
        ajouter_une_tache_a_un_projet-> read_combo_box();
        ajouter_une_tache_a_un_projet->Read_composer();
        ajouter_une_tache_a_un_projet->show();
        connect(ajouter_une_tache_a_un_projet,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);
}


//liste des taches dans un projet from project
void MainWindow::on_pushButton_voir_la_liste_des_taches_inclus_dans_un_projet_from_projectpage_clicked()
{
    on_pushButton_List_Of_task_add_into_project_home_clicked();
    connect(afficher_composer_participer,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);

}




//open task's page

void MainWindow::on_actionTaches_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
    on_actionRead_triggered();
}

//open on task's insert
void MainWindow::on_insertbtn_Tache_clicked()
{
    QSqlQuery requete;
    QString Designation = ui->Designation->text();
    QDate Date_Debut_T = ui->Date_Debut_T->date();
    QDate Date_Fin_T = ui->Date_Fin_T->date();
    double CI = ui->CI->value();

    if(Date_Debut_T > Date_Fin_T) QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut que la date de debut de la tache soit inferieur a sa date de fin");
    if(Designation == NULL) {
        QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Il faut remplir le formulaire ");
    }
    else
    {
        requete.prepare("insert into tache (Designation, Date_Debut_T, Date_Fin_T, CI) values ( :Designation, :Date_Debut_T, :Date_Fin_T, :CI)");
        requete.bindValue(":Designation",Designation);
        requete.bindValue(":Date_Debut_T",Date_Debut_T);
        requete.bindValue(":Date_Fin_T",Date_Fin_T);
        requete.bindValue(":CI",CI);

        requete.exec();
        QMessageBox::information(this, "Envoi vers BD", "Envoi complet");

    }
    on_actionRead_triggered();

}


//assigner un interv dans une tache in task
void MainWindow::on_assigner_un_interv_a_une_tache_task_clicked()
{
    on_pushButton_9_clicked();
}
//ajouter une tache dans un projet in task
void MainWindow::on_ajouter_une_tache_dans_un_projet_task_clicked()
{
    on_add_task_into_project_clicked();
}
//afficher la liste des projets qui inclusent une tache
void MainWindow::on_pushButton_liste_des_projets_qui_inclusentDes_Taches_from_task_page_clicked()
{
    afficher_composer_participer = new get_id_composer_participer(this);
    afficher_composer_participer->open_second_page();
    afficher_composer_participer->open();
    connect(afficher_composer_participer,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);

}


//open intervenant page
void MainWindow::on_actionIntervenant_triggered()
{
    ui->stackedWidget->setCurrentIndex(3);
    on_actionRead_triggered();
}

//onclick on employee insert
void MainWindow::on_insertbtn_interv_clicked()
{
    QSqlQuery requete;
    QString Nom_Interv = ui->Nom_Interv->text();
    QString Specialite = ui->Specialite->text();
    if(Nom_Interv == NULL) {
        QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!! \n Le nom de l'intervenant ne peut pas être vide ");
    } else
    {

    requete.prepare("insert into intervenant (Nom_Interv, Specialite) values ( :Nom_Interv, :Specialite )");
    requete.bindValue(":Nom_Interv",Nom_Interv);
    requete.bindValue(":Specialite",Specialite);
    requete.exec();
    QMessageBox::information(this, "Envoi vers BD", "Envoi complet");

    }

    on_actionRead_triggered();

}
//planning
void MainWindow::on_pushButton_planning_2_clicked()
{
    calendrier=new planning(this);
    calendrier->open_first_page();
    calendrier->open();
    connect(calendrier,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);

}

//assigner un intervenant dans une tache
void MainWindow::on_pushButton_9_clicked()
{
    ajouter_une_tache_a_un_projet = new show_composerEtparticiper(this);
    ajouter_une_tache_a_un_projet->open_second_Page();
    ajouter_une_tache_a_un_projet-> read_combo_box();
    ajouter_une_tache_a_un_projet->Read_composer();
    ajouter_une_tache_a_un_projet->show();
    connect(ajouter_une_tache_a_un_projet,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);
}


void MainWindow::on_pushButton_liste_des_intervenant_qui_participe_a_une_tache_from_Interv_page_clicked()
{
    afficher_composer_participer = new get_id_composer_participer(this);
    afficher_composer_participer->open_third_page();
    afficher_composer_participer->open();
    connect(afficher_composer_participer,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);

}

//open bill page
void MainWindow::on_actionBill_triggered()
{
    ui->stackedWidget->setCurrentIndex(4);
    new_get_ref_proj_bill_Dialog =new ::get_Ref_Proj_Bill(this);
    connect(new_get_ref_proj_bill_Dialog, &get_Ref_Proj_Bill::reference_obt,this,&MainWindow::reference_obt);
    new_get_ref_proj_bill_Dialog->open();

}

void MainWindow::reference_obt(const QString &reference){
    qDebug() << "Reference dans MainWindow: " << reference;
    QSqlQuery requete;
    requete.prepare("SELECT * FROM projet WHERE Ref_Proj = '"+reference+"'");
    if (requete.exec())
    {
        while (requete.next())
        {
                ui->ref_projet_2->setText(reference);
                ui->titre_projet_3->setText(requete.value(1).toString());
                ui->date_debut_5->setText(requete.value(2).toString());
                ui->date_fin_4->setText(requete.value(3).toString());
        }
    } else QMessageBox::warning(this, "Envoi vers BD", "Echec d'envoi !!!");
    //Tableau
    QSqlQuery query;
    query.prepare("select count(Num_Tache) from composer where Ref_Proj = '"+reference+"'");
    query.bindValue(0, reference);
    if (query.exec())
    {
        while (query.next())
        {
            int rowCount = query.value(0).toInt();
            model = new QStandardItemModel(rowCount, 4);
            model->setHeaderData(0, Qt::Horizontal, "Numéro de la tâche");
            model->setHeaderData(1, Qt::Horizontal, "Nbre d'intervenants");
            model->setHeaderData(2, Qt::Horizontal, "Durée de la tâche (Jour)");
            model->setHeaderData(3, Qt:: Horizontal, "Montant");

            QSqlQuery afficher_num;
            afficher_num.prepare("select Num_Tache from composer where Ref_Proj = '"+reference+"'");
            afficher_num.bindValue(0, reference);

            if (afficher_num.exec())
            {
                int row = 0;
                while (afficher_num.next())
                {
                    QString num = afficher_num.value(0).toString();

                    for (int col = 0; col < 4; col++)
                    {
                        QModelIndex index = model->index(row, col, QModelIndex());

                        if (col == 0)
                        {
                            model->setData(index, num);
                        }
                        else if (col == 2)
                        {
                            QSqlQuery afficher_duree;
                            afficher_duree.prepare("select Date_Debut_T, Date_Fin_T from tache where Num_Tache = '"+num+"'");
                            afficher_duree.bindValue(0, num);

                            if (afficher_duree.exec())
                            {
                                int innerRow = 0;

                                while (afficher_duree.next())
                                {
                                    QDateTime debut = afficher_duree.value(0).toDateTime();
                                    QDateTime fin = afficher_duree.value(1).toDateTime();
                                    int duree = debut.daysTo(fin);
                                    QModelIndex index = model->index(row + innerRow, 2, QModelIndex());
                                    model->setData(index, duree);
                                    innerRow++;
                                }
                            }
                        }
                        else if (col == 1)
                        {
                            QSqlQuery afficher_int;
                            afficher_int.prepare("select count(Num_Interv) from participer where Num_Tache = '"+num+"'");
                            afficher_int.bindValue(0, num);
                            if (afficher_int.exec())
                            {
                                int rowcount = 0;
                                while (afficher_int.next())
                                {
                                    model->setData(index, afficher_int.value(0).toString());
                                    rowcount++;
                                }
                            }
                        }
                        else if (col == 3)
                        {
                            QSqlQuery search_CI;
                            search_CI.prepare("SELECT CI, Num_Tache FROM tache WHERE Num_Tache = :Num_Tache");
                            search_CI.bindValue(":Num_Tache", num);
                            qDebug() << "Num_Tache: " << num;
                            // Avant la première requête
                            if (search_CI.exec())
                            {
                                int ligne = 0;
                                while (search_CI.next())
                                {
                                    for (int ligne = 0; ligne<row+1; ligne++)
                                    {
                                        int montant=1;
                                        for (int j = 1; j < 3; j++)
                                        {
                                            QStandardItem *item = model->item(ligne, j);
                                            if (item)
                                            {
                                                QVariant valeur = item->data(Qt::DisplayRole);
                                                montant *= valeur.toInt();
                                                model->setData(index, search_CI.value(0).toInt()*montant);
                                            }
                                        }
                                    }
                                    ligne++;
                                }

                            }
                        }
                    }
                    row++;
                }
                ui->tableView_2->setModel(model);
            }
        }
    }
    //Total et surcoût
    QStandardItemModel *modele = static_cast<QStandardItemModel*>(ui->tableView_2->model());
    if (modele)
    {
        int row = modele->rowCount();
        int columnCount = modele->columnCount();
        for (int column = 2; column < columnCount; ++column)
        {
            modele->insertRow(row);
            QModelIndex index = modele->index(row, column);
            modele->setData(index, QVariant());
            ui->tableView_2->setSpan(row, 0, 1, 3);
            ui->tableView_2->setSpan(row+1, 0, 1, 3);
        }
    parcours = new QItemSelectionModel(modele, this);
    ui->tableView_2->setSelectionModel(parcours);
    modele->setItem(row, 0, new QStandardItem("Surcoût :"));
    modele->setItem(row+1, 0, new QStandardItem("Total :"));
    //Surcoût
    QString ref = ui->ref_projet_2->text();
    QString debut_Str = ui->date_debut_5->text();
    QString fin_Str = ui->date_fin_4->text();
    QDate debut = QDate::fromString(debut_Str, "yyyy-MM-dd");
    QDate fin = QDate::fromString(fin_Str, "yyyy-MM-dd");
    int duree_projet = debut.daysTo(fin);
    QSqlQuery surcout;
    surcout.prepare("select Tarif_par_J from projet where Ref_Proj = '"+ref+"'");
    surcout.bindValue(0, ref);
    if (surcout.exec())
    {
        while (surcout.next())
        {
            int surcout_projet = surcout.value(0).toInt()*duree_projet;
            QModelIndex index = modele->index(row, 3, QModelIndex());
            modele->setData(index, surcout_projet);
        }
    }
    //Calcul de Total
    int somme = 0;
    int colonne=3;
    for (int i=0; i<row+1;i++)
    {
        QStandardItem *item = modele->item(i, colonne);
        if (item)
        {
            QVariant valeur = item->data(Qt::DisplayRole);
            QModelIndex index = modele->index(row+1, 3, QModelIndex());
            somme += valeur.toInt();
        }
    }
    QModelIndex index =
            modele->index(row + 1, 3, QModelIndex());
    modele->setData(index, somme);
    ui->tableView_2->resizeColumnsToContents();
    ui->tableView_2->resizeRowsToContents();
    }

}

//onclick on delete

void MainWindow::on_actionSupprimer_triggered()
{
    delete_dialog = new update_delete(this);

    if(ui->stackedWidget->currentIndex()==1){
        delete_dialog->open_firstpage();
        delete_dialog->show();
    }else if(ui->stackedWidget->currentIndex()==2){
        delete_dialog->open_secondpage();
        delete_dialog->show();
    }else if(ui->stackedWidget->currentIndex()==3){
        delete_dialog->open_thirdpage();
        delete_dialog->show();
    }else;
    connect(delete_dialog,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);

}


//onclick on update

void MainWindow::on_actionModifier_triggered()
{
    update_dialog = new Update(this);
    if(ui->stackedWidget->currentIndex()==1){
        update_dialog->open_firstPage_update();
        update_dialog->show();
    }else if(ui->stackedWidget->currentIndex()==2){
        update_dialog->open_secondPage_update();
        update_dialog->show();
    }else if(ui->stackedWidget->currentIndex()==3){
        update_dialog->open_thirdpage_update();
        update_dialog->show();
    }else;
    connect(update_dialog,&QDialog::finished,this,&MainWindow::on_actionRead_triggered);

}


void MainWindow::on_planning_clicked()
{
    calendrier = new planning(this);
    calendrier->open_first_page();
    calendrier->show();
}



void MainWindow::on_pushButton_4_clicked()
{
    on_add_task_into_project_clicked();
}


























