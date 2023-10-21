#include "get_ref_proj_bill.h"
#include "ui_get_ref_proj_bill.h"

get_Ref_Proj_Bill::get_Ref_Proj_Bill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::get_Ref_Proj_Bill)
{
    ui->setupUi(this);
}

get_Ref_Proj_Bill::~get_Ref_Proj_Bill()
{
    delete ui;
}

void get_Ref_Proj_Bill::on_pushButton_envoyez_Ref_Proj_to_facturer_clicked()
{
    reference = ui->lineEdit_get_Ref_Proj_to_facturer->text();
    emit reference_obt(reference);
    close();
}
