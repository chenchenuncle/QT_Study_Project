/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *ico_1;
    QAction *ico_2;
    QAction *ico_5;
    QAction *ico_3;
    QAction *ico_4;
    QAction *oico;
    QAction *ocio_2;
    QAction *ooico_1;
    QAction *ooico_2;
    QAction *ooico_3;
    QWidget *centralwidget;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QToolButton *toolButton_11;
    QLabel *label;
    QToolButton *toolButton_10;
    QToolButton *toolButton_9;
    QCheckBox *checkBox;
    QToolButton *toolButton;
    QListWidget *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(515, 328);
        ico_1 = new QAction(MainWindow);
        ico_1->setObjectName("ico_1");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\207.1png.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ico_1->setIcon(icon);
        ico_1->setMenuRole(QAction::MenuRole::NoRole);
        ico_2 = new QAction(MainWindow);
        ico_2->setObjectName("ico_2");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\2072.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ico_2->setIcon(icon1);
        ico_2->setMenuRole(QAction::MenuRole::NoRole);
        ico_5 = new QAction(MainWindow);
        ico_5->setObjectName("ico_5");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\2073.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ico_5->setIcon(icon2);
        ico_5->setMenuRole(QAction::MenuRole::NoRole);
        ico_3 = new QAction(MainWindow);
        ico_3->setObjectName("ico_3");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\2071.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ico_3->setIcon(icon3);
        ico_3->setMenuRole(QAction::MenuRole::NoRole);
        ico_4 = new QAction(MainWindow);
        ico_4->setObjectName("ico_4");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\207.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ico_4->setIcon(icon4);
        ico_4->setMenuRole(QAction::MenuRole::NoRole);
        oico = new QAction(MainWindow);
        oico->setObjectName("oico");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        oico->setIcon(icon5);
        oico->setMenuRole(QAction::MenuRole::NoRole);
        ocio_2 = new QAction(MainWindow);
        ocio_2->setObjectName("ocio_2");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        ocio_2->setIcon(icon6);
        ocio_2->setMenuRole(QAction::MenuRole::NoRole);
        ooico_1 = new QAction(MainWindow);
        ooico_1->setObjectName("ooico_1");
        ooico_1->setMenuRole(QAction::MenuRole::NoRole);
        ooico_2 = new QAction(MainWindow);
        ooico_2->setObjectName("ooico_2");
        ooico_2->setMenuRole(QAction::MenuRole::NoRole);
        ooico_3 = new QAction(MainWindow);
        ooico_3->setObjectName("ooico_3");
        ooico_3->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(0, 20, 511, 202));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setHandleWidth(5);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName("toolBox");
        toolBox->setStyleSheet(QString::fromUtf8(""));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 206, 118));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        toolButton_2 = new QToolButton(page_2);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(page_2);
        toolButton_3->setObjectName("toolButton_3");
        toolButton_3->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(page_2);
        toolButton_4->setObjectName("toolButton_4");
        toolButton_4->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton_4->setArrowType(Qt::ArrowType::NoArrow);

        verticalLayout_2->addWidget(toolButton_4);

        toolButton_5 = new QToolButton(page_2);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(page_2);
        toolButton_6->setObjectName("toolButton_6");
        toolButton_6->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout_2->addWidget(toolButton_6);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\2077.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolBox->addItem(page_2, icon7, QString::fromUtf8("\351\241\271\347\233\256\346\223\215\344\275\234"));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 206, 118));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(page);
        radioButton->setObjectName("radioButton");
        radioButton->setChecked(false);

        verticalLayout->addWidget(radioButton);

        toolButton_7 = new QToolButton(page);
        toolButton_7->setObjectName("toolButton_7");
        toolButton_7->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton_7->setArrowType(Qt::ArrowType::UpArrow);

        verticalLayout->addWidget(toolButton_7);

        toolButton_8 = new QToolButton(page);
        toolButton_8->setObjectName("toolButton_8");
        toolButton_8->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton_8->setArrowType(Qt::ArrowType::DownArrow);

        verticalLayout->addWidget(toolButton_8);

        verticalSpacer = new QSpacerItem(108, 55, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\2078.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolBox->addItem(page, icon8, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 206, 118));
        formLayout = new QFormLayout(page_3);
        formLayout->setObjectName("formLayout");
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, pushButton);

        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName("pushButton_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, pushButton_2);

        plainTextEdit = new QPlainTextEdit(page_3);
        plainTextEdit->setObjectName("plainTextEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, plainTextEdit);

        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/qrc/\345\210\266\344\275\234\347\211\271\346\256\212\347\205\247\347\211\2079.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolBox->addItem(page_3, icon9, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        splitter->addWidget(toolBox);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(56);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        toolButton_11 = new QToolButton(layoutWidget);
        toolButton_11->setObjectName("toolButton_11");

        gridLayout->addWidget(toolButton_11, 2, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        toolButton_10 = new QToolButton(layoutWidget);
        toolButton_10->setObjectName("toolButton_10");

        gridLayout->addWidget(toolButton_10, 2, 3, 1, 1);

        toolButton_9 = new QToolButton(layoutWidget);
        toolButton_9->setObjectName("toolButton_9");

        gridLayout->addWidget(toolButton_9, 2, 1, 1, 1);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 0, 3, 1, 1);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName("toolButton");
        toolButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(false);

        gridLayout->addWidget(toolButton, 2, 0, 1, 1);

        listWidget = new QListWidget(layoutWidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setContextMenuPolicy(Qt::ContextMenuPolicy::CustomContextMenu);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustIgnored);
        listWidget->setSortingEnabled(false);

        gridLayout->addWidget(listWidget, 3, 0, 1, 4);

        splitter->addWidget(layoutWidget);
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setOrientation(Qt::Orientation::Horizontal);
        toolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(ico_1);
        toolBar->addAction(ico_2);
        toolBar->addAction(ico_4);
        toolBar->addAction(ico_5);
        toolBar->addAction(ico_3);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(ocio_2, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(pushButton, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(ico_2, &QAction::triggered, listWidget, qOverload<>(&QListWidget::clear));

        toolBox->setCurrentIndex(1);
        toolBox->layout()->setSpacing(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ico_1->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        ico_1->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        ico_2->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        ico_2->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        ico_5->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        ico_5->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271\347\233\256", nullptr));
#endif // QT_CONFIG(tooltip)
        ico_3->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271\347\233\256", nullptr));
        ico_4->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        ico_4->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271\347\233\256", nullptr));
#endif // QT_CONFIG(tooltip)
        oico->setText(QCoreApplication::translate("MainWindow", "\351\241\271\351\200\211\346\213\251", nullptr));
#if QT_CONFIG(tooltip)
        oico->setToolTip(QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\351\200\211\346\213\251", nullptr));
#endif // QT_CONFIG(tooltip)
        ocio_2->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        ocio_2->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        ooico_1->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        ooico_1->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\351\200\211\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        ooico_2->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
#if QT_CONFIG(tooltip)
        ooico_2->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\345\205\250\351\203\250\351\200\211\346\213\251", nullptr));
#endif // QT_CONFIG(tooltip)
        ooico_3->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        ooico_3->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\345\220\221\351\200\211\346\213\251", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_3->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_4->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_6->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\346\223\215\344\275\234", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        toolButton_7->setText(QCoreApplication::translate("MainWindow", "\344\270\212\345\215\207\346\216\222\345\272\217", nullptr));
        toolButton_8->setText(QCoreApplication::translate("MainWindow", "\344\270\213\351\231\215\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\346\240\274", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        toolButton_11->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        toolButton_10->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        toolButton_9->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\217\257\347\274\226\350\276\221", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\200\351\241\271\347\233\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\272\214\351\241\271\347\233\256", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
