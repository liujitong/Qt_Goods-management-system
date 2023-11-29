#ifndef ALL_OUT_H
#define ALL_OUT_H

#include <QDialog>
#include "global.h"
namespace Ui {
class all_out;
}

class all_out : public QDialog
{
    Q_OBJECT

public:
    explicit all_out(QWidget *parent = nullptr);
    void  traverse(goods *head);
    ~all_out();

private slots:
    void on_begin_clicked();

private:
    Ui::all_out *ui;
};

#endif // ALL_OUT_H
