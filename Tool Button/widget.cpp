#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->dial,SIGNAL(sliderMoved(int)),this,SLOT(do_do(int)));
    connect(ui->horizontalScrollBar,SIGNAL(valueChanged(int)),this,SLOT(do_do(int)));
    connect(ui->horizontalSlider,SIGNAL(sliderMoved(int)),this,SLOT(do_do(int)));
    connect(ui->radioButton,SIGNAL(clicked()),this,SLOT(do_go()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(do_go()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_checkBox_clicked(bool checked)
{
    ui->progressBar->setTextVisible(checked);
}

void Widget::do_do(int on)
{
    ui->progressBar->setValue(on);
}

void Widget::do_go()
{
    if(ui->radioButton->isChecked())
        ui->progressBar->setFormat("%p%");
    else
        ui->progressBar->setFormat("%v");

}


void Widget::on_checkBox_2_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);
}

