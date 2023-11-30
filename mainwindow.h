#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
void save(QWidget *h);
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Insert_key_clicked();

    void on_Change_ky_clicked();

    void on_Searh_key_clicked();

    void on_end_clicked();

    void on_historty_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
