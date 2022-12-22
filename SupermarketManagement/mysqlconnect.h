#ifndef MYSQLCONNECT_H
#define MYSQLCONNECT_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QList>
#include"commodity.h"
#include"info.h"
#include"utility.h"
class mysqlconnect
{
    QSqlDatabase db;
    static mysqlconnect*ptr;
public:
    mysqlconnect();
    static mysqlconnect*getconnect();
    QList<Commodity*>getCommoditys(int choice1,int choice2,int choice3,const QString&str="");
    long long getCommodityNum();
    bool addCommodity(Commodity*c);
    bool delCommodity(Commodity*c);
    bool updateCommodity(Commodity*c,Commodity*newc);
    QList<Manager*>getManagers();
    Manager*getManager(const QString&id);
    QList<Manager*>getWaitCheckManagers();
    bool addManager(Manager*m);
    bool delManager(Manager*m);
    bool updateManager(Manager*m);
    Admin*getAdmin();
    ~mysqlconnect();
};

#endif // MYSQLCONNECT_H
