#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

void MainWindow::do_win_1()
{
    //对初始化列表建立界面
    ui->toolButton_2->setDefaultAction(ui->ico_1);
    ui->toolButton_2->setMaximumWidth(150);
    ui->toolButton_3->setDefaultAction(ui->ico_2);
    ui->toolButton_3->setMaximumWidth(150);
    ui->toolButton_4->setDefaultAction(ui->ico_3);
    ui->toolButton_4->setMaximumWidth(150);
    ui->toolButton_5->setDefaultAction(ui->ico_4);
    ui->toolButton_5->setMaximumWidth(150);
    ui->toolButton_6->setDefaultAction(ui->ico_5);
    ui->toolButton_6->setMaximumWidth(150);

    //对文本框上方建立界面
    ui->toolButton->setDefaultAction(ui->oico);
    ui->toolButton->setMaximumWidth(100);
    ui->toolButton_9->setDefaultAction(ui->ooico_1);
    ui->toolButton_9->setMaximumWidth(100);
    ui->toolButton_11->setDefaultAction(ui->ooico_2);
    ui->toolButton_11->setMaximumWidth(100);
    ui->toolButton_10->setDefaultAction(ui->ooico_3);
    ui->toolButton_10->setMaximumWidth(100);

    //对文本上项选择做下拉菜单界面
    QMenu* menu=new QMenu;
    menu->addAction(ui->ooico_1);
    menu->addAction(ui->ooico_2);
    menu->addAction(ui->ooico_3);
    ui->toolButton->setMenu(menu);

    //对工具栏项选择做下拉菜单界面
    QToolButton* buts=new QToolButton;
    buts->setDefaultAction(ui->oico);
    buts->setPopupMode(QToolButton::MenuButtonPopup);
    buts->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    buts->setMenu(menu);

    //对添加一些界面
    ui->toolBar->addWidget(buts);
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->ocio_2);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);
    do_win_1();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ico_1_triggered()
{
    ui->listWidget->clear();
    QIcon icon;
    icon.addFile(":/qrc/132.bmp");
    QListWidgetItem*item;
    for(int i=0;i<10;i++)
    {
        item=new QListWidgetItem(icon,QString("item %1").arg(i),ui->listWidget);
        item->setCheckState(Qt::Unchecked);
        if(ui->checkBox->isChecked())
            item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        else
            item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->plainTextEdit->appendPlainText("buhsad");
}

void MainWindow::on_ico_5_triggered()
{
    QIcon* icon=new QIcon(":/qrc/132.bmp");
    QListWidgetItem*item=new QListWidgetItem(*icon,QString("additem"));
    item->setCheckState(Qt::Unchecked);
    if(ui->checkBox->isChecked())
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->listWidget->addItem(item);
}

void MainWindow::on_ico_4_triggered()
{
    QIcon* icon=new QIcon(":/qrc/132.bmp");
    QListWidgetItem* item=new QListWidgetItem(*icon,"additem");
    item->setCheckState(Qt::Unchecked);
    if(ui->checkBox->isChecked())
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    else
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->listWidget->insertItem(ui->listWidget->currentRow()+1,item);
}

void MainWindow::on_ico_3_triggered()
{
    QListWidgetItem* item=ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete item;
}


void MainWindow::on_ooico_1_triggered()
{
    // 创建一个QList容器来存储所有列表项
    QList<QListWidgetItem*> allItems;
    
    // 遍历并收集所有列表项到容器中
    for(int i = 0; i < ui->listWidget->count(); ++i) {
        QListWidgetItem* item = ui->listWidget->item(i);
        if(item) {
            allItems.append(item);
        }
    }
    
    // 遍历容器中的所有项并设置为选中状态
    for(auto item : allItems) {
        item->setCheckState(Qt::Checked);
    }
    
    // 强制刷新列表控件
    ui->listWidget->update();
}

void MainWindow::on_ooico_2_triggered()
{
    // 创建一个QList容器来存储所有列表项
    QList<QListWidgetItem*> allItems;
    
    // 遍历并收集所有列表项到容器中
    for(int i = 0; i < ui->listWidget->count(); ++i) {
        QListWidgetItem* item = ui->listWidget->item(i);
        if(item) {
            allItems.append(item);
        }
    }
    
    // 遍历容器中的所有项并设置为未选中状态
    for(auto item : allItems) {
        item->setCheckState(Qt::Unchecked);
    }
    
    // 强制刷新列表控件
    ui->listWidget->update();
}

void MainWindow::on_ooico_3_triggered()
{
    int sum=ui->listWidget->count();
    for(int i=0;i<sum;i++)
    {
        if(ui->listWidget->item(i)->checkState()==Qt::Checked)
            ui->listWidget->item(i)->setCheckState(Qt::Unchecked);
        else
            ui->listWidget->item(i)->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    if(current!=nullptr)
    {
        if(previous!=nullptr)
            ui->lineEdit->setText("以前项"+previous->text()+";当前项："+current->text());
        else {
            ui->lineEdit->setText("当前项目："+current->text());
        }
    }
}

void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    Q_UNUSED(pos);
    QMenu* menu=new QMenu;
    menu->addAction(ui->ico_1);
    menu->addAction(ui->ico_2);
    menu->addAction(ui->ico_5);
    menu->addAction(ui->ico_3);
    menu->addAction(ui->ico_4);
    menu->addSeparator();
    menu->addAction(ui->ooico_1);
    menu->addAction(ui->ooico_2);
    menu->addAction(ui->ooico_3);
    menu->exec(QCursor::pos());
    delete menu;
}



void MainWindow::on_toolButton_7_clicked()
{
    ui->listWidget->sortItems(Qt::AscendingOrder);
}


void MainWindow::on_toolButton_8_clicked()
{
    ui->listWidget->sortItems(Qt::DescendingOrder);
}


void MainWindow::on_radioButton_toggled(bool checked)
{
    ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    ui->plainTextEdit->appendPlainText(QString("currentrowchanged信号被发射%1").arg(currentRow));
}


void MainWindow::on_listWidget_currentTextChanged(const QString &currentText)
{
    ui->plainTextEdit->appendPlainText("currenttextchanged信号被发射"+currentText);
}

void MainWindow::on_listWidget_itemChanged(QListWidgetItem *item)
{
    ui->plainTextEdit->appendPlainText("itemchanged信号被发射"+item->text());
}

void MainWindow::on_listWidget_itemSelectionChanged()
{
    ui->plainTextEdit->appendPlainText("itemselectionchanged信号被发射");
}

