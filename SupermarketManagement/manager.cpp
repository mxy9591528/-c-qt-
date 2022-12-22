#include "manager.h"
#include "ui_manager.h"

manager::manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    Utility::setStyle(":/css/css/manager.css");
    this->updateTable();
}
manager::~manager()
{
    delete ui;
}

void manager::updateTable()
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

void manager::setManagerInfo(Manager *m)
{
    ui->title_label->setText("员工账号:"+m->getname());
    ui->img_label->setPixmap(m->getimg());
}

void manager::on_exit_btn_clicked()
{
    this->hide();
    emit empExit();
}


void manager::on_add_btn_clicked()
{
    this->cinput=new commodityinfoinput();
    this->cinput->show();
    connect(cinput,SIGNAL(ok_btn_clicked()),this,SLOT(add_data_changed()));
}


void manager::on_mfy_btn_clicked()
{
    this->cinput=new commodityinfoinput();
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    this->c=new Commodity(Utility::getCommodityType(items.at(1)->text()),items.at(2)->text(),items.at(3)->text().toDouble(),items.at(4)->text().toInt(),items.at(5)->text(),items.at(6)->text());
    this->cinput->setcommodityinfo(c);
    this->cinput->show();
    connect(cinput,SIGNAL(ok_btn_clicked()),this,SLOT(mfy_data_changed()));
}

void manager::add_data_changed()
{
    mysqlconnect::getconnect()->addCommodity(this->cinput->getcommodityinfo());
    this->cinput->hide();
    this->updateTable();
}

void manager::mfy_data_changed()
{
    mysqlconnect::getconnect()->updateCommodity(this->c,this->cinput->getcommodityinfo());
    this->cinput->hide();
    this->updateTable();
}


void manager::on_del_btn_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    this->c=new Commodity(Utility::getCommodityType(items.at(1)->text()),items.at(2)->text(),items.at(3)->text().toDouble(),items.at(4)->text().toInt(),items.at(5)->text(),items.at(6)->text());
    mysqlconnect::getconnect()->delCommodity(this->c);
    this->updateTable();
}


void manager::on_num_btn_clicked()
{
    QMessageBox::information(this,"超市商品管理系统-数量信息",QString("超市商品总种类:%1\n超市商品总库存量:%2").arg(mysqlconnect::getconnect()->getCommoditys(1,1,1,"").size()).arg(mysqlconnect::getconnect()->getCommodityNum()));
}


void manager::on_search_btn_clicked()
{
    this->updateTable();
}

