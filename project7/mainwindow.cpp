#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rbtnMan->setChecked(true);
    connect(ui->rbtnWomen,&QPushButton::clicked,[=](){
        qDebug()<<"选中了女!";
    });
    connect(ui->checkBox_4,&QCheckBox::stateChanged,[=](int state){
        qDebug()<<state;
    });

//    QListWidgetItem*item=new QListWidgetItem("抽刀断水水更流");
//    ui->listWidget->addItem(item);
//    item->setTextAlignment(Qt::AlignCenter);
    QStringList list;
    list<<"抽刀断水水更流"<<"举杯消愁愁更愁"<<"人生在世不称意"<<"明朝散发弄扁舟";
    ui->listWidget->addItems(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}

