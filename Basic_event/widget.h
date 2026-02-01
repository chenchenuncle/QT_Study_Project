#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

protected:
    void paintEvent(QPaintEvent* event);
    void closeEvent(QCloseEvent* event);
    void keyReleaseEvent(QKeyEvent* event);//松开释放
    void keyPressEvent(QKeyEvent* event);//按下释放
    void showEvent(QShowEvent* event);
    void hideEvent(QHideEvent* event);
    void mousePressEvent(QMouseEvent* event);

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
