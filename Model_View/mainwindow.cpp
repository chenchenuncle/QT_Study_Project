#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //最初ui
    listmodel=new QStringListModel;
    Display=new QLabel;
    ui->listView->setModel(listmodel);
    Display->setText("模型索引:");
    ui->statusbar->addWidget(Display,200);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QStringList str;
    str<<"北京"<<"上海"<<"天津"<<"河北"<<"山东"<<"四川"<<"广东";
    listmodel->setStringList(str);
}

void MainWindow::on_pushButton_2_clicked()
{
   if(listmodel->removeRows(0,listmodel->rowCount())==false)
        Display->setText("没有成功(可能因为超出删除范围或者删除的数据不在列表里)！");
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked==true)
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked);
    else
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void MainWindow::on_pushButton_3_clicked()
{
    listmodel->insertRows(listmodel->rowCount(),1);
    listmodel->setData(listmodel->index(listmodel->rowCount()-1),QVariant("添加项"),Qt::DisplayRole);
}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->listView->currentIndex().isValid()==false)
        Display->setText("未选中项目！");
    listmodel->insertRows(ui->listView->currentIndex().row(),1);
    listmodel->setData(listmodel->index(ui->listView->currentIndex().row()-1),QVariant("插入项"),Qt::DisplayRole);
}

void MainWindow::on_pushButton_5_clicked()
{
    if(ui->listView->currentIndex().isValid()==false)
        Display->setText("未选中项目！");
    listmodel->removeRows(ui->listView->currentIndex().row(),1);
}


void MainWindow::on_pushButton_6_clicked()
{
    if(ui->listView->currentIndex().isValid()==false)
        Display->setText("未选中项目！");
    int newrow=ui->listView->currentIndex().row();
    QModelIndex prant=ui->listView->rootIndex();
    listmodel->moveRows(prant,newrow,1,prant,newrow-1);
}

void MainWindow::on_pushButton_7_clicked()
{
    if(ui->listView->currentIndex().isValid()==false)
        Display->setText("未选中项目！");
    int newrow=ui->listView->currentIndex().row();
    QModelIndex prant=ui->listView->rootIndex();
    listmodel->moveRows(prant,newrow,1,prant,newrow+2);
}

void MainWindow::on_pushButton_8_clicked()
{
    listmodel->sort(0,Qt::AscendingOrder);
}

void MainWindow::on_pushButton_10_clicked()
{
    const QStringList str=listmodel->stringList();
    ui->plainTextEdit->clear();
    for(int i=0;i<str.size();i++)
        ui->plainTextEdit->appendPlainText(str.at(i));
}

void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString str=QString("模型索引：%1行,%2列,").arg(index.row()).arg(index.column());
    Display->setText(str+listmodel->data(index).toString());
}

