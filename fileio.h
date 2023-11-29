#ifndef FILEIO_H
#define FILEIO_H
#include "global.h"
#include "QString"
#include<fstream>
void create_head(goods *headq,QString fn);
void end(goods *headq,QString fn);

class Fileio
{
public:
    Fileio();
};

#endif // FILEIO_H
