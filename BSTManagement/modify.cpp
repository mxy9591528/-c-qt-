#include "modify.h"
#include "ui_modify.h"
#include"stusql.h"
#include<QMessageBox>

Modify::Modify(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Modify)
{
    ui->setupUi(this);
}

Modify::~Modify()
{
    delete ui;
}

void Modify::on_save_btn_clicked()
{
    Person info;
    info._name=ui->name_line->text();
    info._age=ui->spinBox->value();
    info._grade=ui->grade_line->text().toUInt();
    info._class=ui->class_line->text().toUInt();
    info._stu_id=ui->id_line->text().toInt();
    info._tel=ui->tel_line->text();
    info._wechat=ui->wechat_line->text();
    info._id=m_id;
    auto ptr=stusql::getsql();
    if(isAdd)
        ptr->addStu(info);
    else
        ptr->updatePerson(info);
    QMessageBox::information(nullptr,"提示","保存成功!");
    this->hide();
}


void Modify::on_cancel_btn_clicked()
{
    this->hide();
}

void Modify::setType(bool type,Person info)
{
    isAdd=type;
    if(type)
    {
        ui->name_line->clear();
        ui->class_line->clear();
        ui->grade_line->clear();
        ui->id_line->clear();
        ui->tel_line->clear();
        ui->wechat_line->clear();
        ui->spinBox->setValue(18);
    }
    else
    {
        m_id=info._id;
        ui->name_line->setText(info._name);
        ui->class_line->setText(QString::number(info._class));
        ui->grade_line->setText(QString::number(info._grade));
        ui->id_line->setText(QString::number(info._stu_id));
        ui->tel_line->setText(info._tel);
        ui->wechat_line->setText(info._wechat);
        ui->spinBox->setValue(info._age);
    }
}

