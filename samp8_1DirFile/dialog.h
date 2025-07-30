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
    void do_directoryChanged(const QString &path);
    void do_fileChanged(const QString &path);

    void on_pushButton_5_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_45_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
