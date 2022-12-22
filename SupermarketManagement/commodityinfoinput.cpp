#include "commodityinfoinput.h"
#include "ui_commodityinfoinput.h"

commodityinfoinput::commodityinfoinput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::commodityinfoinput)
{
    ui->setupUi(this);
    this->setFixedSize(300,240);
    this->setWindowModality(Qt::ApplicationModal);
}

void commodityinfoinput::setcommodityinfo(Commodity *c)
{
    ui->type_box->setCurrentIndex(c->gettype()-1);
    ui->name_edit->setText(c->getname());
    ui->price_edit->setText(QString("%1").arg(c->getprice()));
    ui->num_edit->setText(QString("%1").arg(c->getnum()));
    ui->brand_edit->setText(c->getbrand());
    ui->producer_edit->setText(c->getproducer());
}

Commodity *commodityinfoinput::getcommodityinfo()
{
    this->c=new Commodity();
    this->c->settype(Utility::getCommodityType(ui->type_box->currentText()));
    this->c->setname(ui->name_edit->text());
    this->c->setprice(ui->price_edit->text().toDouble());
    this->c->setnum(ui->num_edit->text().toInt());
    this->c->setbrand(ui->brand_edit->text());
    this->c->setproducer(ui->producer_edit->text());
    return this->c;
}

commodityinfoinput::~commodityinfoinput()
{
    delete ui;
}

void commodityinfoinput::on_ok_btn_clicked()
{
    emit ok_btn_clicked();
}


void commodityinfoinput::on_cancel_btn_clicked()
{
    emit cancel_btn_clicked();
}

