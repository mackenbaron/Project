/********************************************************************************
** Form generated from reading UI file 'lrtsplayer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LRTSPLAYER_H
#define UI_LRTSPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lrtsPlayerClass
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;

    void setupUi(QWidget *lrtsPlayerClass)
    {
        if (lrtsPlayerClass->objectName().isEmpty())
            lrtsPlayerClass->setObjectName(QString::fromUtf8("lrtsPlayerClass"));
        lrtsPlayerClass->resize(766, 509);
        widget = new QWidget(lrtsPlayerClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(41, 40, 350, 24));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_4->addWidget(comboBox_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(lrtsPlayerClass);

        QMetaObject::connectSlotsByName(lrtsPlayerClass);
    } // setupUi

    void retranslateUi(QWidget *lrtsPlayerClass)
    {
        lrtsPlayerClass->setWindowTitle(QApplication::translate("lrtsPlayerClass", "lrtsPlayer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("lrtsPlayerClass", "\345\210\206\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("lrtsPlayerClass", "\350\257\267\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("lrtsPlayerClass", "\345\255\220\351\241\265\345\210\206\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("lrtsPlayerClass", "\350\257\267\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("lrtsPlayerClass", "\347\254\254", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("lrtsPlayerClass", "\350\257\267\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("lrtsPlayerClass", "\351\241\265", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class lrtsPlayerClass: public Ui_lrtsPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LRTSPLAYER_H
