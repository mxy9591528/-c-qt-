#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");
    QTreeWidgetItem*litem=new QTreeWidgetItem(QStringList()<<"力量"),
            *sitem=new QTreeWidgetItem(QStringList()<<"敏捷"),
            *kitem=new QTreeWidgetItem(QStringList()<<"智慧");
    ui->treeWidget->addTopLevelItem(litem);
    ui->treeWidget->addTopLevelItem(sitem);
    ui->treeWidget->addTopLevelItem(kitem);

    QTreeWidgetItem*l1=new QTreeWidgetItem(QStringList()<<"死亡骑士"<<"并非死掉的骑士");
    litem->addChild(l1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

