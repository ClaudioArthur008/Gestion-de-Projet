#ifndef GET_ID_COMPOSER_PARTICIPER_H
#define GET_ID_COMPOSER_PARTICIPER_H

#include <QDialog>
#include"mysql.h"
#include<QSqlQueryModel>

namespace Ui {
class get_id_composer_participer;
}

class get_id_composer_participer : public QDialog
{
    Q_OBJECT

public:
    explicit get_id_composer_participer(QWidget *parent = nullptr);
    ~get_id_composer_participer();
    void open_first_page();
    void open_second_page();
    void open_third_page();


private slots:
    void on_pushButton_afficher_les_taches_inclus_dans_un_Projet_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::get_id_composer_participer *ui;
    QSqlQueryModel *modele;
};

#endif // GET_ID_COMPOSER_PARTICIPER_H
