#ifndef SERACH_TABLE_H
#define SERACH_TABLE_H

#include <QDialog>
#include "global.h"
namespace Ui {
class serach_table;
}

class serach_table : public QDialog
{
    Q_OBJECT

public:
    explicit serach_table(QWidget *parent = nullptr);
    void search_name(goods *head, const string& name);
    void search_brand(goods *head, const string& type);
    ~serach_table();

private slots:
    void on_pushButton_clicked();

    void on_name_s_clicked(bool checked);

    void on_brand_s_clicked(bool checked);

private:
    Ui::serach_table *ui;
};

#endif // SERACH_TABLE_H
