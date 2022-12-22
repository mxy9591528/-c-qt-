#include "stusql.h"
#include<QCoreApplication>
stusql::stusql(QObject *parent)
    : QObject{parent}
{
}

void stusql::initsql()
{
    if (QSqlDatabase::drivers().isEmpty())
        qDebug()<<"No database drivers found";
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QCoreApplication::applicationDirPath()+"/sqlite.db");
    if(!db.open())
        qDebug()<<"Unable to open database";
}
stusql*stusql::ptrsql=nullptr;
stusql*stusql::getsql(){
    if(nullptr==ptrsql)
        ptrsql=new stusql;
   return ptrsql;
}

quint32 stusql::getsize()
{
    QSqlQuery sql(db);
    sql.exec("select count(id) from student");
    quint32 cnt=0;
    while(sql.next())
        cnt=sql.value(0).toInt();
    return cnt;
}

QList<Person> stusql::getPageStu(quint32 page, int num)
{
    QList<Person>l;
    QSqlQuery sql(db);
    QString sqlstr=QString("select * from student order by id limit %1 offset %2").arg(num).arg(page*num);
    sql.exec(sqlstr);
    Person info;
    while(sql.next())
    {
        info._id=sql.value(0).toInt();
        info._name=sql.value(1).toString();
        info._age=sql.value(2).toUInt();
        info._grade=sql.value(3).toUInt();
        info._class=sql.value(4).toUInt();
        info._stu_id=sql.value(5).toUInt();
        info._tel=sql.value(6).toString();
        info._wechat=sql.value(7).toString();
        l.append(info);
    }
    return l;
}

bool stusql::addStu(Person info)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("insert into student values(null,'%1',%2,%3,%4,%5,'%6','%7')")
            .arg(info._name).arg(info._age).arg(info._grade).arg(info._class).arg(info._stu_id).arg(info._tel).arg(info._wechat);
    return sql.exec(sqlstr);
}

bool stusql::addStu(QList<Person> l)
{
    QSqlQuery sql(db);
    db.transaction();
    for(auto i:l)
    {
        QString sqlstr=QString("insert into student values(null,'%1',%2,%3,%4,%5,'%6','%7')")
                .arg(i._name).arg(i._age).arg(i._grade).arg(i._class).arg(i._stu_id).arg(i._tel).arg(i._wechat);
        sql.exec(sqlstr);
    }
    db.commit();
    return true;
}

bool stusql::delStu(int id)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("delete from student where id = %1").arg(id);
    return sql.exec(sqlstr);
}

bool stusql::clearAll()
{
    QSqlQuery sql(db);
    QString sqlstr=QString("delete from student");
    sql.exec(sqlstr);
    return sql.exec("delete from sqlite_sequence where name='student'");
}

bool stusql::updatePerson(Person info)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("update student set name = '%1',age=%2,grade=%3,class=%4,studentid=%5,tel='%6',wechat='%7' where id=%8")
            .arg(info._name).arg(info._age).arg(info._grade).arg(info._class).arg(info._stu_id).arg(info._tel).arg(info._wechat).arg(info._id);
    return sql.exec(sqlstr);
}

QList<User> stusql::getAllUser()
{
    QList<User>l;
    QSqlQuery sql(db);
    QString sqlstr=QString("select * from user");
    sql.exec(sqlstr);
    User info;
    while(sql.next())
    {
        info.username=sql.value(0).toString();
        info.password=sql.value(1).toString();
        info.authority=sql.value(2).toString();
        l.append(info);
    }
    return l;
}

User stusql::getUser(QString name)
{
    QList<User>l=getAllUser();
    for(auto i:l)
        if(i.username==name)
            return i;
    return{};
}

bool stusql::isUserExist(QString username)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("select *from user where username='%1'").arg(username);
    sql.exec(sqlstr);
    return sql.next();
}

bool stusql::updateUser(User info)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("update user set password='%1' authority='%2' where username='%3'")
            .arg(info.password).arg(info.authority).arg(info.username);
    return sql.exec(sqlstr);
}

bool stusql::addUser(User info)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("insert into user values('%1','%2','%3')")
            .arg(info.username).arg(info.password).arg(info.authority);
    return sql.exec(sqlstr);
}

bool stusql::delUser(QString username)
{
    QSqlQuery sql(db);
    QString sqlstr=QString("delete from user where username = '%1'").arg(username);
    return sql.exec(sqlstr);
}

bool stusql::clearAlluser()
{
    QSqlQuery sql(db);
    QString sqlstr=QString("delete from user");
    sql.exec(sqlstr);
    return sql.exec("delete from sqlite_sequence where name='user'");
}
