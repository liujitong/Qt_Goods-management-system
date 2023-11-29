#ifndef CHANGE_WINDOWS_H
#define CHANGE_WINDOWS_H

#include <QDialog>

namespace Ui {
class change_windows;
}

class change_windows : public QDialog
{
    Q_OBJECT

public:
    explicit change_windows(QWidget *parent = nullptr);
    ~change_windows();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::change_windows *ui;
};

#endif // CHANGE_WINDOWS_H
