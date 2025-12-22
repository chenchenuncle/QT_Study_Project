#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->spinBox,SIGNAL(valueChanged(int)),this,SLOT(on_pushButton_clicked()));
    connect(ui->doubleSpinBox,SIGNAL(valueChanged(double)),this,SLOT(on_pushButton_clicked()));
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_clicked()
{
    ui->doubleSpinBox_2->setValue(ui->doubleSpinBox->value()*ui->spinBox->value());
}


void Widget::on_pushButton_4_clicked()
{
    ui->spinBox_3->setValue(ui->spinBox_2->value());
    ui->spinBox_4->setValue(ui->spinBox_2->value());
}


void Widget::on_pushButton_6_clicked()
{
    ui->spinBox_2->setValue((int)ui->spinBox_4->value());
    ui->spinBox_3->setValue((int)ui->spinBox_4->value());
}


void Widget::on_pushButton_5_clicked()
{
    ui->spinBox_2->setValue((int)ui->spinBox_3->value());
    ui->spinBox_4->setValue((int)ui->spinBox_3->value());
}


void Widget::on_spinBox_2_valueChanged(int arg1)
{
    ui->spinBox_3->setValue(ui->spinBox_2->value());
    ui->spinBox_4->setValue(ui->spinBox_2->value());
}


void Widget::on_spinBox_4_valueChanged(int arg1)
{
    ui->spinBox_2->setValue((int)ui->spinBox_4->value());
    ui->spinBox_3->setValue((int)ui->spinBox_4->value());
}


void Widget::on_spinBox_3_valueChanged(int arg1)
{
    qDebug("asdadadsdsa");
    ui->spinBox_2->setValue((int)ui->spinBox_3->value());
    ui->spinBox_4->setValue((int)ui->spinBox_3->value());
}


void Widget::on_pushButton_2_clicked()
{
    QString str="123.4567890";
    double doer=123.4567890;
    qDebug("數字=%f",doer);
    qDebug("str=%d",str.toInt());
    qDebug("str=%s",str.toLocal8Bit().data());
}

