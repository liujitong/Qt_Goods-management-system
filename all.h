#ifndef ALL_H
#define ALL_H
#include "global.h"
#include <QDialog>

namespace Ui {
class All;
}

class All : public QDialog
{
    Q_OBJECT
public:
    explicit All(QWidget *parent = nullptr);
    void traverse(goods *head);
    ~All();

private slots:
    void on_begin_clicked();

private:
    Ui::All *ui;
};

#endif // ALL_H
