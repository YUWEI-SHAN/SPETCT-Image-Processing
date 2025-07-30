#include "dialog.h"
#include "ui_dialog.h"

#include <QFiledialog>
#include <QMessageBox>



Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Window);   //默认dialog窗口是没有最大最小化按钮的，需要用这个来设置
    ui->editDir->setReadOnly(true);
    ui->editFile->setReadOnly(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::showBtnInfo(QObject *btn)
{
    ui->plainTextEdit->clear();
    QPushButton *theBtn = static_cast<QPushButton *>(btn);
    ui->plainTextEdit->appendPlainText(theBtn->text());
    ui->plainTextEdit->appendPlainText(theBtn->toolTip() + "\n");
}

void Dialog::on_pushButton_5_clicked()
{
    ui->plainTextEdit->clear();
}


void Dialog::on_pushButton_30_clicked()
{
    showBtnInfo(sender());
    QFileInfo fileInfo(ui->editFile->text());
    QString str = fileInfo.baseName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_3_clicked()
{
    //applicationName
    showBtnInfo(sender());
    // QCoreApplication::setApplicationName("MyAPP");
    QString str = QCoreApplication::applicationName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_61_clicked()
{
    //organizationName
    showBtnInfo(sender());
    QCoreApplication::setOrganizationName("UPC");
    QString str = QCoreApplication::organizationName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_40_clicked()
{
    QCoreApplication::exit();
}


void Dialog::on_pushButton_clicked()
{
    //dirpath
    showBtnInfo(sender());
    QString str = QCoreApplication::applicationDirPath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_2_clicked()
{
    //filepath
    showBtnInfo(sender());
    QString str = QCoreApplication::applicationFilePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_62_clicked()
{
    //setApplicationName
    QMessageBox::information(this, "测试", "已将applicationName设置为test");
    showBtnInfo(sender());
    QCoreApplication::setApplicationName("test");
    QString str = QCoreApplication::applicationName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_4_clicked()
{
    //libraryPath
    showBtnInfo(sender());
    QStringList lists = QCoreApplication::libraryPaths();

    for(int i = 0; i < lists.size(); i++)
    {
        ui->plainTextEdit->appendPlainText(QString("第%1个搜索路径:").arg(i + 1) + lists[i] + "\n");
    }
}


void Dialog::on_pushButton_63_clicked()
{
    //moveToTrash
    showBtnInfo(sender());
    QString src = ui->editFile->text();

    //判断文件是否存在，若存在则移动到回收站
    if(QFile::exists(src))
    {
        QFile::moveToTrash(src);
        ui->plainTextEdit->appendPlainText("文件移除到回收站：" + src + "\n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("文件不存在\n");
    }
}


void Dialog::on_pushButton_54_clicked()
{
    //exists
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFile file;
    file.setFileName(src);

    if(file.exists())
    {
        ui->plainTextEdit->appendPlainText(+"true \n");
    }
    else
    {
        ui->plainTextEdit->appendPlainText(+"false \n");
    }
}


void Dialog::on_pushButton_55_clicked()
{
    //remove
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFile file(src);
    file.remove();
    ui->plainTextEdit->appendPlainText("删除文件：" + src + "\n");

}


void Dialog::on_pushButton_50_clicked()
{
    //rename
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileInfo(src);
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + ".XYZ"; //更新文件后缀
    QFile::rename(src, newFile);
    ui->plainTextEdit->appendPlainText("源文件：" + src);
    ui->plainTextEdit->appendPlainText("重命名为：" + newFile + "\n");
}


void Dialog::on_pushButton_48_clicked()
{
    //copy
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo FI(src);
    QString newFile = FI.path() + "/" + FI.baseName() + "--副本." + FI.suffix();
    QFile::copy(src, newFile);
    ui->plainTextEdit->appendPlainText("源文件：" + src);
    ui->plainTextEdit->appendPlainText("复制为文件：" + newFile + "\n");

}


void Dialog::on_pushButton_49_clicked()
{
    //remove
    showBtnInfo(sender());
    QString src = ui->editFile->text(); //源文件

    if (QFile::exists(src))
    {
        QFile::remove(src);
        ui->plainTextEdit->appendPlainText("删除文件：" + src + "\n");
    }
    else
        ui->plainTextEdit->appendPlainText("文件不存在\n");
}


void Dialog::on_pushButton_53_clicked()
{
    //成员函数copy
    showBtnInfo(sender());
    QString src = ui->editFile->text(); //源文件
    QFile   file(src);

    QFileInfo   fileInfo(src);
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + "--副本." + fileInfo.suffix();

    file.copy(newFile);
    ui->plainTextEdit->appendPlainText("源文件：" + src);
    ui->plainTextEdit->appendPlainText("复制为文件：" + newFile + "\n");
}


void Dialog::on_pushButton_56_clicked()
{
    //成员函数rename
    showBtnInfo(sender());
    QString src = ui->editFile->text(); //源文件
    QFile   file(src); //源文件对象
    QFileInfo   fileInfo(src);//源文件信息
    QString newFile = fileInfo.path() + "/" + fileInfo.baseName() + ".XYZ"; //修改文件后缀为“.XYZ”
    file.rename(newFile); //重命名文件
    ui->plainTextEdit->appendPlainText("源文件：" + src);
    ui->plainTextEdit->appendPlainText("重命名为：" + newFile + "\n");
}


void Dialog::on_pushButton_64_clicked()
{
    //成员函数moveToTrash
    showBtnInfo(sender());
    QString src = ui->editFile->text(); //源文件
    QFile   file(src);     //创建QFile对象时指定文件名
    file.moveToTrash();
    ui->plainTextEdit->appendPlainText("当前文件被移除到回收站：" + src + "\n");
}


void Dialog::on_pushButton_28_clicked()
{
    //absoluteFilePath
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.absoluteFilePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_29_clicked()
{
    //absolutePath
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.absolutePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_33_clicked()
{
    //filename
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.fileName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_34_clicked()
{
    //FilePath
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.filePath();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_38_clicked()
{
    //absoluteFilePath
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    qint64 size = fileinfo.size();
    ui->plainTextEdit->appendPlainText("文件大小为：" + QString::number(size) + "\n");
}


void Dialog::on_pushButton_37_clicked()
{
    //Path
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.path();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_31_clicked()
{
    //compeleteBaseName
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.completeBaseName();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_39_clicked()
{
    //suffix
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.suffix();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_32_clicked()
{
    //completesuffix
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QString str = fileinfo.completeSuffix();
    ui->plainTextEdit->appendPlainText(str + "\n");
}


void Dialog::on_pushButton_42_clicked()
{
    //isdir
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);

    if(fileinfo.isDir())
    {
        ui->plainTextEdit->appendPlainText("是一个文件夹");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("不是一个文件夹");
    }
}


void Dialog::on_pushButton_43_clicked()
{
    //isfile
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);

    if(fileinfo.isFile())
    {
        ui->plainTextEdit->appendPlainText("是一个文件");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("不是一个文件");
    }
}


void Dialog::on_pushButton_35_clicked()
{
    //isExecutable
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);

    if(fileinfo.isExecutable())
    {
        ui->plainTextEdit->appendPlainText("是一个可执行文件");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("不是一个可执行文件");
    }
}


void Dialog::on_pushButton_58_clicked()
{
    //birthtime
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QDateTime dt = fileinfo.birthTime();
    ui->plainTextEdit->appendPlainText(dt.toString("yyyy-MM-dd hh:mm:ss") + "\n");
}


void Dialog::on_pushButton_36_clicked()
{
    //lastModified
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QDateTime dt = fileinfo.lastModified();
    ui->plainTextEdit->appendPlainText(dt.toString("yyyy-MM-dd hh:mm:ss") + "\n");
}


void Dialog::on_pushButton_44_clicked()
{
    //lastRead
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);
    QDateTime dt = fileinfo.lastRead();
    ui->plainTextEdit->appendPlainText(dt.toString("yyyy-MM-dd hh:mm:ss") + "\n");
}


void Dialog::on_pushButton_59_clicked()
{
    //exists
    showBtnInfo(sender());
    QString src = ui->editFile->text();

    if(QFileInfo::exists(src))
    {
        ui->plainTextEdit->appendPlainText("文件存在");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("文件不存在");
    }
}


void Dialog::on_pushButton_27_clicked()
{
    //成员函数exists
    showBtnInfo(sender());
    QString src = ui->editFile->text();
    QFileInfo fileinfo(src);

    if(fileinfo.exists())
    {
        ui->plainTextEdit->appendPlainText("文件存在");
    }
    else
    {
        ui->plainTextEdit->appendPlainText("文件不存在");
    }

}


void Dialog::on_pushButton_7_clicked()
{
    //drives
    showBtnInfo(sender());
    QFileInfoList driverList = QDir::drives();

    for(int i = 0; i < driverList.size(); i++)
    {
        ui->plainTextEdit->appendPlainText(driverList.at(i).path());
    }

    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_11_clicked()
{
    //列出子目录
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QStringList strList = dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot);
    ui->plainTextEdit->appendPlainText("所选目录下的所有目录");

    for(int i = 0; i < strList.size(); i++)
    {
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }

    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_17_clicked()
{
    //列出子目录
    showBtnInfo(sender());
    QDir dir(ui->editDir->text());
    QStringList strList = dir.entryList(QDir::Files);
    ui->plainTextEdit->appendPlainText("所选目录下的所有文件");

    for(int i = 0; i < strList.size(); i++)
    {
        ui->plainTextEdit->appendPlainText(strList.at(i));
    }

    ui->plainTextEdit->appendPlainText("\n");
}


void Dialog::on_pushButton_21_clicked()
{
    //系统临时目录下创建临时文件夹
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::tempPath()= " + QDir::tempPath());
    QTemporaryDir dir;
    dir.setAutoRemove(true);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}


void Dialog::on_pushButton_67_clicked()
{
    //在指定目录下创建临时文件夹
    showBtnInfo(sender());
    QString specDir = ui->editDir->text();
    ui->plainTextEdit->appendPlainText("指定目录= " + specDir);
    QTemporaryDir dir(specDir + "/TempDir_XXXXXX");
    dir.setAutoRemove(false);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");
}


void Dialog::on_pushButton_68_clicked()
{
    //在当前目录下创建临时文件夹
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("当前目录= " + QDir::currentPath() + "\n");
    QTemporaryDir dir("SubDir_XXXXXX");
    dir.setAutoRemove(false);
    ui->plainTextEdit->appendPlainText(dir.path() + "\n");

}


void Dialog::on_pushButton_25_clicked()
{
    //在系统的临时目录下创建文件
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::tempPath()= " + QDir::tempPath());
    QTemporaryFile aFile;
    aFile.setAutoRemove(true);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_69_clicked()
{
    //在指定目录下创建临时文件
    showBtnInfo(sender());
    QString specDir = ui->editDir->text();
    ui->plainTextEdit->appendPlainText("指定目录= " + specDir);
    QTemporaryFile aFile(specDir + "/我的文件_XXXXXX.tmp");
    aFile.setAutoRemove(false);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();

}


void Dialog::on_pushButton_70_clicked()
{
    //在当前目录下创建临时文件夹
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("QDir::currentPath()= " + QDir::currentPath());
    QTemporaryFile aFile("图片XXXXXX.tmp");
    aFile.setAutoRemove(false);
    aFile.open();
    ui->plainTextEdit->appendPlainText(aFile.fileName() + "\n");
    aFile.close();
}


void Dialog::on_pushButton_46_clicked()
{
    //开始监视，addPath()
    showBtnInfo(sender());
    ui->plainTextEdit->appendPlainText("监视目录：" + ui->editDir->text() + "\n");
    fileWatcher.addPath(ui->editDir->text());
    fileWatcher.addPath(ui->editFile->text());
    connect(&fileWatcher, &QFileSystemWatcher::directoryChanged, this, &Dialog::do_directoryChanged);
    connect(&fileWatcher, &QFileSystemWatcher::fileChanged, this, &Dialog::do_fileChanged);
}

void Dialog::do_directoryChanged(const QString &path)
{
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("目录发生了变化\n");
}

void Dialog::do_fileChanged(const QString &path)
{
    ui->plainTextEdit->appendPlainText(path);
    ui->plainTextEdit->appendPlainText("文件发生了变化\n");
}


void Dialog::on_pushButton_47_clicked()
{
    //停止监视
    showBtnInfo(sender());
    ui->plainTextEdit ->appendPlainText("停止监视目录：" + ui->editDir->text() + "\n");
    fileWatcher.removePath(ui->editDir->text());
    fileWatcher.removePath(ui->editFile->text());
    disconnect(&fileWatcher);       //解除fileWatcher所有信号的连接
}


void Dialog::on_pushButton_41_clicked()
{
    //选中一个文件
    QString path = QFileDialog::getOpenFileName(this, "选择一个文件", QDir::currentPath(), "All Files(*.*)");

    if(path.isEmpty())
    {
        QMessageBox::warning(this, "错误", "未选中任何文件");
        return;
    }

    QFileInfo fileInfo(path);
    ui->editFile->setText(fileInfo.filePath());
}


void Dialog::on_pushButton_45_clicked()
{
    //选中一个目录
    QString dirName = QFileDialog::getExistingDirectory(this, "选择一个目录", QDir::currentPath());

    if(dirName.isEmpty())
    {
        QMessageBox::warning(this, "错误", "未选中任何目录");
        return;
    }

    QDir dir(dirName);
    ui->editDir->setText(dir.path());

}

