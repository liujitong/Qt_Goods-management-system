#include "change_windows.h"
#include "global.h"
#include "ui_change_windows.h"
void updating(goods *head, const string& name, int num)
{
    goods *p;
    p=head->next;
    while(p!=NULL)
    {
        if(p->name==name)
        {
            p->num=num;
            //如果数量为0，删除该节点
            if(p->num==0)
            {
                goods *q;
                q=head;
                while(q->next!=p)
                {
                    q=q->next;
                }
                q->next=p->next;
                delete p;
            }
            break;
        }

        p=p->next;
    }
}
change_windows::change_windows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_windows)
{
    ui->setupUi(this);
}

change_windows::~change_windows()
{
    delete ui;
}

void change_windows::on_buttonBox_accepted()
{
    updating(head1,ui->name->text().toStdString(),ui->number->text().toInt());
}

