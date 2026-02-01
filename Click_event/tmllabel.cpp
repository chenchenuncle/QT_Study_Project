#include "tmllabel.h"

TMLlabel::TMLlabel(QWidget *parent):QLabel(parent) { this->setAttribute(Qt::WA_Hover,true);}

bool TMLlabel::event(QEvent *event)
{
    if(event->type()==QEvent::HoverEnter)//进入窗口
    {
        QPalette alette=this->palette();
        alette.setColor(QPalette::WindowText,QColor(Qt::red));
        this->setPalette(alette);
    }
    else if(event->type()==QEvent::HoverLeave)
    {
        QPalette alette=this->palette();
        alette.setColor(QPalette::WindowText,QColor(Qt::yellow));
        this->setPalette(alette);
    }
    return QLabel::event(event);
}

void TMLlabel::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    this->setText("双击标签！");
    this->adjustSize();
}
