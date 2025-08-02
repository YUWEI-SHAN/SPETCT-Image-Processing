#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QException>
#include <QFile>
#include <QFileDialog>
#include <QSaveFile>
#include <QTextBlock>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setTabsClosable(false);  //不允许关闭分页
    ui->tabWidget->setDocumentMode(true);   //文档模式，无边框
    setCentralWidget(ui->tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actOpen_IODevice_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "打开一个文件";
    QString filter = "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this, dlgTitle, curPath, filter);

    if(aFileName.isEmpty())
    {
        qDebug() << "未选择任何文件";
        return;
    }

    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());      //设置应用程序当前目录
    openByIO_Whole(aFileName);
    // openByIO_Lines(aFileName);

}

bool MainWindow::openByIO_Whole(const QString &aFileName)
{
    //整体读取
    QFile file(aFileName);

    if(!file.exists())
    {
        return false;
    }

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    ui->textEditDevice->clear();
    QByteArray all_Lines = file.readAll();
    // QString text(all_Lines);
    QString text = QString::fromUtf8(all_Lines);
    ui->textEditDevice->appendPlainText(text);
    file.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;

}

bool MainWindow::openByIO_Lines(const QString &aFileName)
{
    //逐行读取
    QFile file(aFileName);

    if(!file.exists())
    {
        return false;
    }

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        return false;
    }

    ui->textEditDevice->clear();

    while(file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str = QString::fromUtf8(line);
        str.truncate(str.length() - 1);     //用于去除增加的空行
        ui->textEditDevice->appendPlainText(str);
    }

    file.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}


void MainWindow::on_actSave_IODevice_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "h文件(*.h);;C++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this, dlgTitle, curPath, filter);

    if(aFileName.isEmpty())
    {
        qDebug() << "保存的文件名不能为空";
        return;
    }

    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());
    saveByIO_Whole(aFileName);
}

bool MainWindow::saveByIO_Whole(const QString &aFileName)
{
    QFile file(aFileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return false;
    }

    QString str = ui->textEditDevice->toPlainText();
    QByteArray strByte = str.toUtf8();
    file.write(strByte, str.length());
    file.close();
    ui->tabWidget->setCurrentIndex(0);
    return true;
}



void MainWindow::on_actSave_TextSafe_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "h文件(*.h);;C++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this, dlgTitle, curPath, filter);

    if(aFileName.isEmpty())
    {
        qDebug() << "保存的文件名不能为空";
        return;
    }

    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());
    saveByIO_Safe(aFileName);
}

bool MainWindow::saveByIO_Safe(const QString &aFileName)
{
    QSaveFile file(aFileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "文件打开失败";
        return false;
    }

    file.setDirectWriteFallback(false);     //使用临时文件来保存

    try
    {
        QString str = ui->textEditDevice->toPlainText();
        QByteArray strBytes = str.toLocal8Bit();
        file.write(strBytes, strBytes.length());
        file.commit();
        ui->tabWidget->setCurrentIndex(0);
        return true;
    }
    catch(QException &e)
    {
        qDebug() << "保存文件的过程中出现了错误";
        file.cancelWriting();
        return false;
    }
}


void MainWindow::on_actOpen_TextStream_triggered()
{
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getOpenFileName(this, "打开一个文件", curPath,
                        "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(aFileName);

    // openByStream_Whole(aFileName);
    openByStream_Lines(aFileName);
}

bool MainWindow::openByStream_Whole(const QString &aFileName)
{
    QFile file(aFileName);

    if(!file.exists())
    {
        qDebug() << "文件不存在";
        return false;
    }

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "文件打开错误";
        return false;
    }

    QTextStream stream(&file);
    stream.setAutoDetectUnicode(true);      //自动检测unicode
    QString str = stream.readAll();
    ui->textEditStream->setPlainText(str);
    file.close();
    ui->tabWidget->setCurrentIndex(1);
    return true;

}

bool MainWindow::openByStream_Lines(const QString &aFileName)
{
    QFile file(aFileName);

    if(!file.exists())
    {
        qDebug() << "文件不存在";
        return false;
    }

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "文件打开错误";
        return false;
    }

    QTextStream stream(&file);
    stream.setAutoDetectUnicode(true);      //自动检测unicode

    while(!stream.atEnd())
    {
        QString str = stream.readLine();
        ui->textEditStream->appendPlainText(str);
    }

    file.close();
    ui->tabWidget->setCurrentIndex(1);
    return true;
}

void MainWindow::on_actSave_TextStream_triggered()
{
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getSaveFileName(this, "另存为一个文件", curPath,
                        "h文件(*.h);;C++文件(*.cpp);;文本文件(*.txt);;所有文件(*.*)");

    if(aFileName.isEmpty())
    {
        qDebug() << "文件名不能为空";
        return;
    }

    QFileInfo fileInfo(aFileName);
    QDir::setCurrent(fileInfo.absolutePath());
    saveByStream_Whole(aFileName);

}

bool MainWindow::saveByStream_Whole(const QString &aFileName)
{
    QFile file(aFileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "文件打开错误";
        return false;
    }

    QTextStream stream(&file);
    stream.setAutoDetectUnicode(false);
    QString str = ui->textEditStream->toPlainText();
    stream << str;
    file.close();
    return true;
}

bool MainWindow::saveByStream_Save(const QString &aFileName)
{
    QSaveFile file(aFileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug(); "文件打开错误";
        return false;
    }

    try
    {
        QTextStream stream(&file);
        stream.setAutoDetectUnicode(true);
        QTextDocument *doc = ui->textEditStream->document();      //文本编辑器的所有内容
        int cnt = doc->blockCount();

        for(int i = 0; i < cnt; i++)
        {
            QTextBlock textLine = doc->findBlockByNumber(i);
            QString str = textLine.text();
            stream << str << "\n";
        }

        file.commit();
        return true;
    }
    catch (QException &e)
    {
        qDebug() << "保存文件的过程中发生了错误";
        file.cancelWriting();
        return false;
    }
}





