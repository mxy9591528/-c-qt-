#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString path=QFileDialog::getOpenFileName(this,"打开文件","C:/Users/马县杨/Desktop");
        ui->lineEdit->setText(path);
        QFile file(path);
        file.open(QIODevice::ReadOnly);
        QByteArray array=file.readAll();
        ui->textEdit->setText(array);
        file.close();
//        file.open(QIODevice::Append);
//        file.write("nononono");
//        file.close();
        QFileInfo info(path);
        qDebug()<<"大小:"<<info.size()<<"后缀名:"<<info.suffix()<<"文件名:"<<info.fileName()<<"文件路径:"<<info.filePath()
               <<"创建日期:"<<info.birthTime().toString("yyyy/MM/dd hh:mm:ss");
    });
}

Widget::~Widget()
{
    delete ui;
}

