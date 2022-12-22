#ifndef COMMODITYINFOINPUT_H
#define COMMODITYINFOINPUT_H

#include <QWidget>
#include"commodity.h"
#include"utility.h"

namespace Ui {
class commodityinfoinput;
}

class commodityinfoinput : public QWidget
{
    Q_OBJECT

public:
    explicit commodityinfoinput(QWidget *parent = nullptr);
    void setcommodityinfo(Commodity*c);
    Commodity*getcommodityinfo();
    ~commodityinfoinput();

private slots:
    void on_ok_btn_clicked();
    void on_cancel_btn_clicked();

signals:
    void ok_btn_clicked();
    void cancel_btn_clicked();
private:
    Ui::commodityinfoinput *ui;
    Commodity*c;
};

#endif // COMMODITYINFOINPUT_H
