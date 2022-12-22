#ifndef MAKEUSER_H
#define MAKEUSER_H

#include <QDialog>
#include"stusql.h"

namespace Ui {
class makeuser;
}

class makeuser : public QDialog
{
    Q_OBJECT

public:
    explicit makeuser(QWidget *parent = nullptr);
    ~makeuser();

private slots:
    void on_make_btn_clicked();

    void on_cancel_btn_clicked();

private:
    Ui::makeuser *ui;
    stusql*m_sql;
};

#endif // MAKEUSER_H
