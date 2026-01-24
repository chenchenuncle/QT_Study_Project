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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *复制文字;
    QAction *新建文件;
    QAction *打开;
    QAction *保存;
    QAction *gb;
    QAction *剪切;
    QAction *贴贴;
    QAction *测回;
    QAction *反回;
    QAction *全选;
    QAction *清空;
    QAction *zuti;
    QAction *xt;
    QAction *xhx;
    QAction *cn;
    QAction *english;
    QAction *xsanwz;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_E;
    QMenu *menu_M;
    QMenu *menu_3;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(659, 348);
        复制文字 = new QAction(MainWindow);
        复制文字->setObjectName("\345\244\215\345\210\266\346\226\207\345\255\227");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        复制文字->setIcon(icon);
        复制文字->setMenuRole(QAction::MenuRole::NoRole);
        新建文件 = new QAction(MainWindow);
        新建文件->setObjectName("\346\226\260\345\273\272\346\226\207\344\273\266");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        新建文件->setIcon(icon1);
        新建文件->setMenuRole(QAction::MenuRole::NoRole);
        打开 = new QAction(MainWindow);
        打开->setObjectName("\346\211\223\345\274\200");
        打开->setEnabled(true);
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::FolderNew));
        打开->setIcon(icon2);
        打开->setMenuRole(QAction::MenuRole::NoRole);
        保存 = new QAction(MainWindow);
        保存->setObjectName("\344\277\235\345\255\230");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        保存->setIcon(icon3);
        保存->setMenuRole(QAction::MenuRole::NoRole);
        gb = new QAction(MainWindow);
        gb->setObjectName("gb");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        gb->setIcon(icon4);
        gb->setMenuRole(QAction::MenuRole::NoRole);
        剪切 = new QAction(MainWindow);
        剪切->setObjectName("\345\211\252\345\210\207");
        剪切->setCheckable(false);
        剪切->setChecked(false);
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        剪切->setIcon(icon5);
        剪切->setMenuRole(QAction::MenuRole::NoRole);
        贴贴 = new QAction(MainWindow);
        贴贴->setObjectName("\350\264\264\350\264\264");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        贴贴->setIcon(icon6);
        贴贴->setMenuRole(QAction::MenuRole::NoRole);
        测回 = new QAction(MainWindow);
        测回->setObjectName("\346\265\213\345\233\236");
        测回->setEnabled(true);
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        测回->setIcon(icon7);
        测回->setMenuRole(QAction::MenuRole::NoRole);
        反回 = new QAction(MainWindow);
        反回->setObjectName("\345\217\215\345\233\236");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        反回->setIcon(icon8);
        反回->setMenuRole(QAction::MenuRole::NoRole);
        全选 = new QAction(MainWindow);
        全选->setObjectName("\345\205\250\351\200\211");
        全选->setMenuRole(QAction::MenuRole::NoRole);
        清空 = new QAction(MainWindow);
        清空->setObjectName("\346\270\205\347\251\272");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/inder/212.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        清空->setIcon(icon9);
        清空->setMenuRole(QAction::MenuRole::NoRole);
        zuti = new QAction(MainWindow);
        zuti->setObjectName("zuti");
        zuti->setCheckable(true);
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        zuti->setIcon(icon10);
        zuti->setMenuRole(QAction::MenuRole::NoRole);
        xt = new QAction(MainWindow);
        xt->setObjectName("xt");
        xt->setCheckable(true);
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        xt->setIcon(icon11);
        xt->setMenuRole(QAction::MenuRole::NoRole);
        xhx = new QAction(MainWindow);
        xhx->setObjectName("xhx");
        xhx->setCheckable(true);
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextUnderline));
        xhx->setIcon(icon12);
        xhx->setMenuRole(QAction::MenuRole::NoRole);
        cn = new QAction(MainWindow);
        cn->setObjectName("cn");
        cn->setCheckable(true);
        cn->setChecked(false);
        cn->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/inder/780.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cn->setIcon(icon13);
        cn->setMenuRole(QAction::MenuRole::NoRole);
        english = new QAction(MainWindow);
        english->setObjectName("english");
        english->setCheckable(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/inder/OIP-C.webp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        english->setIcon(icon14);
        english->setMenuRole(QAction::MenuRole::NoRole);
        xsanwz = new QAction(MainWindow);
        xsanwz->setObjectName("xsanwz");
        xsanwz->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(0, 0, 661, 281));
        QFont font;
        font.setPointSize(7);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        plainTextEdit->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 659, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_M = new QMenu(menubar);
        menu_M->setObjectName("menu_M");
        menu_3 = new QMenu(menu_M);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_M->menuAction());
        menu->addSeparator();
        menu->addAction(新建文件);
        menu->addSeparator();
        menu->addAction(打开);
        menu->addSeparator();
        menu->addAction(保存);
        menu->addSeparator();
        menu->addAction(gb);
        menu_E->addAction(剪切);
        menu_E->addAction(复制文字);
        menu_E->addAction(贴贴);
        menu_E->addSeparator();
        menu_E->addAction(测回);
        menu_E->addAction(反回);
        menu_E->addSeparator();
        menu_E->addAction(全选);
        menu_E->addAction(清空);
        menu_M->addAction(zuti);
        menu_M->addAction(xt);
        menu_M->addAction(xhx);
        menu_M->addSeparator();
        menu_M->addAction(xsanwz);
        menu_M->addAction(menu_3->menuAction());
        menu_3->addAction(cn);
        menu_3->addAction(english);
        toolBar->addAction(新建文件);
        toolBar->addAction(打开);
        toolBar->addAction(保存);
        toolBar->addSeparator();
        toolBar->addAction(剪切);
        toolBar->addAction(复制文字);
        toolBar->addAction(贴贴);
        toolBar->addSeparator();
        toolBar->addAction(测回);
        toolBar->addAction(反回);
        toolBar->addSeparator();
        toolBar->addAction(zuti);
        toolBar->addAction(xt);
        toolBar->addAction(xhx);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(剪切, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(反回, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(测回, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));
        QObject::connect(贴贴, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(复制文字, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(清空, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(全选, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::selectAll));
        QObject::connect(gb, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243", nullptr));
        复制文字->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(shortcut)
        复制文字->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        新建文件->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        打开->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        打开->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        保存->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        保存->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        gb->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        gb->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        剪切->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        剪切->setToolTip(QCoreApplication::translate("MainWindow", "\347\247\273\345\212\250\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        剪切->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        贴贴->setText(QCoreApplication::translate("MainWindow", "\350\264\264\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        贴贴->setToolTip(QCoreApplication::translate("MainWindow", "\346\212\212\345\244\215\345\210\266\347\232\204\346\226\207\346\234\254\345\244\215\345\210\266\345\210\260\350\277\231\344\270\252\344\275\215\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        测回->setText(QCoreApplication::translate("MainWindow", "\346\265\213\345\233\236", nullptr));
#if QT_CONFIG(tooltip)
        测回->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\250\346\226\207\346\234\254\345\234\250\344\274\232\346\265\213\345\233\236\344\275\240\344\270\212\344\270\200\346\254\241\347\274\226\345\206\231", nullptr));
#endif // QT_CONFIG(tooltip)
        反回->setText(QCoreApplication::translate("MainWindow", "\345\217\215\345\233\236", nullptr));
#if QT_CONFIG(tooltip)
        反回->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\345\233\236", nullptr));
#endif // QT_CONFIG(tooltip)
        全选->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        清空->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        清空->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\205\250\351\203\250\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        zuti->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        zuti->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\347\232\204\346\226\207\345\255\227\344\274\232\345\217\230\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        xt->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        xt->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\347\232\204\346\226\207\345\255\227\344\274\232\345\217\230\346\226\234", nullptr));
#endif // QT_CONFIG(tooltip)
        xhx->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        xhx->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254\347\232\204\346\226\207\345\255\227\344\270\213\346\226\271\344\274\232\345\207\272\347\216\260\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        cn->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        english->setText(QCoreApplication::translate("MainWindow", "english", nullptr));
        xsanwz->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\214\211\351\222\256\346\226\207\345\255\227", nullptr));
#if QT_CONFIG(tooltip)
        xsanwz->setToolTip(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\214\211\351\222\256\347\232\204\346\204\217\350\257\206", nullptr));
#endif // QT_CONFIG(tooltip)
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "1651\n"
"file:///D:/QT\347\273\203\344\271\240/untitled4_5/mainwindow.ui", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&M)", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\347\225\214\351\235\242\350\257\255\351\237\263", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
