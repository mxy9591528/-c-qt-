#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include <QDebug>
class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    void hungery();
    void hungery(QString foodname);

};

#endif // TEACHER_H
