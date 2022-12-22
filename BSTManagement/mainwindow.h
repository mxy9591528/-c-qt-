#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"loginwindow.h"
#include"stusql.h"
#include<QMap>
#include<QTreeWidget>
#include"modify.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateTable();
    QString m_username;
private slots:
    void on_search_btn_clicked();
private:
    Ui::MainWindow *ui;
    LoginWindow login_ui;
    stusql*m_ptrstusql;
    QMap<QString,QTreeWidgetItem*>hash;
    QStringList s;
    Modify edit_ui;
};
#endif // MAINWINDOW_H
