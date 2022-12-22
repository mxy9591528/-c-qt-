#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionnew,&QAction::triggered,[=](){
        QDialog dig(this);
        dig.resize(100,100);
        dig.exec();
        qDebug()<<"模态对话框启动了";
        QDialog*dig2=new QDialog(this);
        dig2->move(200,100);
        dig2->show();
        dig2->setAttribute(Qt::WA_DeleteOnClose);
        qDebug()<<"非模态对话框启动了";
        QMessageBox::critical(this,"critical","ERROR!");//错误
        QMessageBox::information(this,"info","信息");
        QMessageBox::question(this,"question","提问",QMessageBox::Save|QMessageBox::Cancel);
        QMessageBox::warning(this,"WARNING!","警告！");
        QColorDialog::getColor(QColor(255,0,0));
        QString s=QFileDialog::getOpenFileName(this,"打开文件","D:\\edgedownload\\1.jpg","(*jpg)");
        qDebug()<<s;
        bool flag=true;
        QFont font=QFontDialog::getFont(&flag,QFont("华文彩云",36));
        qDebug()<<"字体:"<<font.family().toUtf8().data()<<"字号"<<font.pointSize()<<"是否加粗"<<font.italic();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

