#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    Utility::setStyle(":/css/css/admin.css");
    this->updateTable();
}

admin::~admin()
{
    delete ui;
}

void admin::updateTable()
{
    ui->tableWidget->clear();
    QStringList l;
    l<<"序号"<<"账号"<<"密码"<<"状态";
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    QList<Manager*>list=mysqlconnect::getconnect()->getManagers();
    ui->tableWidget->setRowCount(list.size());
    ui->tableWidget->verticalHeader()->setHidden(true);
    for(int i=0;i<list.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString("%1").arg(i+1)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(list[i]->getname()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(list[i]->getpwd()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(Utility::getstatus(list[i]->getstatus())));
    }
}

void admin::on_wait_btn_clicked()
{
    ui->tableWidget->clear();
    QStringList l;
    l<<"序号"<<"账号"<<"密码"<<"状态";
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    QList<Manager*>list=mysqlconnect::getconnect()->getWaitCheckManagers();
    ui->tableWidget->setRowCount(list.size());
    ui->tableWidget->verticalHeader()->setHidden(true);
    for(int i=0;i<list.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString("%1").arg(i+1)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(list[i]->getname()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(list[i]->getpwd()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(Utility::getstatus(list[i]->getstatus())));
    }
}


void admin::on_agree_btn_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    this->m=mysqlconnect::getconnect()->getManager(items.at(1)->text());
    if(m->getstatus()!=1)
        QMessageBox::information(this,"提示","账号状态无需审批");
    else
    {
        m->setstatus(Utility::NORMAL);
        mysqlconnect::getconnect()->updateManager(this->m);
        this->updateTable();
    }
}


void admin::on_exit_btn_clicked()
{
    this->hide();
    emit boosExit();
}


void admin::on_pushButton_clicked()
{
    QList<QTableWidgetItem*>items=ui->tableWidget->selectedItems();
    this->m=mysqlconnect::getconnect()->getManager(items.at(1)->text());
    mysqlconnect::getconnect()->delManager(this->m);
    this->updateTable();
}


void admin::on_search_btn_clicked()
{
    if(ui->search_line->text()=="")
        this->updateTable();
    else{
        Manager*m=mysqlconnect::getconnect()->getManager(ui->search_line->text());
        ui->tableWidget->clear();
        QStringList l;
        l<<"序号"<<"账号"<<"密码"<<"状态";
        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setHorizontalHeaderLabels(l);
        ui->tableWidget->setRowCount(1);
        ui->tableWidget->verticalHeader()->setHidden(true);
        ui->tableWidget->setItem(0,0,new QTableWidgetItem(QString("%1").arg(1)));
        ui->tableWidget->setItem(0,1,new QTableWidgetItem(m->getname()));
        ui->tableWidget->setItem(0,2,new QTableWidgetItem(m->getpwd()));
        ui->tableWidget->setItem(0,3,new QTableWidgetItem(Utility::getstatus(m->getstatus())));
    }
}

