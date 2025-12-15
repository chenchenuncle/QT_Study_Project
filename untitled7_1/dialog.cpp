#include "dialog.h"
#include "ui_dialog.h"
#include <QDir>
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QProgressDialog>
#include <QChronoTimer>
#include <QElapsedTimer>
#include <qinputdialog.h>
#include <QMessageBox>

void Dialog::do_sta(bool e)
{
    if(e==false)//
        ui->plainTextEdit->appendPlainText("已经取消");
    else
        ui->plainTextEdit->appendPlainText("成功传入");
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString root=QDir::currentPath();
    QString name=QFileDialog::getOpenFileName(this,"只能打开一个文件",root,("全部文件(*.*)"));
    ui->plainTextEdit->appendPlainText(name);
}


void Dialog::on_pushButton_3_clicked()
{
    QString root=QDir::currentPath();
    QStringList list=QFileDialog::getOpenFileNames(this,"可多选文件",root,("全部文件(*.*)"));
    for(auto i:list)
        ui->plainTextEdit->appendPlainText(i);
}


void Dialog::on_pushButton_4_clicked()
{
    QString root=QDir::currentPath();
    QString str=QFileDialog::getSaveFileName(this,"选择保存文件",root,("c,ui,h,,pro文件(*.cpp *.h *.pro *.ui)"));
    ui->plainTextEdit->appendPlainText(str);
}


void Dialog::on_pushButton_2_clicked()
{
    QColor color=QColorDialog::getColor();
    QPalette palette=ui->plainTextEdit->palette();
    palette.setColor(QPalette::Text,color);
    ui->plainTextEdit->setPalette(palette);
}


void Dialog::on_pushButton_6_clicked()
{
    bool ool=false;
    QFont font=ui->plainTextEdit->font();
    font=QFontDialog::getFont(&ool,font,this,"选择颜色");
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_pushButton_7_clicked()
{
    QProgressDialog Status("正在复制文件","取消",0,200,this);
    Status.setWindowModality(Qt::ApplicationModal);
    Status.setValue(0);
    Status.open(this,SLOT(Dialog::do_sta(bool=true)));
    QElapsedTimer timer;
    for(int i=0;i<200;i++)
    {
        Status.setValue(i);
        //事件30
        Status.setLabelText(QString("正在复制文件%1").arg(i));
        timer.start();
        while(timer.elapsed()<20);
        if(Status.value()==199)
            do_sta(true);
        if(Status.wasCanceled())
        {
            do_sta(false);
            break;
        }
    }
}


void Dialog::on_pushButton_14_clicked()
{
    bool ok=false;
    QString str=QInputDialog::getText(this,"字符串输出","请输入任意数字",QLineEdit::Normal,"",&ok);
    if(ok==false||str.isEmpty());
    else
        ui->plainTextEdit->appendPlainText(str);
}


void Dialog::on_pushButton_15_clicked()
{
    bool ok=false;
    int a=QInputDialog::getInt(this,"输入整数标题","请输入整数",0,-2147483647,2147483647,1,&ok);
    if(ok==true)
        ui->plainTextEdit->appendPlainText(QString("%1").arg(a));
}


void Dialog::on_pushButton_16_clicked()
{
    bool ok=false;
    double a=QInputDialog::getDouble(this,"数字标题","请输入数字",0,-2147483647,2147483647,1,&ok);
    if(ok==true)
        ui->plainTextEdit->appendPlainText(QString("%1").arg(a));
}


void Dialog::on_pushButton_17_clicked()
{
    bool ok=false;
    QStringList list{"优","良","及格","不及格","劣品"};
    QString str=QInputDialog::getItem(this,"选择标题","请选择",list,-1,false,&ok);
    if(ok==true&&!str.isEmpty())
        ui->plainTextEdit->appendPlainText(str);
}


void Dialog::on_pushButton_8_clicked()
{
    if(QMessageBox::question(this,"信息框","是否按确定")==QMessageBox::Yes)
        ui->plainTextEdit->appendPlainText("确定");
    else
        ui->plainTextEdit->appendPlainText("否");
}


void Dialog::on_pushButton_5_clicked()
{
    ui->plainTextEdit->appendPlainText(QFileDialog::getExistingDirectory(this,"只显示目录文件",QDir::currentPath()));
}


void Dialog::on_pushButton_9_clicked()
{
    QMessageBox::information(this,"操作成功","保存成功0");
    ui->plainTextEdit->appendPlainText("按下确定");
}


void Dialog::on_pushButton_10_clicked()
{
    QMessageBox::warning(this,"警告","禁止这样操作！");
    ui->plainTextEdit->appendPlainText("警告按钮");
}


void Dialog::on_pushButton_11_clicked()
{
    QMessageBox::critical(this,"关键提示","确定这样操作？有风险！");
    ui->plainTextEdit->appendPlainText("特别提示框");
}


void Dialog::on_pushButton_12_clicked()
{
    QMessageBox::about(this,"无提示","试验区");
    ui->plainTextEdit->appendPlainText("实验框");
}


void Dialog::on_pushButton_13_clicked()
{
    QMessageBox::aboutQt(this,"Qt版本!");
    ui->plainTextEdit->appendPlainText("Qt版本信息");
}

