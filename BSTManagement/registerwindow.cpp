#include "registerwindow.h"
#include "ui_registerwindow.h"

Register::Register(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
delete ui;
}
