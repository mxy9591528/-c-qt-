#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>
#include"Info.h"
namespace Ui {
class Modify;
}

class Modify : public QDialog
{
    Q_OBJECT

public:
    explicit Modify(QDialog *parent = nullptr);
    ~Modify();
    void setType(bool type,Person info={});
private slots:
    void on_save_btn_clicked();

    void on_cancel_btn_clicked();
private:
    Ui::Modify *ui;
    bool isAdd;
    int m_id;
};

#endif // MODIFY_H
