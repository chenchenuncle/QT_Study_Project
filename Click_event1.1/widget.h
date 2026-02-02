#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    void label_1_sta(QEvent*event); //实现label_1对鼠标接触的控制
    void label_1_sta1(QEvent*); //实现label_1按下和释放的控制
    void label_2_sta(QEvent*);  //现实label_2对鼠标接触的控制
    void label_2_sta1(QEvent*); //现实label_2双击的控制

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
