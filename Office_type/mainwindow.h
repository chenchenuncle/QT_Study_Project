#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qfontcombobox.h"
#include "qlabel.h"
#include "qprogressbar.h"
#include "qspinbox.h"
#include <QMainWindow>
#include <QActionGroup> // 添加这一行

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QLabel* bar1;
    QLabel* bar2;
    QProgressBar* jd;
    QSpinBox* math;
    QFontComboBox* zt;
    QActionGroup* py;//翻译
    void qo_ui();
    void qo_do();

private slots:
    void do_sta(int);
    void do_mta();

    void on_zuti_triggered(bool checked);

    void on_xt_triggered(bool checked);

    void on_xhx_triggered(bool checked);

    void on_xsanwz_triggered();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
