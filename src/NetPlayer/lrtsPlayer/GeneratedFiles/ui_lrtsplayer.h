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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lrtsPlayerClass
{
public:

    void setupUi(QWidget *lrtsPlayerClass)
    {
        if (lrtsPlayerClass->objectName().isEmpty())
            lrtsPlayerClass->setObjectName(QString::fromUtf8("lrtsPlayerClass"));
        lrtsPlayerClass->resize(600, 400);

        retranslateUi(lrtsPlayerClass);

        QMetaObject::connectSlotsByName(lrtsPlayerClass);
    } // setupUi

    void retranslateUi(QWidget *lrtsPlayerClass)
    {
        lrtsPlayerClass->setWindowTitle(QApplication::translate("lrtsPlayerClass", "lrtsPlayer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class lrtsPlayerClass: public Ui_lrtsPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LRTSPLAYER_H
