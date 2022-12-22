#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"loginwindow.h"
#include<QFile>
#include<QCoreApplication>
#include<QKeyEvent>
#include<QFile>
#include<QRandomGenerator>
#include"Info.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrstusql(nullptr)
{
    ui->setupUi(this);
    QFile file;
    file.setFileName(":/login.css");
    file.open(QIODevice::ReadOnly);
    QString str=file.readAll();
    login_ui.setStyleSheet(str);
    file.close();
    file.setFileName(":/main.css");
    file.open(QIODevice::ReadOnly);
    str=file.readAll();
    this->setStyleSheet(str);
    file.close();

    login_ui.show();
    connect(&login_ui,&LoginWindow::LoginSuccess,[=](){
        login_ui.hide();
        ui->user_label->setText("用户名:"+login_ui.sendUsername());
        this->show();
    });
    ui->treeWidget->setHeaderHidden(true);
    ui->treeWidget->setColumnCount(1);
    ui->treeWidget->setFixedSize(175,600);
    ui->treeWidget->show();
    ui->treeWidget->setGeometry(0,0,175,600);
    //选中单行
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    s<<"学生信息管理系统";
    QTreeWidgetItem*p=new QTreeWidgetItem(ui->treeWidget,s);
    s.clear();
    s<<"学生管理";
    QTreeWidgetItem*p1=new QTreeWidgetItem(p,s);
    hash[s.front()]=p1;
    p->addChild(p1);
    s.clear();
    s<<"管理员管理";
    QTreeWidgetItem*p2=new QTreeWidgetItem(p,s);
    hash[s.front()]=p2;
    p->addChild(p2);
    s.clear();
    s<<"功能系统";
    QTreeWidgetItem*f=new QTreeWidgetItem(ui->treeWidget,s);
    s.clear();
    s.emplace_back("退出登录");
    s.emplace_back("增加");
    s.emplace_back("删除");
    s.emplace_back("修改");
    s.emplace_back("清空");
#if 0
    s.emplace_back("排序");
#endif
    s.emplace_back("模拟数据");
    for(auto val:s)
    {
        QStringList ret(val);
        QTreeWidgetItem*tmp=new QTreeWidgetItem(f,ret);
        f->addChild(tmp);
        hash[val]=tmp;
#if 0
        if(val=="排序")
        {
            QTreeWidgetItem*t1=new QTreeWidgetItem(tmp,QStringList("按姓名排序"));
            QTreeWidgetItem*t2=new QTreeWidgetItem(tmp,QStringList("按学号排序"));
            QTreeWidgetItem*t3=new QTreeWidgetItem(tmp,QStringList("按年龄排序"));
            hash["按姓名排序"]=t1;
            hash["按学号排序"]=t2;
            hash["按年龄排序"]=t3;
            tmp->addChild(t1);
            tmp->addChild(t2);
            tmp->addChild(t3);
        }
#endif
    }
    ui->treeWidget->expandAll();
    ui->search_btn->setFlat(true);
    m_ptrstusql=stusql::getsql();
    m_ptrstusql->initsql();
    s.clear();
    updateTable();
    connect(ui->treeWidget,&QTreeWidget::itemClicked,[=](){
        QTreeWidgetItem*cur=ui->treeWidget->currentItem();
        if(cur==hash["模拟数据"])
        {
            QFile*file=new QFile(QCoreApplication::applicationDirPath()+"/personNameInfo.txt");
            file->open(QIODevice::ReadOnly);
            QTextStream in(file);
            while(!in.atEnd())
                s<<in.readLine();
            QRandomGenerator rand;
            rand.seed(0);
            QList<Person>l;
            for(int i=0;i<s.size();i++)
            {
                Person info;
                info._name=s[i];
                info._age=18;
                info._grade=rand.bounded(7,10);
                info._class=rand.bounded(1,8);
                info._stu_id=rand.bounded(21010101,21201134);
                info._tel="12345678901";
                info._wechat="qwer1234mnbv";
                l.append(info);
            }
            m_ptrstusql->addStu(l);
            s.clear();
            updateTable();
        }
        else if(cur==hash["增加"])
        {
            edit_ui.setType(true);
            edit_ui.exec();
            updateTable();
        }
        else if(cur==hash["清空"])
        {
            m_ptrstusql->clearAll();
            updateTable();
            QMessageBox::information(nullptr,"提示","清除成功!");
        }
        else if(cur==hash["修改"])
        {
            Person info;
            int i=ui->tableWidget->currentRow();
            if(i>=0)
            {
                info._id=ui->tableWidget->item(i,1)->text().toInt();
                info._name=ui->tableWidget->item(i,2)->text();
                info. _age=ui->tableWidget->item(i,3)->text().toUInt();
                info. _grade=ui->tableWidget->item(i,4)->text().toUInt();
                info. _class=ui->tableWidget->item(i,5)->text().toUInt();
                info. _stu_id=ui->tableWidget->item(i,6)->text().toInt();
                info. _tel=ui->tableWidget->item(i,7)->text();
                info. _wechat=ui->tableWidget->item(i,8)->text();
                edit_ui.setType(false,info);
                edit_ui.exec();
                updateTable();
            }
        }
        else if(cur==hash["删除"])
        {
            int i=ui->tableWidget->currentRow();
            if(i>=0)
            {
                int id=ui->tableWidget->item(i,1)->text().toInt();
                m_ptrstusql->delStu(id);
                updateTable();
                QMessageBox::information(nullptr,"提示","删除成功!");
            }
        }
        else if(cur==hash["管理员管理"])
        {

        }
        else if(cur==hash["学生管理"])
        {
            this->show();
        }
        else if(cur==hash["退出登录"])
        {
            login_ui.show();
            this->hide();
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTable()
{
    ui->tableWidget->clear();
    QStringList l;
    l<<"序号"<<"Id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setColumnCount(9);
    ui->tableWidget->setHorizontalHeaderLabels(l);
    auto cnt=m_ptrstusql->getsize();
    ui->num_label->setText(QString("学生数量：%1").arg(cnt));
    QList<Person>list=m_ptrstusql->getPageStu(0,cnt);
    ui->tableWidget->setRowCount(cnt);
    ui->tableWidget->verticalHeader()->setHidden(true);
    for(quint32 i=0;i<cnt;i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(list[i]._id)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(list[i]._name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(list[i]._age)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(list[i]._grade)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(list[i]._class)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(list[i]._stu_id)));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(list[i]._tel));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem(list[i]._wechat));
    }
}



void MainWindow::on_search_btn_clicked()
{
    QString s=ui->search_lineEdit->text();
    if(s.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","筛选输入为空!");
        updateTable();
        return;
    }
    QStringList l;
    l<<"序号"<<"Id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    auto cnt=m_ptrstusql->getsize();
    ui->num_label->setText(QString("学生数量%1").arg(cnt));
    QList<Person>list=m_ptrstusql->getPageStu(0,cnt);
    int index=0;
    for(quint32 i=0;i<cnt;i++)
    {
        if(!list[i]._name.contains(s))
            continue;
        ui->tableWidget->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index,1,new QTableWidgetItem(QString::number(list[i]._id)));
        ui->tableWidget->setItem(index,2,new QTableWidgetItem(list[i]._name));
        ui->tableWidget->setItem(index,3,new QTableWidgetItem(QString::number(list[i]._age)));
        ui->tableWidget->setItem(index,4,new QTableWidgetItem(QString::number(list[i]._grade)));
        ui->tableWidget->setItem(index,5,new QTableWidgetItem(QString::number(list[i]._class)));
        ui->tableWidget->setItem(index,6,new QTableWidgetItem(QString::number(list[i]._stu_id)));
        ui->tableWidget->setItem(index,7,new QTableWidgetItem(list[i]._tel));
        ui->tableWidget->setItem(index,8,new QTableWidgetItem(list[i]._wechat));
        index++;
    }
    ui->tableWidget->setRowCount(index);
}
