#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlQueryModel>
#include"mysql.h"
#include"update_delete.h"
#include"update.h"
#include"planning.h"
#include"get_ref_proj_bill.h"
#include"recherche.h"
#include"show_composeretparticiper.h"
#include"get_id_composer_participer.h"
#include<QStandardItemModel>
#include<QItemSelectionModel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:


    void on_actionHome_triggered();

    void on_actionProjet_triggered();

    void on_actionTaches_triggered();

    void on_actionIntervenant_triggered();

    void on_actionBill_triggered();

    void on_actionRead_triggered();

    void on_insertbtn_clicked();

    void on_insertbtn_Tache_clicked();

    void on_insertbtn_interv_clicked();

    void on_planning_clicked();

    void on_actionSupprimer_triggered();

    void on_actionModifier_triggered();

    void on_add_task_into_project_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();
    void reference_obt(const QString &reference);


    void on_pushButton_planning_2_clicked();

    void on_ajouter_une_tache_dans_un_projet_Home_clicked();

    void on_assigner_un_Intervenant_dans_une_Tache_clicked();


    void on_assigner_un_interv_a_une_tache_task_clicked();

    void on_ajouter_une_tache_dans_un_projet_task_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_List_Of_task_add_into_project_home_clicked();

    void on_pushButton_voir_la_liste_des_taches_inclus_dans_un_projet_from_projectpage_clicked();

    void on_pushButton_liste_des_projets_qui_inclusentDes_Taches_from_task_page_clicked();

    void on_pushButton_liste_des_intervenant_qui_participe_a_une_tache_from_Interv_page_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB_connection;
    QSqlQueryModel * modele;
    update_delete * delete_dialog;
    Update *update_dialog;
    planning *calendrier;
    show_composerEtparticiper *ajouter_une_tache_a_un_projet;
    get_Ref_Proj_Bill *new_get_ref_proj_bill_Dialog;
    Recherche *new_dialogue_search;
    get_id_composer_participer *afficher_composer_participer;
    QStandardItemModel *model;
    QItemSelectionModel *parcours;
};

#endif // MAINWINDOW_H
