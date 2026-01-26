#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>

QList<QTableWidgetItem*> MainWindow::Completed(QString name, int eca, QString ddyy, QString nar, int cas, bool book,int ID)
{
    QList<QTableWidgetItem*> listtiem;
    QTableWidgetItem* tiem;
    //名字类型
    tiem= new QTableWidgetItem(name,MainWindow::name);
    tiem->setData(Qt::UserRole,ID);
    tiem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEditable|Qt::ItemIsSelectable);
    listtiem.append(tiem);
    //性别类型
    if(eca==0)
    {
        tiem=new QTableWidgetItem("女",MainWindow::sca);
        tiem->setIcon(QIcon(":/qrc/生成图标1.png"));
    }
    else
    {
        tiem=new QTableWidgetItem("男",MainWindow::sca);
        tiem->setIcon(QIcon(":/qrc/生成图标.png"));
    }
    tiem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsSelectable);
    listtiem.append(tiem);
    //出生日期
    tiem=new QTableWidgetItem(ddyy,MainWindow::ym);
    tiem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsSelectable);
    listtiem.append(tiem);
    //名族
    tiem=new QTableWidgetItem(nar,MainWindow::naer);
    tiem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsSelectable);
    listtiem.append(tiem);
    //分数
    tiem=new QTableWidgetItem(QString("%1").arg(cas),MainWindow::cas);
    tiem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEditable|Qt::ItemIsSelectable);
    listtiem.append(tiem);
    //是否是党员
    tiem=new QTableWidgetItem("党员",MainWindow::sar);
    tiem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable);
    if(book==true)
        tiem->setCheckState(Qt::Checked);
    else
        tiem->setCheckState(Qt::Unchecked);
    tiem->setBackground(QBrush("#ffff00"));
    listtiem.append(tiem);
    return listtiem;
}

QString MainWindow::sta(QTableWidgetItem* tiem)
{
    if((int)tiem->type()==1005)
        if(tiem->checkState()==Qt::Unchecked)
            return"当前单元格类型：群众";
        else
            return "当前单元格类型：党员";
    return "当前单元格类型的："+strname.at((int)tiem->type()-1000);
}

void MainWindow::do_comtiem(int cun, QList<QTableWidgetItem *> listtiem)//添加空行
{
    ui->tableWidget->insertRow(cun);
    for(int i=0;i<listtiem.size();i++)
        ui->tableWidget->setItem(cun,i,listtiem.at(i));
}


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Display_1=new QLabel("当前单元格坐标:");
    Display_2=new QLabel("当前单元格类型:");
    Display_3=new QLabel("学生ID:");
    ui->statusbar->addWidget(Display_1,200);
    ui->statusbar->addWidget(Display_2,200);
    ui->statusbar->addPermanentWidget(Display_3,300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QStringList list;
    QTableWidgetItem* tiem;
    QFont font;
    font.setBold(true);
    list<<"姓名"<<"性别"<<"出生日期"<<"名族"<<"分数"<<"是否党员";
    for(int i=0;i<list.size();i++)
    {
        tiem=new QTableWidgetItem(list.at(i),name+i);
        tiem->setFont(font);
        tiem->setForeground(Qt::red);
        ui->tableWidget->setHorizontalHeaderItem(i,tiem);
        ui->tableWidget->setColumnCount(6);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if(ui->tableWidget->rowCount()>ui->spinBox->value()&&ui->tableWidget->item(ui->tableWidget->rowCount(),name)==nullptr)
    {
        Display_1->setText("设置的行数小于学生人数！");
        return ;
    }
    ui->tableWidget->setRowCount(ui->spinBox->value());
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->tableWidget->setRowCount(0);
    QString name("学生"),str1,str2("汉族");
    int seac,ID;    //性别，学号
    ID=QRandomGenerator::global()->bounded(10000,100000)*100;
    for(int i=0;i<ui->spinBox->value();i++)
    {
        seac=QRandomGenerator::global()->bounded(0,2);
        str1=QString("%1-%2-%3").arg(QRandomGenerator::global()->bounded(2002,2009)).arg(QRandomGenerator::global()->bounded(1,13)).arg(QRandomGenerator::global()->bounded(1,31));
        if(QRandomGenerator::global()->bounded(1,6)/5)//把是否是党员身份交给随机数
            do_comtiem(i,Completed(name+QString("%1").arg(i),seac,str1,str2,QRandomGenerator::global()->bounded(1,101),true,ID+i+1));
        else
            do_comtiem(i,Completed(name+(QString("%1").arg(i)),seac,str1,str2,QRandomGenerator::global()->bounded(1,101),false,ID+i+1));
    }
}

void MainWindow::on_pushButton_4_clicked()  //转专业同学
{
    if(ui->tableWidget->currentRow()<0)
        return ;
    int ID=QRandomGenerator::global()->bounded(10000,100000)*100;
    ID+=21;
    do_comtiem(ui->tableWidget->currentRow(),Completed("转专业同学21",1,"2005-03-26","回族",72,true,ID));
}

void MainWindow::on_pushButton_5_clicked()
{
    int row=ui->tableWidget->rowCount()-1;
    QTableWidgetItem* item=ui->tableWidget->item(row,isname);
    for(;row>=0;row--)
    {
        item=ui->tableWidget->item(row,isname);
        if(item!=nullptr&&item->data(Qt::UserRole).toInt()>=0)
            break ;
    }
    if(row<0)
    {
        Display_1->setText("学生没有ID或者表格没有学生信息！");
        return ;
    }
    int ID=item->data(Qt::UserRole).toInt()+1;
    do_comtiem(row+1,Completed("新生",1,"2005-03-26","苗族",80,false,ID));
}

void MainWindow::on_pushButton_6_clicked()
{
    if(ui->tableWidget->currentRow()==-1)
    {
        Display_1->setText("没有选择行表格！");
        return ;
    }
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->plainTextEdit->clear();
    for(int i=0;i<ui->tableWidget->rowCount();i++)
    {
        if(ui->tableWidget->item(i,isname)==nullptr)
            continue;
        QString str;
        for(int j=0;j<5;j++)
            str+=ui->tableWidget->item(i,j)->text()+"\t";
        if(ui->tableWidget->item(i,5)->checkState()==Qt::Checked)
            str+="党员";
        else
            str+="群众";
        ui->plainTextEdit->appendPlainText(str);
    }
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked)
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
    else
        ui->tableWidget->setEditTriggers(QAbstractItemView::SelectedClicked);
}

void MainWindow::on_checkBox_2_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_checkBox_3_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_checkBox_4_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void MainWindow::on_radioButton_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


void MainWindow::on_radioButton_2_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}


void MainWindow::on_tableWidget_itemClicked(QTableWidgetItem *item)
{
    if(item==nullptr)
        return ;
    Display_1->setText(QString("当前单元格坐标：%1行，%2列").arg(item->row()).arg(item->column()));
    Display_2->setText(sta(item));
    Display_3->setText(QString::asprintf("学生ID:%d",ui->tableWidget->item(item->row(),isname)->data(Qt::UserRole).toInt()));
}

