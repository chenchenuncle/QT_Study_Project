/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBox_4;
    QPushButton *pushButton_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(316, 315);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 323, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName("spinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setMaximum(999999999);

        horizontalLayout->addWidget(spinBox);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(horizontalLayoutWidget);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setMaximum(100000000000000000.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(2.000000000000000);

        horizontalLayout->addWidget(doubleSpinBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 120, 311, 41));
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 210, 311, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        spinBox_3 = new QSpinBox(gridLayoutWidget);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMaximum(899999999);
        spinBox_3->setDisplayIntegerBase(16);

        horizontalLayout_3->addWidget(spinBox_3);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        spinBox_2 = new QSpinBox(gridLayoutWidget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMaximum(999999999);

        horizontalLayout_2->addWidget(spinBox_2);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        spinBox_4 = new QSpinBox(gridLayoutWidget);
        spinBox_4->setObjectName("spinBox_4");
        spinBox_4->setMaximum(999999999);
        spinBox_4->setValue(0);
        spinBox_4->setDisplayIntegerBase(2);

        horizontalLayout_4->addWidget(spinBox_4);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_4->addWidget(pushButton_6);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(Widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 311, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_5->addWidget(pushButton);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(horizontalLayoutWidget_2);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setDecimals(5);
        doubleSpinBox_2->setMaximum(100000000000000000.000000000000000);
        doubleSpinBox_2->setSingleStep(0.010000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_2);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 3);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\344\270\216\346\225\260\345\200\274\344\271\213\351\227\264\347\232\204\350\275\254\346\215\242", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("Widget", "kg", nullptr));
        spinBox->setPrefix(QString());
        label_2->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267", nullptr));
        doubleSpinBox->setPrefix(QCoreApplication::translate("Widget", "$", nullptr));
        doubleSpinBox->setSuffix(QString());
        pushButton_2->setText(QCoreApplication::translate("Widget", "qDdbug\347\232\204\346\270\254\350\251\246", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "16\351\200\262\345\210\266", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\351\200\262\350\241\214\350\275\211\346\217\233", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "10\351\200\262\345\210\266", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\351\200\262\350\241\214\350\275\211\346\217\233", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\344\272\214\351\200\262\345\210\266", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\351\200\262\350\241\214\350\275\211\346\217\233", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\273\344\273\267", nullptr));
        doubleSpinBox_2->setSpecialValueText(QCoreApplication::translate("Widget", "0", nullptr));
        doubleSpinBox_2->setPrefix(QCoreApplication::translate("Widget", "$", nullptr));
        doubleSpinBox_2->setSuffix(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
