#include "test.h"
#include <qmessagebox.h>

test::test(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	//connect(ui.pushButton, &QPushButton::clicked, this, &test::on_pushButton_clicked);
}
void test::on_pushButton_clicked()
{
	QMessageBox::information(this, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("nihao"));
}