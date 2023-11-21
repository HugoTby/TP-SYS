/********************************************************************************
** Form generated from reading UI file 'TPSystemeCloches.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPSYSTEMECLOCHES_H
#define UI_TPSYSTEMECLOCHES_H

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

class Ui_TPSystemeClochesClass
{
public:
    QWidget *centralWidget;
    QPushButton *cloche1;
    QPushButton *cloche2;
    QPushButton *cloche3;
    QPushButton *cloche4;
    QPushButton *musique;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPSystemeClochesClass)
    {
        if (TPSystemeClochesClass->objectName().isEmpty())
            TPSystemeClochesClass->setObjectName(QString::fromUtf8("TPSystemeClochesClass"));
        TPSystemeClochesClass->resize(692, 390);
        centralWidget = new QWidget(TPSystemeClochesClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        cloche1 = new QPushButton(centralWidget);
        cloche1->setObjectName(QString::fromUtf8("cloche1"));
        cloche1->setGeometry(QRect(390, 40, 193, 48));
        cloche2 = new QPushButton(centralWidget);
        cloche2->setObjectName(QString::fromUtf8("cloche2"));
        cloche2->setGeometry(QRect(390, 100, 193, 48));
        cloche3 = new QPushButton(centralWidget);
        cloche3->setObjectName(QString::fromUtf8("cloche3"));
        cloche3->setGeometry(QRect(390, 160, 193, 48));
        cloche4 = new QPushButton(centralWidget);
        cloche4->setObjectName(QString::fromUtf8("cloche4"));
        cloche4->setGeometry(QRect(390, 220, 193, 48));
        musique = new QPushButton(centralWidget);
        musique->setObjectName(QString::fromUtf8("musique"));
        musique->setGeometry(QRect(80, 100, 193, 48));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 60, 81, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 115, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(600, 170, 81, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 230, 81, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 80, 81, 16));
        TPSystemeClochesClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TPSystemeClochesClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 692, 26));
        TPSystemeClochesClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPSystemeClochesClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPSystemeClochesClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TPSystemeClochesClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPSystemeClochesClass->setStatusBar(statusBar);

        retranslateUi(TPSystemeClochesClass);
        QObject::connect(cloche1, SIGNAL(clicked()), TPSystemeClochesClass, SLOT(onClickButtonBell1()));
        QObject::connect(cloche2, SIGNAL(clicked()), TPSystemeClochesClass, SLOT(onClickButtonBell2()));
        QObject::connect(cloche3, SIGNAL(clicked()), TPSystemeClochesClass, SLOT(onClickButtonBell3()));
        QObject::connect(cloche4, SIGNAL(clicked()), TPSystemeClochesClass, SLOT(onClickButtonBell4()));
        QObject::connect(musique, SIGNAL(clicked()), TPSystemeClochesClass, SLOT(onClickButtonMusic()));

        QMetaObject::connectSlotsByName(TPSystemeClochesClass);
    } // setupUi

    void retranslateUi(QMainWindow *TPSystemeClochesClass)
    {
        TPSystemeClochesClass->setWindowTitle(QCoreApplication::translate("TPSystemeClochesClass", "TPSystemeCloches", nullptr));
        cloche1->setText(QCoreApplication::translate("TPSystemeClochesClass", "Cliquez-ici", nullptr));
        cloche2->setText(QCoreApplication::translate("TPSystemeClochesClass", "Cliquez-ici", nullptr));
        cloche3->setText(QCoreApplication::translate("TPSystemeClochesClass", "Cliquez-ici", nullptr));
        cloche4->setText(QCoreApplication::translate("TPSystemeClochesClass", "Cliquez-ici", nullptr));
        musique->setText(QCoreApplication::translate("TPSystemeClochesClass", "Cliquez-ici", nullptr));
        label->setText(QCoreApplication::translate("TPSystemeClochesClass", "CLOCHE N\302\2601", nullptr));
        label_2->setText(QCoreApplication::translate("TPSystemeClochesClass", "CLOCHE N\302\2602", nullptr));
        label_3->setText(QCoreApplication::translate("TPSystemeClochesClass", "CLOCHE N\302\2603", nullptr));
        label_4->setText(QCoreApplication::translate("TPSystemeClochesClass", "CLOCHE N\302\2604", nullptr));
        label_5->setText(QCoreApplication::translate("TPSystemeClochesClass", "MUSIQUE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPSystemeClochesClass: public Ui_TPSystemeClochesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPSYSTEMECLOCHES_H
