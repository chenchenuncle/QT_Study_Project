#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>
#include <QFileDialog>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model=new QFileSystemModel(this);
    ui->treeView->setModel(model);
    ui->listView->setModel(model);
    ui->tableView->setModel(model);
    ui->treeView->header()->hideSection(1);
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),this,SLOT(do_sta(QModelIndex)));
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),this,SLOT(do_show(QModelIndex)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::do_sta(const QModelIndex model)
{
    ui->tableView->setRootIndex(model);
    ui->listView->setRootIndex(model);
}

void MainWindow::do_show(const QModelIndex model_1)
{
    QFileInfo fileinfo=model->fileInfo(model_1);
    ui->label_5->setText("文件名:"+fileinfo.fileName());
    ui->label_4->setText("内存大小："+QString("%1").arg(fileinfo.size())+"字节");
    ui->label_3->setText("文件类型："+model->type(model_1));
    ui->label->setText(fileinfo.filePath());
    if(fileinfo.isDir())
        ui->checkBox_2->setChecked(true);
    else
        ui->checkBox_2->setChecked(false);
}

void MainWindow::on_action_1_triggered()
{
    QString str=QFileDialog::getExistingDirectory();
    if(str.isEmpty())
        return ;
    QModelIndex index=model->setRootPath(str);
    ui->treeView->setRootIndex(index);
    ui->listView->setRootIndex(index);
    ui->tableView->setRootIndex(index);
}


void MainWindow::on_radioButton_toggled(bool checked)
{
    if(checked==false)
        return;
    model->setFilter(QDir::AllDirs|QDir::Files|QDir::NoDotAndDotDot);
}


void MainWindow::on_radioButton_2_toggled(bool checked)
{
    if(checked==false)
        return ;
    model->setFilter(QDir::AllDirs|QDir::NoDotAndDotDot);
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()==false)
        return ;
    if(ui->comboBox->currentText().isEmpty())
    {
        model->setNameFilters(QStringList());
        return ;
    }
    QStringList list=ui->comboBox->currentText().split(",");
    model->setNameFilters(list);
    model->setNameFilterDisables(false);
}

