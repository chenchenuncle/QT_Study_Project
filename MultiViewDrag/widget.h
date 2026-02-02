#ifndef WIDGET_H
#define WIDGET_H

#include "qabstractitemview.h"
#include "qcoreevent.h"
#include "qtreewidget.h"
#include <QWidget>
#include <QKeyEvent>
#include <QMimeData>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Qt::DropAction sta(int);
    int sta(Qt::DropAction dropavtion);
    void do_widget(QAbstractItemView*);//自动更新ui参数设置
    QAbstractItemView* do_widget();   //自动更新widget设置
    void treeview(QTreeWidgetItem*);  //删除树项目


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_radioButton_toggled(bool checked);

    void on_radioButton_4_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_radioButton_3_toggled(bool checked);

    void on_checkBox_toggled(bool checked);

    void on_checkBox_2_toggled(bool checked);

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
