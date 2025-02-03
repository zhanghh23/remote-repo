#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test.h"

class test : public QMainWindow
{
    Q_OBJECT

public:
    test(QWidget *parent = Q_NULLPTR);
	public slots:
	void on_pushButton_clicked();

private:
    Ui::testClass ui;
	
};
