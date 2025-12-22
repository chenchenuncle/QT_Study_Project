#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->timeEdit->setTime(QTime::currentTime());
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->calendarWidget->setSelectedDate(QDate::currentDate());
}

void Widget::on_pushButton_2_clicked()
{
    QString str=ui->timeEdit->text();
    qDebug("现在时间:%s",str.toLocal8Bit().data());
    QTime time=ui->timeEdit->time();
    qDebug("小时：%d",time.hour());
    qDebug("分钟:%d",time.minute());
    qDebug("秒数:%d",time.second());
    qDebug("毫秒:%d",time.msec());
}


void Widget::on_pushButton_4_clicked()
{
    qDebug("日期:%s",ui->dateEdit->text().toLocal8Bit().data());
    QDate date=ui->dateEdit->date();
    qDebug("年数:%d",date.year());
    qDebug("月份:%d",date.month());
    qDebug("天数:%d",date.day());
    qDebug("这年第%d天",date.dayOfYear());
}


void Widget::on_pushButton_6_clicked()
{
    qDebug("获取本地时间:%s",ui->dateTimeEdit->text().toLocal8Bit().data());
}


void Widget::on_pushButton_3_clicked()
{
    ui->timeEdit_2->setTime(QTime::fromString(ui->timeEdit->text(),"hh.mm.ss.zzz"));

}


void Widget::on_pushButton_5_clicked()
{
    ui->dateEdit_2->setDate(QDate::fromString(ui->dateEdit->text(),"yyyy-MM-dd"));
}


void Widget::on_pushButton_7_clicked()
{

    ui->dateTimeEdit_2->setDateTime(QDateTime::fromString(ui->dateTimeEdit->text(),"yyyy-MM-dd hh:mm"));
}


void Widget::on_calendarWidget_clicked(const QDate &date)
{

    ui->lineEdit_4->setText(date.toString("yyyy年MM月dd天"));
}

