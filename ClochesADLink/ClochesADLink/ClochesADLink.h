//*********************************************************************************************
//* Programme : ClochesADLink.h                                             Date : 24/11/2023
//*--------------------------------------------------------------------------------------------
//* Derni�re mise � jour : 24/11/2023
//*
//* Programmeurs : Alexandre Lepretre                                         Classe : BTSSN2
//*                Hugo Tabary
//*                Edouard Hautemani�re
//*--------------------------------------------------------------------------------------------
//* But : C'est l'enroit o� est d�clar�e la classe ClochesADLink
//* Programmes associ�s : ui_ClochesADLink.h, QtWidgets/QApplication, QKeyEvent, Windows.h,
//*                       Dask.h, conio.h, iostream
//*********************************************************************************************
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ClochesADLink.h"
#include <QKeyEvent>
#include <Windows.h>
#include <Dask.h>
#include <conio.h>
#include <iostream>


class ClochesADLink : public QMainWindow
{
    Q_OBJECT

public:
    ClochesADLink(QWidget *parent = nullptr);
    ~ClochesADLink();

private:
    Ui::ClochesADLinkClass ui;
    I16 cardId;

protected:
    virtual void keyPressEvent(QKeyEvent* ev);

public slots:
    void LauncherBellNum1();
    void LauncherBellNum2();
    void LauncherBellNum3();
    void LauncherBellNum4();
    void LauncherBellAll();
    void Label1();
};
