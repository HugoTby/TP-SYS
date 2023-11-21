#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TPSystemeCloches.h"

class TPSystemeCloches : public QMainWindow
{
    Q_OBJECT

public:
    TPSystemeCloches(QWidget *parent = nullptr);
    ~TPSystemeCloches();

private:
    Ui::TPSystemeClochesClass ui;

public slots:
	void onClickButtonBell1();
	void onClickButtonBell2();
	void onClickButtonBell3();
	void onClickButtonBell4();
	void onClickButtonMusic();
};
