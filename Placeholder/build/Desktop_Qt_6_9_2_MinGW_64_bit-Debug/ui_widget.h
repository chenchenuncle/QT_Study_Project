/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTimeEdit *timeEdit_2;
    QPushButton *pushButton_2;
    QTimeEdit *timeEdit;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QLabel *label_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QDateEdit *dateEdit_2;
    QDateTimeEdit *dateTimeEdit_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(618, 263);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(9, 9, -1, -1);
        timeEdit_2 = new QTimeEdit(groupBox);
        timeEdit_2->setObjectName("timeEdit_2");
        timeEdit_2->setCurrentSection(QDateTimeEdit::Section::HourSection);
        timeEdit_2->setCalendarPopup(false);
        timeEdit_2->setTime(QTime(0, 0, 0));

        gridLayout->addWidget(timeEdit_2, 1, 3, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setDateTime(QDateTime(QDate(2000, 5, 30), QTime(3, 0, 0)));
        timeEdit->setMaximumDateTime(QDateTime(QDate(2000, 5, 30), QTime(23, 59, 59)));
        timeEdit->setMinimumDateTime(QDateTime(QDate(2000, 5, 30), QTime(0, 0, 0)));
        timeEdit->setMaximumDate(QDate(2000, 5, 30));
        timeEdit->setCurrentSection(QDateTimeEdit::Section::HourSection);
        timeEdit->setTime(QTime(3, 0, 0));

        gridLayout->addWidget(timeEdit, 1, 2, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");

        gridLayout->addWidget(dateTimeEdit, 6, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 3, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");

        gridLayout->addWidget(dateEdit, 3, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 2, 3, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 7, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 7, 2, 1, 1);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 4, 3, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 4, 2, 1, 1);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName("dateEdit_2");
        dateEdit_2->setCurrentSection(QDateTimeEdit::Section::YearSection);

        gridLayout->addWidget(dateEdit_2, 3, 3, 1, 1);

        dateTimeEdit_2 = new QDateTimeEdit(groupBox);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");

        gridLayout->addWidget(dateTimeEdit_2, 6, 3, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName("formLayout");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_4);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setSelectedDate(QDate(2019, 2, 8));

        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, calendarWidget);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "time\345\222\214labe\347\232\204\344\275\277\347\224\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\346\227\245\346\234\237", nullptr));
        timeEdit_2->setDisplayFormat(QCoreApplication::translate("Widget", "hh.mm.ss.zzz", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "QDegug", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "HH.mm.ss.zzz", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy-MM-dd hh:mm", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\217\220\347\244\272", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy-MM-dd", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "fonrstring", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "fonrstring", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "QDegug", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "fornstring", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "QDegug", nullptr));
        dateEdit_2->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy-MM-dd", nullptr));
        dateTimeEdit_2->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy-MM-dd hh:mm", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\345\234\250\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
