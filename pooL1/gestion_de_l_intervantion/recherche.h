#ifndef RECHERCHE_H
#define RECHERCHE_H

#include <QDialog>
#include<mysql.h>
#include<QSqlQueryModel>

namespace Ui {
class Recherche;
}

class Recherche : public QDialog
{
    Q_OBJECT

public:
    explicit Recherche(QWidget *parent = nullptr);
    ~Recherche();

private slots:
    void on_pushButton_Recherche_clicked();

private:
    Ui::Recherche *ui;
    QSqlQueryModel *model_recherche;
};

#endif // RECHERCHE_H
