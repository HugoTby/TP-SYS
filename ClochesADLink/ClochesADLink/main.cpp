//*********************************************************************************************
//* Programme : main.cpp                                                    Date : 24/11/2023
//*--------------------------------------------------------------------------------------------
//* Dernière mise à jour : 24/11/2023
//*
//* Programmeurs : Alexandre Lepretre                                         Classe : BTSSN2
//*                Hugo Tabary
//*                Edouard Hautemanière
//*--------------------------------------------------------------------------------------------
//* But : C'est le point d'entrée principal de l'application
//* Programmes associés : ClochesADLink.h, QtWidgets/QApplication
//*********************************************************************************************

#include "ClochesADLink.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ClochesADLink w;
    w.show();
    return a.exec();
}
