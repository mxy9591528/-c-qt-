#ifndef MANAGERREGISTER_H
#define MANAGERREGISTER_H

#include <QWidget>
#include"utility.h"
#include<QTime>
#include<QtGlobal>
#include"info.h"
#include<QMessageBox>
#include"mysqlconnect.h"
namespace Ui {
class managerregister;
}

class managerregister : public QWidget
{
    Q_OBJECT

public:
    explicit managerregister(QWidget *parent = nullptr);
    ~managerregister();
    void getRandomImg();
signals:
    void exitInfo();
private slots:
    void on_rand_btn_clicked();

    void on_cancel_btn_clicked();

    void on_ok_btn_clicked();

private:
    Ui::managerregister *ui;
    QString imgstr=":/img2/img/avatar/10001.jpg";
};

#endif // MANAGERREGISTER_H
