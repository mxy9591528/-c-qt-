#include "customer.h"
#include "ui_customer.h"

customer::customer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::customer)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    Utility::setStyle(":/css/css/customer.css");
    this->updateTable();
}

customer::~customer()
{
    delete ui;
}

void customer::updateTable()
{
    ui->tableWidget->clear();
    QStringList l;
    l<<"序号"<<"商品类型"<<"商品名称"<<"商品价格"<<"商品库存"<<"商品品牌"<<"商品厂家";
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    QList<Commodity*>list;
    if(Utility::getCommodityType(ui->search_line->text())==0)
        list=mysqlconnect::getconnect()->getCommoditys(Utility::getchoice1(ui->search_box->currentText()),Utility::getchoice2(ui->method_box->currentText()),Utility::getchoice3(ui->sort_box->currentText()),ui->search_line->text());
    else
        list=mysqlconnect::getconnect()->getCommoditys(Utility::getchoice1(ui->search_box->currentText()),Utility::getchoice2(ui->method_box->currentText()),Utility::getchoice3(ui->sort_box->currentText()),QString("%1").arg(Utility::getCommodityType(ui->search_line->text())));
    ui->tableWidget->setRowCount(list.size());
    ui->tableWidget->verticalHeader()->setHidden(true);
    for(int i=0;i<list.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString("%1").arg(i+1)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(Utility::getCommodityStrType(list[i]->gettype())));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(list[i]->getname()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString("%1").arg(list[i]->getprice())));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString("%1").arg(list[i]->getnum())));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(list[i]->getbrand()));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(list[i]->getproducer()));
    }
}

void customer::on_exit_btn_clicked()
{
   QMessageBox::information(this,"提示","欢迎下次光临!",QMessageBox::Ok);
   this->hide();
   emit cusExit();
}


void customer::on_search_btn_clicked()
{
    this->updateTable();
}


void customer::on_buy_btn_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    this->c=new Commodity(Utility::getCommodityType(items.at(1)->text()),items.at(2)->text(),items.at(3)->text().toDouble(),items.at(4)->text().toInt(),items.at(5)->text(),items.at(6)->text());
    Commodity*newc=new Commodity(this->c->gettype(),this->c->getname(),this->c->getprice(),this->c->getnum(),this->c->getbrand(),this->c->getproducer());
    if(this->c->getnum()>0)
    {
        this->c->setnum(this->c->getnum()-1);
        mysqlconnect::getconnect()->updateCommodity(newc,this->c);
    }
    this->updateTable();
}

