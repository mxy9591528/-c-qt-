#ifndef STUSQL_H
#define STUSQL_H

#include <QObject>
#include"Info.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
class stusql : public QObject
{
    Q_OBJECT
public:
    static stusql*ptrsql;
    static stusql*getsql();
    explicit stusql(QObject *parent = nullptr);
    void initsql();
    //查询学生数量
    quint32 getsize();
    //查询第几页学生数据,从第0页开始
    QList<Person>getPageStu(quint32 page,int num);
    //增加
    bool addStu(Person info);
    bool addStu(QList<Person>l);
    //删除
    bool delStu(int id);
    //清空
    bool clearAll();
    //修改
    bool updatePerson(Person info);
    //查询所有用户
    QList<User>getAllUser();
    //获取用户信息
    User getUser(QString username);
    //判断用户是否存在
    bool isUserExist(QString username);
    //修改用户信息,用户名不可更改
    bool updateUser(User info);
    //添加单个用户
    bool addUser(User info);
    //删除单个用户
    bool delUser(QString username);
    //删除所有用户
    bool clearAlluser();


signals:
private:
    QSqlDatabase db;
};

#endif // STUSQL_H
