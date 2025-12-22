#include "widget.h"
#include "qforeach.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_checkBox_clicked(bool checked)
{
    if(checked)
        ui->comboBox->setEditable(checked);
    else
        ui->comboBox->setEditable(checked);
}


void Widget::on_pushButton_3_clicked()
{
    QMap<QString,int> str;
    str.insert("北京",10);
    str.insert("上海",21);
    str.insert("天津",22);
    str.insert("大连",411);
    str.insert("锦州",416);
    str.insert("瑜州",516);
    str.insert("福州",591);
    str.insert("青岛",532);
    foreach(const QString &sty,str.keys())
        ui->comboBox_2->addItem(sty,str.value(sty));
}


void Widget::on_pushButton_clicked()
{
    QIcon icon;
    icon.addFile(":/cna/guiangdo.jpg");
    for(int i=0;i<20;i++)
    {
        ui->comboBox->addItem(icon,QString("ritm%1").arg(i));
        ui->comboBox->addItem(QString("itrm%1").arg(i));
    }
}


void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboBox_2_editTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1+" 區號："+ui->comboBox_2->currentData().toString());
}

