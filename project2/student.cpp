#include "student.h"

Student::Student(QObject *parent)
    : QObject{parent}
{

}
void Student::treat()
{
    qDebug()<<"请老师吃饭";
}
void Student::treat(QString foodname)
{
    qDebug()<<"请老师吃"<<foodname.toUtf8().data();
}
