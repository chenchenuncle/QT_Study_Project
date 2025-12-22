/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xasda
{
public:
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QDialog *xasda)
    {
        if (xasda->objectName().isEmpty())
            xasda->setObjectName("xasda");
        xasda->setEnabled(true);
        xasda->resize(509, 393);
        xasda->setMinimumSize(QSize(509, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush3);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush1);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush1);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush6);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush1);
#endif
        xasda->setPalette(palette);
        xasda->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/editor.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        xasda->setWindowIcon(icon);
        xasda->setSizeGripEnabled(false);
        xasda->setModal(false);
        plainTextEdit = new QPlainTextEdit(xasda);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setEnabled(true);
        plainTextEdit->setGeometry(QRect(60, 200, 391, 141));
        plainTextEdit->setMaximumSize(QSize(1000, 1000));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush7(QColor(69, 255, 1, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush7);
        QBrush brush8(QColor(162, 255, 128, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        QBrush brush9(QColor(115, 255, 64, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush9);
        QBrush brush10(QColor(34, 127, 0, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush10);
        QBrush brush11(QColor(46, 170, 1, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush11);
        QBrush brush12(QColor(0, 255, 0, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush12);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush7);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush1);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush7);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush9);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush10);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush11);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush12);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush7);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush1);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush10);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush9);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush10);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush11);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush10);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush1);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush10);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush7);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush4);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush13(QColor(34, 127, 0, 127));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        QBrush brush14(QColor(125, 255, 77, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush14);
#endif
        plainTextEdit->setPalette(palette1);
        QFont font;
        font.setPointSize(25);
        font.setWeight(QFont::DemiBold);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        plainTextEdit->setFont(font);
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::ArrowCursor)));
        plainTextEdit->setContextMenuPolicy(Qt::ContextMenuPolicy::ActionsContextMenu);
        groupBox = new QGroupBox(xasda);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 80, 391, 61));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        groupBox->setCheckable(false);
        groupBox->setChecked(false);
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(170, 30, 51, 16));
        checkBox_2->setFont(font1);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(330, 30, 51, 16));
        checkBox_3->setFont(font1);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 30, 71, 16));
        checkBox->setFont(font1);
        checkBox->setTristate(true);
        groupBox_2 = new QGroupBox(xasda);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(60, 140, 391, 61));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 30, 72, 16));
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(170, 30, 72, 16));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(330, 30, 61, 16));
        horizontalLayoutWidget = new QWidget(xasda);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(60, 340, 391, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/212.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon1);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/322.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        label = new QLabel(xasda);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 51, 21));
        label_2 = new QLabel(xasda);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 60, 51, 16));
        lineEdit = new QLineEdit(xasda);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 20, 121, 21));
        lineEdit->setMinimumSize(QSize(0, 0));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit->setClearButtonEnabled(false);
        spinBox = new QSpinBox(xasda);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(140, 61, 121, 21));
        label_3 = new QLabel(xasda);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 60, 51, 21));
        comboBox = new QComboBox(xasda);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(339, 61, 111, 21));
#if QT_CONFIG(shortcut)
        label->setBuddy(lineEdit);
        label_2->setBuddy(spinBox);
        label_3->setBuddy(comboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_3);
        QWidget::setTabOrder(radioButton_3, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, radioButton);
        QWidget::setTabOrder(radioButton, pushButton);
        QWidget::setTabOrder(pushButton, checkBox_2);
        QWidget::setTabOrder(checkBox_2, checkBox_3);
        QWidget::setTabOrder(checkBox_3, checkBox);

        retranslateUi(xasda);
        QObject::connect(pushButton_3, &QPushButton::clicked, xasda, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, xasda, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(xasda);
    } // setupUi

    void retranslateUi(QDialog *xasda)
    {
        xasda->setWindowTitle(QCoreApplication::translate("xasda", "\346\226\260\345\217\267\344\270\216\346\247\275\347\232\204\344\275\277\347\224\250", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("xasda", "adadfaf", nullptr));
        groupBox->setTitle(QCoreApplication::translate("xasda", "\345\255\227\344\275\223", nullptr));
        checkBox_2->setText(QCoreApplication::translate("xasda", "\346\226\234\344\275\223", nullptr));
        checkBox_3->setText(QCoreApplication::translate("xasda", "\347\262\227\344\275\223", nullptr));
        checkBox->setText(QCoreApplication::translate("xasda", "\344\270\213\345\210\222\347\272\277", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("xasda", "\351\242\234\350\211\262", nullptr));
        radioButton->setText(QCoreApplication::translate("xasda", "\351\273\221\350\211\262", nullptr));
        radioButton_2->setText(QCoreApplication::translate("xasda", "\347\272\242\350\211\262", nullptr));
        radioButton_3->setText(QCoreApplication::translate("xasda", "\350\223\235\350\211\262", nullptr));
        pushButton->setText(QCoreApplication::translate("xasda", "\346\270\205\347\251\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("xasda", "\347\241\256\345\256\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("xasda", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("xasda", "\345\247\223\345\220\215\357\274\210&N\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("xasda", "\345\271\264\351\276\204\357\274\210&B\357\274\211", nullptr));
        lineEdit->setText(QCoreApplication::translate("xasda", "BKB", nullptr));
        label_3->setText(QCoreApplication::translate("xasda", "\346\260\221\346\227\217\357\274\210&L\357\274\211", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("xasda", "\346\261\211\346\227\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("xasda", "\350\222\231\345\217\244\346\227\217", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("xasda", "\346\261\211\346\227\217", nullptr));

    } // retranslateUi

};

namespace Ui {
    class xasda: public Ui_xasda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
