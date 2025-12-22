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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_4;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(432, 267);
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 411, 88));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(horizontalLayoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");
        checkBox->setTristate(false);

        gridLayout->addWidget(checkBox, 0, 2, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName("comboBox");
        comboBox->setEditable(false);
        comboBox->setMaxVisibleItems(10);
        comboBox->setDuplicatesEnabled(false);
        comboBox->setFrame(true);

        gridLayout->addWidget(comboBox, 1, 0, 1, 3);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cna/\346\261\237\350\213\217.webp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon);

        verticalLayout->addWidget(pushButton_3);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setEditable(true);
        comboBox_2->setMaxVisibleItems(10);

        verticalLayout->addWidget(comboBox_2);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 100, 411, 161));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_2->addWidget(plainTextEdit);


        retranslateUi(Widget);
        QObject::connect(pushButton_2, &QPushButton::clicked, comboBox, qOverload<>(&QComboBox::clear));
        QObject::connect(pushButton_4, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));

        comboBox_2->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "combobox\347\232\204\344\275\277\347\224\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\347\256\200\345\215\225combobox", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\345\217\257\347\274\226\350\276\221", nullptr));
        comboBox->setPlaceholderText(QString());
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\234\211\346\225\260\346\215\256\347\232\204combobox", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\345\237\216\345\270\202+\345\234\260\345\214\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\344\277\241\346\201\257", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        plainTextEdit->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
