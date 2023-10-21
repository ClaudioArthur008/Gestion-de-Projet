#ifndef SHOW_COMPOSERETPARTICIPER_H
#define SHOW_COMPOSERETPARTICIPER_H

#include <QDialog>
#include<QMessageBox>
#include<QSqlQueryModel>
#include"mysql.h"
#include"update_delete.h"


namespace Ui {
class show_composerEtparticiper;
}

class show_composerEtparticiper : public QDialog
{
    Q_OBJECT

public:
    explicit show_composerEtparticiper(QWidget *parent = nullptr);
    ~show_composerEtparticiper();
    void read_combo_box();
    void open_fist_Page();
    void Read_composer();
    void open_second_Page();

private slots:


    void on_pushButton_ajouter_un_interv_clicked();

    void on_pushButton_add_task_into_project_From_Dialog_clicked();

   void on_pushButton_supp_composer_clicked();

   void on_pushButton_supp_participer_clicked();

private:
    Ui::show_composerEtparticiper *ui;
    QSqlQueryModel * modele;
    update_delete *delete_composer_participer;


};

#endif // SHOW_COMPOSERETPARTICIPER_H
