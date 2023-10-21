#ifndef UPDATE_DELETE_H
#define UPDATE_DELETE_H

#include <QDialog>
#include<QMessageBox>
#include"mysql.h"

namespace Ui {
class update_delete;
}

class update_delete : public QDialog
{
    Q_OBJECT

public:
    explicit update_delete(QWidget *parent = nullptr);
    ~update_delete();
    void Get_Ref();
    void open_firstpage();
    void open_secondpage();
    void open_thirdpage();
    void open_fourthpage();
    QString get_Ref_Proj_Toupdate();
    void open_fifthpage();
    QString get_Num_Tache_Toupdate();
    void open_sixthpage();
    QString get_Num_Interv_Toupdate();
    void open_seventh_page();
    void open_eigth_Page();



private slots:
    void on_pushButton_envoyez_clicked();

    void on_pushButton_envoyez_tache_clicked();

    void on_pushButton_envoyez_Interv_clicked();

    void on_pushButton_send_Ref_Proj_Toupdate_clicked();

    void on_pushButton_send_Num_Tache_Toupdate_clicked();

    void on_pushButton_send_Num_Tache_Toupdate_2_clicked();

    void on_pushButton_confrirmation_Supp_Composer_clicked();

    void on_pushButton_delete_from_participer_clicked();

private:
    Ui::update_delete *ui;
    QString Ref_Proj_toupdate;
    QString Num_Tache_toupdate;
    QString Num_Interv_toupdate;


};

#endif // UPDATE_DELETE_H
