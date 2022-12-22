#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include"utility.h"
#include"info.h"
#include"mysqlconnect.h"
#include<QMessageBox>
namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();
    void updateTable();
signals:
    void boosExit();
private slots:
    void on_wait_btn_clicked();

    void on_agree_btn_clicked();

    void on_exit_btn_clicked();

    void on_pushButton_clicked();

    void on_search_btn_clicked();

private:
    Ui::admin *ui;
    Manager*m;
};

#endif // ADMIN_H
