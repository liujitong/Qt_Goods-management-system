#include "all.h"
#include "ui_all.h"
All::All(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::All)
{
    ui->setupUi(this);
}

All::~All()
{
    delete ui;
}

void All::traverse(goods *head)
    {
        goods *p;
        p=head->next;
        long i=0;
        while(p!=NULL)
        {
            ui->out->setText("查询结果"+QString(QString::number(i+1)));
                ui->out->append(QString("商品名称:")+QString(QString::fromStdString(p->name)));
                ui->out->append(QString("商品品牌:")+QString(QString::fromStdString(p->brand)));
                ui->out->append(QString("商品数量:")+QString(QString::number(p->num)));
                ui->out->append(QString("商品价格:")+QString(QString::number(p->price)));
                p=p->next;
                i++;
        }
    }
void All::on_begin_clicked()
{
        traverse(head1);
}

