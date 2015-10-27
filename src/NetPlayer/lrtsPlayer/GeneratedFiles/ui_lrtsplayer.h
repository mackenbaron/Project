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
#include <QtGui/QHeaderView>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lrtsPlayerClass
{
public:
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page_2;

    void setupUi(QWidget *lrtsPlayerClass)
    {
        if (lrtsPlayerClass->objectName().isEmpty())
            lrtsPlayerClass->setObjectName(QString::fromUtf8("lrtsPlayerClass"));
        lrtsPlayerClass->resize(766, 462);
        verticalLayout = new QVBoxLayout(lrtsPlayerClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolBox = new QToolBox(lrtsPlayerClass);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 748, 418));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        verticalLayout->addWidget(toolBox);


        retranslateUi(lrtsPlayerClass);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(lrtsPlayerClass);
    } // setupUi

    void retranslateUi(QWidget *lrtsPlayerClass)
    {
        lrtsPlayerClass->setWindowTitle(QApplication::translate("lrtsPlayerClass", "lrtsPlayer", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("lrtsPlayerClass", "Page 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class lrtsPlayerClass: public Ui_lrtsPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LRTSPLAYER_H
