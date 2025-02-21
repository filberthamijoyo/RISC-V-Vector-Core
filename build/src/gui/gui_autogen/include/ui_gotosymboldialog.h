/********************************************************************************
** Form generated from reading UI file 'gotosymboldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOSYMBOLDIALOG_H
#define UI_GOTOSYMBOLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GoToSymbolDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listSymbols;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushShowProg;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushShowMem;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushClose;

    void setupUi(QDialog *GoToSymbolDialog)
    {
        if (GoToSymbolDialog->objectName().isEmpty())
            GoToSymbolDialog->setObjectName("GoToSymbolDialog");
        GoToSymbolDialog->resize(400, 331);
        gridLayout = new QGridLayout(GoToSymbolDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        listSymbols = new QListWidget(GoToSymbolDialog);
        listSymbols->setObjectName("listSymbols");

        verticalLayout->addWidget(listSymbols);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushShowProg = new QPushButton(GoToSymbolDialog);
        pushShowProg->setObjectName("pushShowProg");

        horizontalLayout->addWidget(pushShowProg);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushShowMem = new QPushButton(GoToSymbolDialog);
        pushShowMem->setObjectName("pushShowMem");

        horizontalLayout->addWidget(pushShowMem);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushClose = new QPushButton(GoToSymbolDialog);
        pushClose->setObjectName("pushClose");

        horizontalLayout->addWidget(pushClose);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(listSymbols, pushShowProg);
        QWidget::setTabOrder(pushShowProg, pushShowMem);
        QWidget::setTabOrder(pushShowMem, pushClose);

        retranslateUi(GoToSymbolDialog);

        QMetaObject::connectSlotsByName(GoToSymbolDialog);
    } // setupUi

    void retranslateUi(QDialog *GoToSymbolDialog)
    {
        GoToSymbolDialog->setWindowTitle(QCoreApplication::translate("GoToSymbolDialog", "Go To Symbol DIalog", nullptr));
        pushShowProg->setText(QCoreApplication::translate("GoToSymbolDialog", "Show program", nullptr));
        pushShowMem->setText(QCoreApplication::translate("GoToSymbolDialog", "Show memory", nullptr));
        pushClose->setText(QCoreApplication::translate("GoToSymbolDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoToSymbolDialog: public Ui_GoToSymbolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOSYMBOLDIALOG_H
