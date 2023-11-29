#include "insert_windows.h"
#include "ui_insert_windows.h"
#include "global.h"
#include "insert.h"
insert_windows::insert_windows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insert_windows)
{
    ui->setupUi(this);
}
// 向链表中插入商品节点，按照单价的升序排列链表
insert_windows::~insert_windows()
{
    delete ui;
}

void insert_windows::on_buttonBox_accepted()
{

    insert(head1,ui->name->text().toStdString(),ui->brand->text().toStdString(),ui->amount->text().toInt(),ui->price->text().toFloat());

}

