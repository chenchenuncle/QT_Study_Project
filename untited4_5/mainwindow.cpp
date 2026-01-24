#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QActionGroup>

void MainWindow::qo_ui()
{
    //对状态栏最左边显示
    bar1=new QLabel();
    bar1->setText("文件名：");
    bar1->setMinimumWidth(150);
    ui->statusBar->addWidget(bar1);

    //对进度放在中间
    jd=new QProgressBar();
    jd->setMinimum(8);
    jd->setMaximum(30);
    jd->setMaximumWidth(500);
    jd->setFormat("%p");
    jd->setValue(ui->plainTextEdit->font().pointSize());
    jd->setTextVisible(true);
    ui->statusBar->addWidget(jd);

    //最右边
    bar2=new QLabel();
    bar2->setMidLineWidth(250);
    bar2->setText("字体："+ui->plainTextEdit->font().family());
    ui->statusBar->addPermanentWidget(bar2);
    //选择英中选择
    py=new QActionGroup(this);
    py->addAction(ui->english);
    py->addAction(ui->cn);
    py->setEnabled(true);
    ui->cn->setChecked(true);
    //选择字体大小
    math=new QSpinBox;
    math->setMinimum(8);
    math->setMaximum(30);
    math->setMaximumWidth(150);
    math->setValue(ui->plainTextEdit->font().pointSize());
    ui->toolBar->addWidget(math);
    //选择字体
    zt=new QFontComboBox;
    zt->setMaximumWidth(200);
    zt->setCurrentFont(ui->plainTextEdit->font());
    ui->toolBar->addWidget(zt);
    //选择退出
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->gb);

}

void MainWindow::qo_do()
{
    connect(math,SIGNAL(valueChanged(int)),this,SLOT(do_sta(int)));
    connect(zt,&QFontComboBox::currentFontChanged,this,&MainWindow::do_mta);
}

void MainWindow::do_sta(int n)
{
    QFont font=ui->plainTextEdit->font();
    font.setPointSize(n);
    ui->plainTextEdit->setFont(font);
}

void MainWindow::do_mta()
{
    ui->plainTextEdit->setFont(zt->currentFont());
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->plainTextEdit);
    qo_ui();
    qo_do();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_zuti_triggered(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}


void MainWindow::on_xt_triggered(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void MainWindow::on_xhx_triggered(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}



void MainWindow::on_xsanwz_triggered()
{
    if(Qt::ToolButtonIconOnly==ui->toolBar->toolButtonStyle())
        ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    else
        ui->toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
}

