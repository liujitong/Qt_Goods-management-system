#include "all_out.h"
#include "ui_all_out.h"

all_out::all_out(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::all_out)
{
    ui->setupUi(this);
}

all_out::~all_out()
{
    delete ui;
}

void all_out::traverse(goods *head)
{
    goods *p;
    p=head->next;
    long i=0;
    ui->out->setText("查询结果");
    while(p!=NULL)
    {           ui->out->append("------"+QString(QString::number(i+1))+"------");
                ui->out->append(QString("商品名称:")+QString(QString::fromStdString(p->name)));
                ui->out->append(QString("商品品牌:")+QString(QString::fromStdString(p->brand)));
                ui->out->append(QString("商品价格:")+QString(QString::number(p->price)));
                ui->out->append(QString("商品数量:")+QString(QString::number(p->num)));

                                    p=p->next;
        i++;
    }
}

void all_out::on_begin_clicked()
{
    traverse(head1);
}


