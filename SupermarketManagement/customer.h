#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QWidget>
#include<QMessageBox>
#include"utility.h"
#include"mysqlconnect.h"
#include"commodity.h"

namespace Ui {
class customer;
}

class customer : public QWidget
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();
    void updateTable();
private slots:
    void on_exit_btn_clicked();
    void on_search_btn_clicked();

    void on_buy_btn_clicked();

signals:
    void cusExit();
private:
    Ui::customer *ui;
    Commodity*c;
};

#endif // CUSTOMER_H
