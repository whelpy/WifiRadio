/********************************************************************************
** Form generated from reading UI file 'qmainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMAINWIDGET_H
#define UI_QMAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QMainWidget
{
public:

    void setupUi(QWidget *QMainWidget)
    {
        if (QMainWidget->objectName().isEmpty())
            QMainWidget->setObjectName(QString::fromUtf8("QMainWidget"));
        QMainWidget->resize(400, 300);

        retranslateUi(QMainWidget);

        QMetaObject::connectSlotsByName(QMainWidget);
    } // setupUi

    void retranslateUi(QWidget *QMainWidget)
    {
        (void)QMainWidget;
    } // retranslateUi

};

namespace Ui {
    class QMainWidget: public Ui_QMainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMAINWIDGET_H
