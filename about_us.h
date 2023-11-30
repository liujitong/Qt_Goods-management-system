#ifndef ABOUT_US_H
#define ABOUT_US_H

#include <QWidget>

namespace Ui {
class about_us;
}

class about_us : public QWidget
{
    Q_OBJECT

public:
    explicit about_us(QWidget *parent = nullptr);
    ~about_us();

private:
    Ui::about_us *ui;
};

#endif // ABOUT_US_H
