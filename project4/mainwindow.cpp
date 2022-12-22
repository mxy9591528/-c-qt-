#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionnew->setIcon(QIcon("C:\\Users\\马县杨\\Pictures\\Feedback\\{1B06BABE-8E34-4691-9322-A6DFD21C897E}"));
    ui->actionnew->setIcon(QIcon(":/Capture001.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

