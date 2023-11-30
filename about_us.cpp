#include "about_us.h"
#include "ui_about_us.h"

about_us::about_us(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about_us)
{
    ui->setupUi(this);
}

about_us::~about_us()
{
    delete ui;
}
