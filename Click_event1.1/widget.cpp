#include "widget.h"
#include "ui_widget.h"

void Widget::label_1_sta(QEvent*event)//label_1接触控制
{
    if(event->type()==QEvent::HoverEnter)//进入红
    {
        QPalette palette=ui->label->palette();
        palette.setColor(QPalette::WindowText,QColor(Qt::red));
        ui->label->setPalette(palette);
    }
    else if(event->type()==QEvent::HoverLeave)//进入黄
    {
        QPalette palette=ui->label->palette();
        palette.setColor(QPalette::WindowText,QColor(Qt::yellow));
        ui->label->setPalette(palette);
    }
}

void Widget::label_1_sta1(QEvent *event)//按下，释放
{
    if(event->type()==QEvent::MouseButtonPress)//按下
    {
        ui->label->setText("已被按下");
    }
    if(event->type()==QEvent::MouseButtonRelease)
    {
        ui->label->setText("已释放!");
    }
}

void Widget::label_2_sta(QEvent *event)
{
    if(event->type()==QEvent::HoverEnter)//进入红
    {
        QPalette palette=ui->label_2->palette();
        palette.setColor(QPalette::WindowText,QColor(Qt::yellow));
        ui->label_2->setPalette(palette);
    }
    else if(event->type()==QEvent::HoverLeave)//移除黄
    {
        QPalette palette=ui->label_2->palette();
        palette.setColor(QPalette::WindowText,QColor(Qt::red));
        ui->label_2->setPalette(palette);
    }
}

void Widget::label_2_sta1(QEvent *event)
{
    if(event->type()==QEvent::MouseButtonDblClick)
        ui->label_2->setText("已被双击！");
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->installEventFilter(this);
    ui->label_2->installEventFilter(this);
    ui->label->setAttribute(Qt::WA_Hover);
    ui->label->setMouseTracking(true);
    ui->label_2->setAttribute(Qt::WA_Hover);
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *e)
{
    if(watched==ui->label)
    {
        if(e->type()==QEvent::HoverEnter || e->type()==QEvent::HoverLeave)
        {
            label_1_sta(e);
        }
        if(e->type()==QEvent::MouseButtonPress || e->type()==QEvent::MouseButtonRelease)
        {
            label_1_sta1(e);
        }
    }
    if(watched==ui->label_2)
    {
        if(e->type()==QEvent::HoverEnter || e->type()==QEvent::HoverLeave)
        {
            label_2_sta(e);
        }
        if(e->type()==QEvent::MouseButtonDblClick)
        {
            label_2_sta1(e);
        }
    }
    return QWidget::eventFilter(watched,e);
}