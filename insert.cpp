#include "insert.h"

void insert(goods *headaq, const string& name, const string& brand, int num, float price)
{
    goods *p,*q;
    p=headaq;
    while(p->next!=NULL)
    {
        if(p->next->price>price)
        {
            break;
        }
        p=p->next;
    }
    q=new goods;
    q->name = name;
    q->brand = brand;
    q->num=num;
    q->price=price;
    q->next=p->next;
    p->next=q;
}
insert::insert()
{

}
