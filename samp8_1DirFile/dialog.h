#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFile>
#include <QFileInfo>
#include <QDir>
#include <QTemporaryFile>
#include <QTemporaryDir>
#include <QFileSystemWatcher>

QT_BEGIN_NAMESPACE
namespace Ui
{
class Dialog;
}

QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QFileSystemWatcher fileWatcher;     //用于监视文件和目录
    void showBtnInfo(QObject *btn);     //显示按钮的标题和tooltip提示信息
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
