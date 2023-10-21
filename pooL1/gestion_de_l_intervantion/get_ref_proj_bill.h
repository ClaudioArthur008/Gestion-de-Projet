#ifndef GET_REF_PROJ_BILL_H
#define GET_REF_PROJ_BILL_H

#include <QDialog>

namespace Ui {
class get_Ref_Proj_Bill;
}

class get_Ref_Proj_Bill : public QDialog
{
    Q_OBJECT

public:
    explicit get_Ref_Proj_Bill(QWidget *parent = nullptr);
    ~get_Ref_Proj_Bill();

signals :
    void reference_obt(QString &reference);

private slots:
    void on_pushButton_envoyez_Ref_Proj_to_facturer_clicked();

private:
    Ui::get_Ref_Proj_Bill *ui;
    QString reference;
};

#endif // GET_REF_PROJ_BILL_H
