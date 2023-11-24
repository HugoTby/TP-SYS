//*********************************************************************************************
//* Programme : main.cpp                                                    Date : 24/11/2023
//*--------------------------------------------------------------------------------------------
//* Derni�re mise � jour : 24/11/2023
//*
//* Programmeurs : Alexandre Lepretre                                         Classe : BTSSN2
//*                Hugo Tabary
//*                Edouard Hautemani�re
//*--------------------------------------------------------------------------------------------
//* But : C'est le point d'entr�e principal de l'application
//* Programmes associ�s : ClochesADLink.h, QtWidgets/QApplication
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
