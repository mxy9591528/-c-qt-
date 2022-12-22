#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>
#include<QMessageBox>
#include"commodity.h"
#include"info.h"
#include"commodityinfoinput.h"
#include"utility.h"
#include"mysqlconnect.h"

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT
public:
    explicit manager(QWidget *parent = nullptr);
    ~manager();
    void updateTable();
    void setManagerInfo(Manager*m);
signals:
    void empExit();
private slots:
    void on_exit_btn_clicked();

    void on_add_btn_clicked();

    void on_mfy_btn_clicked();
    void add_data_changed();
    void mfy_data_changed();

    void on_del_btn_clicked();

    void on_num_btn_clicked();

    void on_search_btn_clicked();

private:
    Ui::manager *ui;
    Manager*m;
    Commodity*c;
    commodityinfoinput*cinput;
};

#endif // MANAGER_H
