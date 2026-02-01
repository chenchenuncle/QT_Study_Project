#ifndef TMLLABEL_H
#define TMLLABEL_H

#include <QEvent>
#include <QLabel>

class TMLlabel : public QLabel
{
    Q_OBJECT

public:
    TMLlabel(QWidget*);
    ~TMLlabel(){};
    bool event(QEvent*);//对接触事件做出判断

protected:
    void mouseDoubleClickEvent(QMouseEvent *event);//双击事件

};

#endif // TMLLABEL_H
