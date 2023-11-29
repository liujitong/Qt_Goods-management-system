#ifndef GLOBAL_H
#define GLOBAL_H

//头文件
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
//结构文件
typedef struct good
{
    string name;
    string brand;
    int num;
    float price;
    good(good *next);
    good();
    struct  good *next;
}goods;
extern goods*  head1;
class global
{};
#endif // GLOBAL_H
