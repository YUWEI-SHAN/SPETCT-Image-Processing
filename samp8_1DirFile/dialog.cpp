#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    qDebug() << "v你50";
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_5_clicked()
{
    ui->plainTextEdit->clear();
}

