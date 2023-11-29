#include "serach_table.h"
#include "ui_serach_table.h"
#include "global.h"
#include <qstring.h>

int flag=0;
// 按名称查找商品信息

serach_table::serach_table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::serach_table)
{
    ui->setupUi(this);
}

serach_table::~serach_table()
{
    delete ui;
}

void serach_table::search_name(goods *head, const string& name)
{
    goods *p;
    p=head->next;
    while(p!=NULL)
    {
        if(p->name==name)
        {
                ui->out->setText("查询结果");
                ui->out->append(QString("商品名称:")+QString(QString::fromStdString(p->name)));
                ui->out->append(QString("商品品牌:")+QString(QString::fromStdString(p->brand)));
                ui->out->append(QString("商品数量:")+QString(QString::number(p->num)));
                ui->out->append(QString("商品价格:")+QString(QString::number(p->price)));
                break;
        }
        p=p->next;
    }
}

// 按品牌查找商品信息
void serach_table::search_brand(goods *head, const string& type)
{
    goods *p;
    p = head->next;
    while (p != NULL)
    {
        if (p->brand == type)
        {
                ui->out->setText("查询结果");
                ui->out->append(QString("商品名称:")+QString(QString::fromStdString(p->name)));
                ui->out->append(QString("商品品牌:")+QString(QString::fromStdString(p->brand)));
                ui->out->append(QString("商品价格:")+QString(QString::number(p->price)));
                ui->out->append(QString("商品数量:")+QString(QString::number(p->num)));
                break;
        }
        p = p->next;
    }
}

void serach_table::on_pushButton_clicked()
{
    if(flag==1)
    {
        search_name(head1,ui->name->text().toStdString());
    }
    if(flag==2)
    {
        search_brand(head1,ui->brand->text().toStdString());
    }
}



void serach_table::on_name_s_clicked(bool checked)
{
    if(checked)
    {
        ui->brand_s->setCheckable(false);
        ui->brand->setEnabled(false);
        flag=1;
    }
    else{

        ui->brand_s->setCheckable(true);
        ui->brand->setEnabled(true);
        flag=0;
    }
}


void serach_table::on_brand_s_clicked(bool checked)
{
    if(checked)
    {
        ui->name_s->setCheckable(false);
        ui->name->setEnabled(false);
        flag=2;
    }
    else{
        ui->name_s->setCheckable(true);
        ui->name->setEnabled(true);
        flag=0;
    }
}

