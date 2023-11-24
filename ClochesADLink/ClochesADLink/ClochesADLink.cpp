//*********************************************************************************************
//* Programme : ClochesADLink.cpp                                           Date : 24/11/2023
//*--------------------------------------------------------------------------------------------
//* Dernière mise à jour : 24/11/2023
//*
//* Programmeurs : Alexandre Lepretre                                         Classe : BTSSN2
//*                Hugo Tabary
//*                Edouard Hautemanière
//*--------------------------------------------------------------------------------------------
//* But : C'est l'endroit où sont stockées les méthodes de la classe ClochesADLink
//* Programmes associés : ClochesADLink.h
//*********************************************************************************************
#include "ClochesADLink.h"

ClochesADLink::ClochesADLink(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    cardId = Register_Card(PCI_7256, 0);  
}

ClochesADLink::~ClochesADLink()
{ 
    Release_Card(cardId);
}

void ClochesADLink::LauncherBellNum1()
{

    DO_WriteLine(cardId, PCI_7256, 0, 1);
    Sleep(500);
    DO_WriteLine(cardId, PCI_7256, 0, 0);
    Sleep(500);

}


void ClochesADLink::keyPressEvent(QKeyEvent* ev)
{
    if (ev->key() == Qt::Key_A)
    {
        LauncherBellNum1();
    } 
    if(ev->key() == Qt::Key_Z) 
    {
        LauncherBellNum2();
    }
    if (ev->key() == Qt::Key_E)
    {
        LauncherBellNum3();
    }
    if (ev->key() == Qt::Key_R)
    {
        LauncherBellNum4();
    }
    if (ev->key() == Qt::Key_P)
    {
        LauncherBellNum1();
        LauncherBellNum2();
        LauncherBellNum3();
        LauncherBellNum4();
    }
    else
    {
        QMainWindow::keyPressEvent(ev);
    }
}


void ClochesADLink::LauncherBellNum2()
{

    DO_WriteLine(cardId, PCI_7256, 1, 1);
    Sleep(500);
    DO_WriteLine(cardId, PCI_7256, 1, 0);
    Sleep(500);

}

void ClochesADLink::LauncherBellNum3()
{

    DO_WriteLine(cardId, PCI_7256, 2, 1);
    Sleep(500);
    DO_WriteLine(cardId, PCI_7256, 2, 0);
    Sleep(500);

}

void ClochesADLink::LauncherBellNum4()
{

    DO_WriteLine(cardId, PCI_7256, 3, 1);
    Sleep(500);
    DO_WriteLine(cardId, PCI_7256, 3, 0);
    Sleep(500);

}

void ClochesADLink::LauncherBellAll()
{
    LauncherBellNum1();
    LauncherBellNum2();
    LauncherBellNum3();
    LauncherBellNum4();
}

void ClochesADLink::Label1()
{
    ui.label->setText("Bouton Appuyer");
}
