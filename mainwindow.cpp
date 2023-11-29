#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insert_windows.h"
#include "serach_table.h"
#include "change_windows.h"
#include "all_out.h"
#include "global.h"
#include "qfiledialog.h"
#include "fileio.h"
#include "QMessageBox"
#include <Qdebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Insert_key_clicked()
{
    insert_windows *iw=new insert_windows;
    iw->show();
}


void MainWindow::on_Change_ky_clicked()
{
    change_windows *cw=new change_windows;
    cw->show();
}


void MainWindow::on_Searh_key_clicked()
{
    serach_table *st=new serach_table;
    st->show();
}


void MainWindow::on_end_clicked()
{

int ret=QMessageBox::question(this,QMessageBox::tr("保存文件"),QMessageBox::tr("您要保存文件吗"),QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel, QMessageBox::Cancel);
        switch(ret) {
    case QMessageBox::Save:
         save(this);
        this->close();
        // Save was clicked
        break;
    case QMessageBox::Discard:
        this->close();
        break;
    default:
        // should never be reached
        break;
    };
}
void save(QWidget *h)
{
    QString path;
    do{
    path=  QFileDialog::getSaveFileName(h,"保存文件",".",QFileDialog::tr("文本文件(*.txt);;自定义数据文本文件(*.ml);;所有文件(*.*)"));
        if(path.isEmpty())
        {
            QMessageBox::information(h,QMessageBox::tr("提示"),QMessageBox::tr("您未选择任何文件"));
        }
    }while(path.isEmpty());
        end(head1,path);

}

void MainWindow::on_historty_clicked()
{
        QString path=  QFileDialog::getOpenFileName(this,"打开文件",".",tr("文本文件(*.txt);;自定义数据文本文件(*.ml);;所有文件(*.*)"));
    if(path.isEmpty())
    {
        QMessageBox::information(this,QMessageBox::tr("提示"),QMessageBox::tr("您未选择任何文件"));
    }
    else{
            create_head(head1,path);
    }
    }


void MainWindow::on_pushButton_clicked()
{
    all_out *ao =new all_out;
    ao->show();
}

