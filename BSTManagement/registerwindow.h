#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QDialog *parent = nullptr);
    ~Register();

private:
    Ui::Register *ui;
};

#endif // REGISTERWINDOW_H
