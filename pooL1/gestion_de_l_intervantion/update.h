#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>
#include"mysql.h"
#include"update_delete.h"
namespace Ui {
class Update;
}

class Update : public QDialog
{
    Q_OBJECT

public:
    explicit Update(QWidget *parent = nullptr);
    ~Update();
    void open_firstPage_update();
    void get_the_Reference();
    void open_secondPage_update();
    void get_the_Num_Tache();
    void open_thirdpage_update();
    void get_the_Num_Interv();



private slots:

    void on_pushButton_Titre_Proj_clicked();

    void on_pushButton_save_Projet_Updates_clicked();

    void on_pushButton_DDP_clicked();

    void on_pushButton_DFP_clicked();

    void on_pushButton_Tarif_clicked();

    void on_pushButton_save_Tache_Updated_clicked();

    void on_pushButton_Designation_clicked();

    void on_pushButton_DDT_clicked();

    void on_pushButton_DFT_clicked();

    void on_pushButton_CI_clicked();

    void on_pushButton_save_Interv_Updated_clicked();

    void on_pushButton_Nom_Interv_clicked();

    void on_pushButton_Specialite_clicked();

private:
    Ui::Update *ui;
    update_delete *get_id;
    QString Ref_Proj_got;
    QString Num_Tache_got;
    QString Num_Interv_got;
};

#endif // UPDATE_H
