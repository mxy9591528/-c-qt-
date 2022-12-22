#ifndef COMMODITY_H
#define COMMODITY_H
#include<QString>
class Commodity
{
    int type;
    QString name;
    double price;
    int num;
    QString brand;
    QString producer;
public:
    Commodity(){}
    Commodity(int type,QString name,double price,int num,QString brand,QString producer)
    {
        this->settype(type);
        this->setname(name);
        this->setprice(price);
        this->setnum(num);
        this->setbrand(brand);
        this->setproducer(producer);
    }
    void settype(int type)
    {
        this->type=type;
    };
    void setname(QString name)
    {
        this->name=name;
    };
    void setprice(double price)
    {
        this->price=price;
    };
    void setnum(int num)
    {
        this->num=num;
    }
    void setbrand(QString brand)
    {
        this->brand=brand;
    };
    void setproducer(QString producer)
    {
        this->producer=producer;
    };
    int gettype()
    {
        return this->type;
    };
    QString getname()
    {
        return this->name;
    };
    double getprice()
    {
        return this->price;
    };
    int getnum()
    {
        return this->num;
    }
    QString getbrand()
    {
        return this->brand;
    };
    QString getproducer()
    {
        return this->producer;
    };
};

class Food:public Commodity
{
public:
    Food(){}
    Food(int type,QString name,double price,int num,QString brand,QString producer):Commodity(type,name,price,num,brand,producer)
    {
    }
};

class Drink:public Commodity
{
public:
    Drink(){}
    Drink(int type,QString name,double price,int num,QString brand,QString producer):Commodity(type,name,price,num,brand,producer)
    {
    }
};

class Livelihood:public Commodity
{
public:
    Livelihood(){}
    Livelihood(int type,QString name,double price,int num,QString brand,QString producer):Commodity(type,name,price,num,brand,producer)
    {
    }
};

class Cosmetics:public Commodity
{
public:
    Cosmetics(){}
    Cosmetics(int type,QString name,double price,int num,QString brand,QString producer):Commodity(type,name,price,num,brand,producer)
    {
    }
};

#endif // COMMODITY_H
