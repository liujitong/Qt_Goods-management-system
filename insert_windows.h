#ifndef INSERT_WINDOWS_H
#define INSERT_WINDOWS_H

#include <QDialog>

namespace Ui {
class insert_windows;
}

class insert_windows : public QDialog
{
    Q_OBJECT

public:
    explicit insert_windows(QWidget *parent = nullptr);
    ~insert_windows();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::insert_windows *ui;
};

#endif // INSERT_WINDOWS_H
