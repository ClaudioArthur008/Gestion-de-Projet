#ifndef PLANNING_H
#define PLANNING_H

#include <QDialog>
#include"mysql.h"

namespace Ui {
class planning;
}

class planning : public QDialog
{
    Q_OBJECT

public:
    explicit planning(QWidget *parent = nullptr);
    ~planning();
    void open_first_page();

private slots:
    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_search_clicked();

    void on_pushButton_back_to_calendar_clicked();

private:
    Ui::planning *ui;
};

#endif // PLANNING_H
