#ifndef MYWIDGT_H
#define MYWIDGT_H

//ctrl +r 运行
//ctrl +b 编译
//F4 同名文件切换
//ctrl +f 查找
//ctrl +i 自动对齐
//ctrl +shift+  ↑ ↓
#include <QMainWindow>

class myWidgt : public QMainWindow
{
    Q_OBJECT

public:
    myWidgt(QWidget *parent = nullptr);
    ~myWidgt();
};
#endif // MYWIDGT_H
