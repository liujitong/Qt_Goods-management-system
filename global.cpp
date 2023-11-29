#include "global.h"
goods* head1=new good(nullptr); // 定义全局变量
good::good(good *next)
{
    this->next=next;
}
good::good()
{
    this->next=nullptr;
}
