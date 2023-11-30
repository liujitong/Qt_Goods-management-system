#ifndef UPDATE_GOODS_DATA_H
#define UPDATE_GOODS_DATA_H

#include <QDialog>
#include "global.h"
#include "QString"
namespace Ui {
class update_goods_data;
}

class update_goods_data : public QDialog
{
    Q_OBJECT

public:
    explicit update_goods_data(QWidget *parent = nullptr);
    ~update_goods_data();
    void update_brand(goods *headp, const string& name, const string& brand);
        void update_price(goods *headp, const string& name, float price);
    private slots:

    void on_brand1_clicked(bool checked);

    void on_price1_clicked(bool checked);


    void on_pushButton_clicked();

private:
    Ui::update_goods_data *ui;
};

#endif // UPDATE_GOODS_DATA_H
