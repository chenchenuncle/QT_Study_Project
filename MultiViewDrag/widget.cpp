#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Qt::DropAction Widget::sta(int index)
{
    switch(index)
    {
    case 0:return Qt::CopyAction;
    case 1:return Qt::MoveAction;
    case 2:return Qt::LinkAction;
    case 3:return Qt::ActionMask;
    case 4:return Qt::IgnoreAction;
    case 5:return Qt::TargetMoveAction;
    default:QMessageBox::information(this,"提升信息","没有设置或者填的有误！(设置默认值为可复制！)");
        return Qt::CopyAction;
    }
}

int Widget::sta(Qt::DropAction dropavtion)
{
    switch(dropavtion)
    {
    case Qt::CopyAction:return 0;
    case Qt::MoveAction:return 1;
    case Qt::LinkAction:return 2;
    case Qt::ActionMask:return 3;
    case Qt::IgnoreAction:return 4;
    case Qt::TargetMoveAction:return 5;
    default :return -1;
    }
}

void Widget::do_widget(QAbstractItemView *view)
{
    ui->checkBox->setChecked(view->dragDropOverwriteMode());
    ui->checkBox_2->setChecked(view->dragEnabled());
    ui->comboBox->setCurrentIndex((int)view->dragDropMode());
    ui->comboBox_2->setCurrentIndex(sta(view->defaultDropAction()));
}

QAbstractItemView *Widget::do_widget()
{
    if(ui->radioButton_4->isChecked())
        return static_cast<QAbstractItemView*>(ui->listWidget_2);
    else if(ui->radioButton_2->isChecked())
        return static_cast<QAbstractItemView*>(ui->treeWidget);
    else if(ui->radioButton_3->isChecked())
        return static_cast<QAbstractItemView*>(ui->tableWidget);
    else
    {
        ui->radioButton->setChecked(true);
        return static_cast<QAbstractItemView*>(ui->listWidget);
    }
}

void Widget::treeview(QTreeWidgetItem *item)
{
    if(item==nullptr)
        return ;
    int sum=item->childCount();
    if(sum==0)//没有子项目删除项目
    {
        QTreeWidgetItem* pranint=item->parent();
        if(pranint==nullptr)
            pranint=ui->treeWidget->invisibleRootItem();
        delete pranint->takeChild(pranint->indexOfChild(item));
    }
    for(int i=sum-1;i<0;i--) //有子项目就先删除子项目
    {
        treeview(item->child(i));
    }
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->installEventFilter(this);
    ui->listWidget_2->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);
    ui->tableWidget->installEventFilter(this);
    ui->label_3->installEventFilter(this);
    //允许拖动图片给程序
    ui->label_3->setScaledContents(true);
    ui->label_3->setAcceptDrops(true);
    // 设置固定大小
    ui->label_3->setFixedSize(200, 200);

    // 或设置最小/最大尺寸
    ui->label_3->setMinimumSize(100, 100);
    ui->label_3->setMaximumSize(300, 300);
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)//对4个视图与删除键盘相互
{
    if(event->type()==QEvent::KeyPress&&static_cast<QKeyEvent*>(event)->key()==Qt::Key_Delete)
    {
        if(watched==ui->listWidget)
        {
            QListWidgetItem* item=ui->listWidget->currentItem();
            if(item!=nullptr)
            {
                ui->listWidget->takeItem(ui->listWidget->currentRow());
                delete item;
            }
        }
        if(watched==ui->listWidget_2)
        {
            QListWidgetItem* item=ui->listWidget_2->currentItem();
            if(item!=nullptr)
            {
                ui->listWidget_2->takeItem(ui->listWidget_2->currentRow());
                delete item;
            }
        }
        if(watched==ui->treeWidget)
        {
            treeview(ui->treeWidget->currentItem());
        }
        if(watched==ui->tableWidget)
        {
            QTableWidgetItem* item=ui->tableWidget->currentItem();
            if(item!=nullptr)
            {
                ui->tableWidget->takeItem(ui->tableWidget->currentRow(),ui->tableWidget->currentColumn());
                delete item;
            }
        }
    }
    if(watched==ui->label_3&&event->type()==QEvent::DragEnter)
    {
        const QMimeData* mimedata=static_cast<QDragEnterEvent*>(event)->mimeData();
        if(mimedata->hasUrls())
        {
            QPixmap pixmap;
            if(pixmap.load(mimedata->urls()[0].toLocalFile()))
                ui->label_3->setPixmap(pixmap);
        }
        else
        {
            QMessageBox::information(this,"提示信息","不是图片！");
        }
    }
    return QWidget::eventFilter(watched,event);
}

void Widget::on_radioButton_toggled(bool checked)
{
    Q_UNUSED(checked);
    do_widget(static_cast<QAbstractItemView*>(ui->listWidget));
}


void Widget::on_radioButton_4_toggled(bool checked)
{
    Q_UNUSED(checked);
    do_widget(static_cast<QAbstractItemView*>(ui->listWidget_2));
}


void Widget::on_radioButton_2_toggled(bool checked)
{
    Q_UNUSED(checked);
    do_widget(static_cast<QAbstractItemView*>(ui->treeWidget));
}


void Widget::on_radioButton_3_toggled(bool checked)
{
    Q_UNUSED(checked);
    do_widget(static_cast<QAbstractItemView*>(ui->tableWidget));
}


void Widget::on_checkBox_toggled(bool checked)
{
    do_widget()->setDragDropOverwriteMode(checked);
}


void Widget::on_checkBox_2_toggled(bool checked)
{
    do_widget()->setDragEnabled(checked);
}


void Widget::on_comboBox_currentIndexChanged(int index)
{
    if(index==-1)
    {
        QMessageBox::information(this,"提升信息","没有设置或者填的有误！");
        return;
    }
    do_widget()->setDragDropMode(QAbstractItemView::DragDropMode(index));
}

void Widget::on_comboBox_2_currentIndexChanged(int index)
{
    if(index==-1)
    {
        QMessageBox::information(this,"提升信息","没有设置或者填的有误！");
        return;
    }
    do_widget()->setDefaultDropAction(sta(index));
}

