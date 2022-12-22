#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);
    //menu
    QMenuBar*menu=menuBar();
    setMenuBar(menu);
    QMenu*filemenu=menu->addMenu("文件");
    QMenu*editmenu=menu->addMenu("编辑");
    QAction*newAction=filemenu->addAction("新建");
    filemenu->addSeparator();
    QAction*openAction=filemenu->addAction("打开");

    //tool
    QToolBar*tool=new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,tool);
    tool->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    tool->setFloatable(false);
    //tool->setMovable(false);//总开关
    tool->addAction(newAction);
    tool->addSeparator();
    tool->addAction(openAction);
    QPushButton*btn=new QPushButton("点击",this);
//    btn->setParent(tool);
//    btn->resize(50,20);
//    btn->move(0,60);
    tool->addWidget(btn);
    QStatusBar*status=statusBar();
    setStatusBar(status);
    QLabel*label1=new QLabel("提示信息",this);
    QLabel*label2=new QLabel("右侧提示",this);
    status->addWidget(label1);
    status->addPermanentWidget(label2);

    QDockWidget*dock=new QDockWidget("浮动",this);
    dock->setFloating(false);
    addDockWidget(Qt::BottomDockWidgetArea,dock);
    dock->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);
    QTextEdit*edit=new QTextEdit(this);
    setCentralWidget(edit);

}

MainWindow::~MainWindow()
{
}

