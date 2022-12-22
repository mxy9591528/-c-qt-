#ifndef INFO_H
#define INFO_H
#include<QString>
class Manager
{
    QString name;
    QString pwd;
    QString img;
    int status;
public:
    Manager(QString name,QString pwd,QString img,int status)
    {
        this->name=name;
        this->pwd=pwd;
        this->img=img;
        this->status=status;
    }
    void setname(QString name)
    {
        this->name=name;
    }
    void setpwd(QString pwd)
    {
        this->pwd=pwd;
    }
    void setimg(QString img)
    {
        this->img=img;
    }
    void setstatus(int status)
    {
        this->status=status;
    }
    QString getname()
    {
        return this->name;
    }
    QString getpwd()
    {
        return this->pwd;
    }
    QString getimg()
    {
        return this->img;
    }
    int getstatus()
    {
        return this->status;
    }
};

class Admin
{
    QString name;
    QString pwd;
public:
   Admin(QString name,QString pwd)
   {
       this->name=name;
       this->pwd=pwd;
   }
   void setname(QString name)
   {
       this->name=name;
   }
   void setpwd(QString pwd)
   {
       this->pwd=pwd;
   }
   QString getname()
   {
       return this->name;
   }
   QString getpwd()
   {
       return this->pwd;
   }
};

#endif // INFO_H
