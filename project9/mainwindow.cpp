#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");
    ui->tableWidget->setRowCount(5);
    QStringList namelist;
    namelist<<"亚瑟"<<"吕布"<<"老夫子"<<"凯"<<"司马懿";
    QList<QString>genderlist;
    genderlist<<"男"<<"男"<<"男"<<"男"<<"男";

    for(int i=0;i<5;i++)
    {
        int col=0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(namelist[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(genderlist[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(18)));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

