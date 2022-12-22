#include "mysqlconnect.h"

mysqlconnect::mysqlconnect()
{
    this->db=QSqlDatabase::addDatabase("QMYSQL");
    this->db.setHostName("localhost");
    this->db.setPort(3306);
    this->db.setDatabaseName("qtwork");
    this->db.setUserName("root");
    this->db.setPassword("qwer1234mnbv");
    this->db.open();
}

QList<Commodity*> mysqlconnect::getCommoditys(int choice1,int choice2,int choice3,const QString&str)
{
    QSqlQuery query(this->db);
    if(str=="")
    {
        query.exec(Utility::GET_ALL_COMMODITY);
    }
    else
    {
        switch(choice1)
        {
        case 1:
            switch(choice2)
            {
            case 1:
                switch(choice3)
                {
                case 1:
                    query.prepare(Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRICE_ASC);
                    query.bindValue(":type",str);
                    query.exec();
                    break;
                case 2:
                    query.prepare(Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_NUM_ASC);
                    query.bindValue(":type",str);
                    query.exec();
                    break;
                case 3:
                    query.prepare(Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRODUCER_ASC);
                    query.bindValue(":type",str);
                    query.exec();
                    break;
                }break;
            case 2:
                switch(choice3)
                {
                case 1:
                    query.prepare(Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRICE_DESC);
                    query.bindValue(":type",str);
                    query.exec();
                    break;
                case 2:
                    query.prepare(Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_NUM_DESC);
                    query.bindValue(":type",str);
                    query.exec();
                    break;
                case 3:
                    query.prepare(Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRODUCER_DESC);
                    query.bindValue(":type",str);
                    query.exec();
                    break;
                }break;
            }break;
        case 2:
            switch(choice2)
            {
            case 1:
                switch(choice3)
                {
                case 1:
                    query.prepare(Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRICE_ASC);
                    query.bindValue(":name",str);
                    query.exec();
                    break;
                case 2:
                    query.prepare(Utility::GET_COMMODITY_BY_NAME_ORDER_BY_NUM_ASC);
                    query.bindValue(":name",str);
                    query.exec();
                    break;
                case 3:
                    query.prepare(Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRODUCER_ASC);
                    query.bindValue(":name",str);
                    query.exec();
                    break;
                }break;
            case 2:
                switch(choice3)
                {
                case 1:
                    query.prepare(Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRICE_DESC);
                    query.bindValue(":name",str);
                    query.exec();
                    break;
                case 2:
                    query.prepare(Utility::GET_COMMODITY_BY_NAME_ORDER_BY_NUM_DESC);
                    query.bindValue(":name",str);
                    query.exec();
                    break;
                case 3:
                    query.prepare(Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRODUCER_DESC);
                    query.bindValue(":name",str);
                    query.exec();
                    break;
                }break;
            }break;
        case 3:
            switch(choice2)
            {
            case 1:
                switch(choice3)
                {
                case 1:
                    query.prepare(Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRICE_ASC);
                    query.bindValue(":producer",str);
                    query.exec();
                    break;
                case 2:
                    query.prepare(Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_NUM_ASC);
                    query.bindValue(":producer",str);
                    query.exec();
                    break;
                case 3:
                    query.prepare(Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRODUCER_ASC);
                    query.bindValue(":producer",str);
                    query.exec();
                    break;
                }break;
            case 2:
                switch(choice3)
                {
                case 1:
                    query.prepare(Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRICE_DESC);
                    query.bindValue(":producer",str);
                    query.exec();
                    break;
                case 2:
                    query.prepare(Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_NUM_DESC);
                    query.bindValue(":producer",str);
                    query.exec();
                    break;
                case 3:
                    query.prepare(Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRODUCER_DESC);
                    query.bindValue(":producer",str);
                    query.exec();
                    break;
                }break;
            }break;
        }
    }
    QList<Commodity*>l;
    while(query.next())
    {
        Commodity*c=new Commodity(query.value(0).toInt(),query.value(1).toString(),query.value(2).toDouble(),query.value(3).toInt(),query.value(4).toString(),query.value(5).toString());
        l.append(c);
    }
    return l;
}

long long mysqlconnect::getCommodityNum()
{
    long long res=0;
    QList<Commodity*>list=mysqlconnect::getCommoditys(1,1,1);
    for(auto i:list)
        res+=i->getnum();
    return res;
}

bool mysqlconnect::addCommodity(Commodity *c)
{
    QSqlQuery query(this->db);
    query.prepare(Utility::INSERT_COMMODITY);
    query.bindValue(":type",c->gettype());
    query.bindValue(":name",c->getname());
    query.bindValue(":price",c->getprice());
    query.bindValue(":num",c->getnum());
    query.bindValue(":brand",c->getbrand());
    query.bindValue(":producer",c->getproducer());
    return query.exec();
}

bool mysqlconnect::delCommodity(Commodity *c)
{
    QSqlQuery query(this->db);
    query.prepare(Utility::DELETE_COMMODITY);
    query.bindValue(":type",c->gettype());
    query.bindValue(":name",c->getname());
    query.bindValue(":price",c->getprice());
    query.bindValue(":num",c->getnum());
    query.bindValue(":brand",c->getbrand());
    query.bindValue(":producer",c->getproducer());
    return query.exec();
}

bool mysqlconnect::updateCommodity(Commodity *c, Commodity *newc)
{
    QSqlQuery query(this->db);
    query.prepare(Utility::UPDATE_COMMODITY);
    query.bindValue(":newtype",newc->gettype());
    query.bindValue(":newname",newc->getname());
    query.bindValue(":newprice",newc->getprice());
    query.bindValue(":newnum",newc->getnum());
    query.bindValue(":newbrand",newc->getbrand());
    query.bindValue(":newproducer",newc->getproducer());
    query.bindValue(":type",c->gettype());
    query.bindValue(":name",c->getname());
    query.bindValue(":price",c->getprice());
    query.bindValue(":num",c->getnum());
    query.bindValue(":brand",c->getbrand());
    query.bindValue(":producer",c->getproducer());
    return query.exec();
}

QList<Manager *> mysqlconnect::getManagers()
{
    QSqlQuery query(this->db);
    query.exec(Utility::GET_ALL_EMP);
    QList<Manager*>l;
    while(query.next())
    {
        Manager*m=new Manager(query.value(0).toString(),query.value(1).toString(),query.value(2).toString(),query.value(3).toInt());
        l.append(m);
    }
    return l;
}

Manager *mysqlconnect::getManager(const QString&id)
{
    QSqlQuery query(this->db);
    Manager*m=nullptr;
    query.prepare(Utility::GET_EMP);
    query.bindValue(":id",id);
    query.exec();
    if(query.next())
    {
        m=new Manager(query.value(0).toString(),query.value(1).toString(),query.value(2).toString(),query.value(3).toInt());
    }
    return m;
}

QList<Manager *> mysqlconnect::getWaitCheckManagers()
{
    QSqlQuery query(this->db);
    query.prepare(Utility::GET_WAIT_CHECK_EMP);
    query.bindValue(":status",Utility::WAIT_CHECK);
    query.exec();
    QList<Manager*>l;
    while(query.next())
    {
        Manager*m=new Manager(query.value(0).toString(),query.value(1).toString(),query.value(2).toString(),query.value(3).toInt());
        l.append(m);
    }
    return l;
}

bool mysqlconnect::addManager(Manager *m)
{
    QSqlQuery query(this->db);
    query.prepare(Utility::INSERT_EMP);
    query.bindValue(":id",m->getname());
    query.bindValue(":pwd",m->getpwd());
    query.bindValue(":img",m->getimg());
    query.bindValue(":status",m->getstatus());
    return query.exec();
}

bool mysqlconnect::delManager(Manager *m)
{
    QSqlQuery query(this->db);
    query.prepare(Utility::DELETE_EMP);
    query.bindValue(":id",m->getname());
    return query.exec();
}

bool mysqlconnect::updateManager(Manager *m)
{
    QSqlQuery query(this->db);
    query.prepare(Utility::UPDATE_EMP);
    query.bindValue(":newid",m->getname());
    query.bindValue(":newpwd",m->getpwd());
    query.bindValue(":newimg",m->getimg());
    query.bindValue(":newstatus",m->getstatus());
    query.bindValue(":id",m->getname());
    return query.exec();
}

Admin *mysqlconnect::getAdmin()
{
    QSqlQuery query(this->db);
    query.exec(Utility::GET_ADMIN);
    query.next();
    Admin*a=new Admin(query.value(0).toString(),query.value(1).toString());
    return a;
}

mysqlconnect*mysqlconnect::getconnect()
{
    if(ptr==nullptr)
        ptr=new mysqlconnect();
    return ptr;
}

mysqlconnect*mysqlconnect::ptr=nullptr;

mysqlconnect::~mysqlconnect()
{
    this->db.close();
}
