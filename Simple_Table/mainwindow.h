#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QLabel* Display_1;  //显示当前项目坐标
    QLabel* Display_2;  //显示当前单元格类型
    QLabel* Display_3;  //显示学生ID

public:
    enum tiem{name=1000,sca,ym,naer,cas,sar};//项目类型
    enum istiem{isname,issca,isym,isnaer,iscas,issar};//项目类别的第几列
    const QList<QString> strname={"名字","性别","出生日期","名族","分数"};//获取类别
    QList<QTableWidgetItem*> Completed(QString,int,QString,QString,int,bool,int);    //完成一个人信息
    QString sta(QTableWidgetItem*);                    //识别项目类型及加入显示组件
    void do_comtiem(int cun,QList<QTableWidgetItem*>); //把个人信息加入在cun行


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_checkBox_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_checkBox_4_clicked(bool checked);


    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
