/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QDial *dial;
    QSlider *horizontalSlider;
    QScrollBar *horizontalScrollBar;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QProgressBar *progressBar;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(300, 230);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 300, 111));
        dial = new QDial(groupBox);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(10, 20, 50, 64));
        dial->setMaximum(100);
        dial->setSingleStep(33);
        dial->setOrientation(Qt::Orientation::Horizontal);
        dial->setInvertedAppearance(false);
        dial->setInvertedControls(false);
        dial->setWrapping(true);
        dial->setNotchTarget(0.000000000000000);
        dial->setNotchesVisible(true);
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(120, 30, 151, 20));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setSingleStep(66);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TickPosition::NoTicks);
        horizontalSlider->setTickInterval(50);
        horizontalScrollBar = new QScrollBar(groupBox);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setGeometry(QRect(120, 70, 160, 16));
        horizontalScrollBar->setMaximum(100);
        horizontalScrollBar->setOrientation(Qt::Orientation::Horizontal);
        horizontalScrollBar->setInvertedAppearance(false);
        horizontalScrollBar->setInvertedControls(true);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 40, 12));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 70, 41, 16));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 110, 301, 121));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(70, 20, 221, 23));
        progressBar->setValue(27);
        progressBar->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::Direction::TopToBottom);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 41, 21));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 60, 101, 19));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(130, 60, 161, 19));
        checkBox_2->setChecked(false);
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 90, 95, 19));
        radioButton->setCheckable(true);
        radioButton->setChecked(false);
        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(130, 90, 95, 19));
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(false);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\273\221\345\212\250\350\275\256", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\267\347\243\231\350\275\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\345\222\214\350\256\276\347\275\256", nullptr));
        progressBar->setFormat(QCoreApplication::translate("Widget", "%p%", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\233\345\272\246\346\235\241", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\351\241\257\347\244\272\351\200\262\345\272\246\346\225\270\345\200\274", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "\345\217\215\350\275\211", nullptr));
        radioButton->setText(QCoreApplication::translate("Widget", "\351\241\257\347\244\272100\345\210\206\346\257\224", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Widget", "\351\241\257\347\244\272\346\225\270\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
