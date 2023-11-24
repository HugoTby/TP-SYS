/********************************************************************************
** Form generated from reading UI file 'ClochesADLink.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCHESADLINK_H
#define UI_CLOCHESADLINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClochesADLinkClass
{
public:
    QWidget *centralWidget;
    QPushButton *Music;
    QPushButton *Cloche1;
    QPushButton *Cloche2;
    QPushButton *Cloche3;
    QPushButton *Cloche4;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClochesADLinkClass)
    {
        if (ClochesADLinkClass->objectName().isEmpty())
            ClochesADLinkClass->setObjectName(QString::fromUtf8("ClochesADLinkClass"));
        ClochesADLinkClass->resize(590, 400);
        centralWidget = new QWidget(ClochesADLinkClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Music = new QPushButton(centralWidget);
        Music->setObjectName(QString::fromUtf8("Music"));
        Music->setGeometry(QRect(50, 62, 171, 101));
        Cloche1 = new QPushButton(centralWidget);
        Cloche1->setObjectName(QString::fromUtf8("Cloche1"));
        Cloche1->setGeometry(QRect(390, 32, 141, 41));
        Cloche2 = new QPushButton(centralWidget);
        Cloche2->setObjectName(QString::fromUtf8("Cloche2"));
        Cloche2->setGeometry(QRect(390, 100, 141, 41));
        Cloche3 = new QPushButton(centralWidget);
        Cloche3->setObjectName(QString::fromUtf8("Cloche3"));
        Cloche3->setGeometry(QRect(390, 170, 141, 41));
        Cloche4 = new QPushButton(centralWidget);
        Cloche4->setObjectName(QString::fromUtf8("Cloche4"));
        Cloche4->setGeometry(QRect(390, 250, 141, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 230, 201, 61));
        ClochesADLinkClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ClochesADLinkClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 590, 21));
        ClochesADLinkClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClochesADLinkClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ClochesADLinkClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClochesADLinkClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ClochesADLinkClass->setStatusBar(statusBar);

        retranslateUi(ClochesADLinkClass);
        QObject::connect(Cloche1, SIGNAL(clicked()), ClochesADLinkClass, SLOT(LauncherBellNum1()));
        QObject::connect(Cloche2, SIGNAL(clicked()), ClochesADLinkClass, SLOT(LauncherBellNum2()));
        QObject::connect(Cloche3, SIGNAL(clicked()), ClochesADLinkClass, SLOT(LauncherBellNum3()));
        QObject::connect(Cloche4, SIGNAL(clicked()), ClochesADLinkClass, SLOT(LauncherBellNum4()));
        QObject::connect(Cloche1, SIGNAL(clicked()), ClochesADLinkClass, SLOT(Label1()));

        QMetaObject::connectSlotsByName(ClochesADLinkClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClochesADLinkClass)
    {
        ClochesADLinkClass->setWindowTitle(QCoreApplication::translate("ClochesADLinkClass", "ClochesADLink", nullptr));
        Music->setText(QCoreApplication::translate("ClochesADLinkClass", "Music", nullptr));
        Cloche1->setText(QCoreApplication::translate("ClochesADLinkClass", "Cloche N\302\2601", nullptr));
        Cloche2->setText(QCoreApplication::translate("ClochesADLinkClass", "Cloche N\302\2602", nullptr));
        Cloche3->setText(QCoreApplication::translate("ClochesADLinkClass", "Cloche N\302\2603", nullptr));
        Cloche4->setText(QCoreApplication::translate("ClochesADLinkClass", "Cloche N\302\2604", nullptr));
        label->setText(QCoreApplication::translate("ClochesADLinkClass", "Valeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClochesADLinkClass: public Ui_ClochesADLinkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCHESADLINK_H
