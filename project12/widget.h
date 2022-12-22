#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void timerEvent(QTimerEvent*ev);
    bool eventFilter(QObject*obj,QEvent*e);
private:
    int id1,id2;
    Ui::Widget *ui;
};
#endif // WIDGET_H