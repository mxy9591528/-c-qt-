#include "loginwindow.h"
#include "ui_loginwindow.h"
#include<QPainter>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{

    ui->setupUi(this);
}

void LoginWindow::paintEvent(QPaintEvent*e)
{
    QPainter painter(this);
    QPixmap pix(":/Img/LoginBackground.jpg");
    painter.drawPixmap(0,0,QPixmap(":/Img/LoginBackground.jpg"));
}
LoginWindow::~LoginWindow()
{
    delete ui;
}

