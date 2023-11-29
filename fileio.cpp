#include "fileio.h"
#include <qmessagebox.h>
#include "insert.h"
// 每日开始营业之前，需将以文件形式保存的数据恢复成链表结构的有序表。
void create_head(goods *headq,QString fn) // 创建链表
{
    ifstream fin(fn.toStdString());
    if(!fin)
    {
        QMessageBox::critical(NULL,QMessageBox::tr("错误"),QMessageBox::tr("文件打开失败"));
        exit(0);
    }
    char name[20];
    char brand[20];
    int num;
    float price;
    while(fin>>name>>brand>>num>>price)
    {
        insert(headq,name,brand,num,price);
    }
    fin.close();
}
// 结束营业，将链表中的数据写入文件
void end(goods *headq,QString fn)
{
    ofstream fout(fn.toStdString());
    if(!fout)
    {
        QMessageBox::critical(NULL,QMessageBox::tr("错误"),QMessageBox::tr("文件打开失败"));
        exit(0);
    }
    goods *p;
    p=headq->next;
    while(p!=NULL)
    {
        fout<<p->name<<" "<<p->brand<<" "<<p->num<<" "<<p->price<<endl;
        p=p->next;
    }
    fout.close();
}

Fileio::Fileio()
{

}
