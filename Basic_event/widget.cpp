#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QMessageBox>

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/qrc/生成像素风格游戏开局素材图片.png"));
}

void Widget::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton msgbox=QMessageBox::question(this,"消息框","确定要退出吗");
    if(msgbox==QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}

void Widget::keyReleaseEvent(QKeyEvent *event)//释放
{
    Q_UNUSED(event);
    qDebug("按钮被释放！");
}

void Widget::keyPressEvent(QKeyEvent *event)//按下
{
    if(event->type()==QEvent::KeyPress)
    {
        qDebug("按钮被按下！");
        QPoint old;
        switch(event->key())
        {
        case (int)Qt::Key_W:
        case (int)Qt::Key_Up:
            old=ui->label->pos();
            ui->label->move(old.x(),old.y()-5);
            break;
        case (int)Qt::Key_D:
        case (int)Qt::Key_Right:
            old=ui->label->pos();
            ui->label->move(old.x()+5,old.y());
            break;
        case (int)Qt::Key_S:
        case (int)Qt::Key_Down:
            old=ui->label->pos();
            ui->label->move(old.x(),old.y()+5);
            break;
        case (int)Qt::Key_A:
        case (int)Qt::Key_Left:
            old=ui->label->pos();
            ui->label->move(old.x()-5,old.y());
            break;
        }
    }
}

void Widget::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);
    qDebug("显示窗口触发");
}

void Widget::hideEvent(QHideEvent *event)
{
    Q_UNUSED(event);
    qDebug("隐藏窗口被触发");
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons()==Qt::LeftButton)
    {
        QPoint newpoint=event->pos();
        ui->pushButton->setText(QString("x=%1,t=%2").arg(newpoint.x()).arg(newpoint.y()));
        ui->pushButton->adjustSize();
        ui->pushButton->move(newpoint);
    }
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPixmap pixmap(":/qrc/生成像素风格游戏开局素材图片1.png");
    ui->label->setPixmap(pixmap.scaledToHeight(100));
    this->setAutoFillBackground(true);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}
