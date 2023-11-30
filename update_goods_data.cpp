#include "update_goods_data.h"
#include "ui_update_goods_data.h"
#include "QMessageBox""
int flag_b=0,flag_p=0;
void update_goods_data::update_brand(goods *headp, const string& name, const string& brand)
{
    goods *p;
    p=headp->next;
    while(p!=NULL)
    {
        if(p->name==name)
        {
            p->brand=brand;
            QMessageBox::information(NULL,QMessageBox::tr("更新结果"),QMessageBox::tr("品牌更新成功"));
            break;
        }
        p=p->next;
    }
    if(p==NULL) QMessageBox::information(NULL,QMessageBox::tr("未更改"),QMessageBox::tr("没有找到商品"));
}
void update_goods_data::update_price(goods *headp, const string& name, float price)
{
    goods *p;
    p=headp->next;
    while(p!=NULL)
    {
        if(p->name==name)
        {
            p->price=price;
            QMessageBox::information(NULL,QMessageBox::tr("更新结果"),QMessageBox::tr("价格更新成功"));
            break;
        }
        p=p->next;
    }
    if(p==NULL) QMessageBox::information(NULL,QMessageBox::tr("未更改"),QMessageBox::tr("没有找到商品"));
}
update_goods_data::update_goods_data(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_goods_data)
{
    ui->setupUi(this);
    ui->brand->setEnabled(false);
    ui->price->setEnabled(false);
}

update_goods_data::~update_goods_data()
{
    delete ui;
}




void update_goods_data::on_brand1_clicked(bool checked)
{
    if(checked)
    {
        ui->brand->setEnabled(true);
        flag_b=1;
    }
    else {
        ui->brand->setEnabled(false);
        flag_b=0;
    }
}


void update_goods_data::on_price1_clicked(bool checked)
{
    if(checked)
    {
        ui->price->setEnabled(true);
        flag_p=1;
    }
    else {
        ui->price->setEnabled(false);
        flag_p=0;
    }
}

void update_goods_data::on_pushButton_clicked()
{
    if(flag_b==1)
    {
        update_brand(head1,ui->name->text().toStdString(),ui->brand->text().toStdString());
    }
    if(flag_p==1)
    {
        update_price(head1,ui->name->text().toStdString(),ui->price->text().toFloat());
    }
}

