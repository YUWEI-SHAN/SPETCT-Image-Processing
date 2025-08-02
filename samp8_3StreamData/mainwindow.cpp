#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox->setEnabled(false);
    font_ini = ui->editFont_Out->font();
    plet_ini = ui->editColor_Out->palette();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnFile_clicked()
{
    QString curPath = QDir::currentPath();
    m_filename = QFileDialog::getOpenFileName(this, "选择一个文件", curPath, "流数据文件(*.stream)");

    if(!m_filename.isEmpty())
    {
        ui->editFilename->setText(m_filename);
        ui->groupBox->setEnabled(true);
        ui->actSaveALL->setEnabled(true);
        ui->actReadALL->setEnabled(true);
    }
}


template<class T>
void MainWindow::writeByStream(T Value)
{
    QFile fileDevice(m_filename);

    if(!fileDevice.open(QIODevice::WriteOnly))
    {
        return;
    }

    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_2);

    if(ui->radio_BigEndian->isChecked())
    {
        fileStream.setByteOrder(QDataStream::BigEndian);
    }
    else
    {
        fileStream.setByteOrder(QDataStream::LittleEndian);
    }

    if(ui->radio_Single->isChecked())
    {
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    }
    else
    {
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);
    }

    fileStream << Value;
    fileDevice.close();
}

template<class T>
void MainWindow::readByStream(T &Value)
{
    if(!QFile::exists(m_filename))
    {
        QMessageBox::critical(this, "错误", "文件不存在，文件名：\n" + m_filename);
        return;
    }

    QFile fileDevice(m_filename);

    if(!fileDevice.open(QIODevice::ReadOnly))
    {
        return;
    }

    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_2);

    if(ui->radio_BigEndian->isChecked())
    {
        fileStream.setByteOrder(QDataStream::BigEndian);
    }
    else
    {
        fileStream.setByteOrder(QDataStream::LittleEndian);
    }

    if(ui->radio_Single->isChecked())
    {
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    }
    else
    {
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);
    }

    fileStream >> Value;
    fileDevice.close();
}

void MainWindow::on_btnInt8_Write_clicked()
{
    qint8 val = ui->spin_Int8->value();
    writeByStream(val);
}


void MainWindow::on_btnUInt8_Write_clicked()
{
    quint8 val = ui->spin_UInt8->value();
    writeByStream(val);
}


void MainWindow::on_btnInt16_Write_clicked()
{
    qint16 val = ui->spin_Int16->value();
    writeByStream(val);
}


void MainWindow::on_btnUInt16_Write_clicked()
{
    quint16 val = ui->spin_UInt16->value();
    writeByStream(val);
}


void MainWindow::on_btnInt32_Write_clicked()
{
    qint32 val = ui->spin_Int32->value();
    writeByStream(val);
}


void MainWindow::on_btnInt64_Write_clicked()
{
    qint64 val = ui->spin_Int64->value();
    writeByStream(val);
}


void MainWindow::on_btnBool_Write_clicked()
{
    bool val = ui->chkBox_In->isChecked();
    writeByStream(val);
}


void MainWindow::on_btnInt_Write_clicked()
{
    qfloat16 val = ui->spin_Float16->value();
    writeByStream(val);
}


void MainWindow::on_btnFloat_Write_clicked()
{
    float val = ui->spin_Float->value();
    writeByStream(val);
}


void MainWindow::on_btnDouble_Write_clicked()
{
    double val = ui->spin_Double->value();
    writeByStream(val);
}


void MainWindow::on_btnStr_Write_clicked()
{
    QString str = ui->editStr_In->text();
    char *val = str.toLocal8Bit().data();
    writeByStream(val);
}


void MainWindow::on_btnQStr_Write_clicked()
{
    QString val = ui->editQStr_In->text();
    writeByStream(val);
}

void MainWindow::on_btnFont_In_clicked()
{
    QFont font = ui->btnFont_In->font();
    bool OK = false;
    font = QFontDialog::getFont(&OK, font, this);

    if(OK)
    {
        ui->btnFont_In->setFont(font);
    }
}


void MainWindow::on_btnColor_In_clicked()
{
    QPalette plet = ui->btnColor_In->palette();
    QColor color = plet.buttonText().color();
    color = QColorDialog::getColor(color);

    if(color.isValid())
    {
        plet.setColor(QPalette::ButtonText, color);
        ui->btnColor_In->setPalette(plet);
    }
}

void MainWindow::on_btnFont_Write_clicked()
{
    QFont font = ui->btnFont_In->font();
    writeByStream(font);
}


void MainWindow::on_btnColor_Write_clicked()
{
    QPalette plet = ui->btnColor_In->palette();
    QColor color = plet.buttonText().color();
    writeByStream(color);
}




void MainWindow::on_btnInt8_Read_clicked()
{
    qint8 val = 0;
    readByStream(val);
    ui->edit_Int8->setText(QString("%1").arg(val));
}


void MainWindow::on_btnUInt8_Read_clicked()
{
    quint8 val = 0;
    readByStream(val);
    ui->edit_UInt8->setText(QString("%1").arg(val));
}


void MainWindow::on_btnInt16_Read_clicked()
{
    qint16 val = 0;
    readByStream(val);
    ui->edit_Int16->setText(QString("%1").arg(val));
}


void MainWindow::on_btnUIn16_Read_clicked()
{
    quint16 val = 0;
    readByStream(val);
    ui->edit_UInt16->setText(QString("%1").arg(val));
}


void MainWindow::on_btnInt32_Read_clicked()
{
    qint32 val = 0;
    readByStream(val);
    ui->edit_Int32->setText(QString("%1").arg(val));
}


void MainWindow::on_btnInt64_Read_clicked()
{
    qint64 val = 0;
    readByStream(val);
    ui->edit_Int64->setText(QString("%1").arg(val));
}


void MainWindow::on_btnBool_Read_clicked()
{
    bool val = false;
    readByStream(val);
    ui->chkBox_Out->setChecked(val);
}


void MainWindow::on_btnInt_Read_clicked()
{
    qfloat16 val = 0;
    readByStream(val);
    float value = val;      //比较特殊，需要先转为float，因为asprintf不支持qfloat16类型的展示
    ui->edit_Float16->setText(QString::asprintf("%.2f", value));
}


void MainWindow::on_btnFloat_Read_clicked()
{
    float val = 0;
    readByStream(val);
    ui->edit_Float->setText(QString::asprintf("%.4f", val));
}


void MainWindow::on_btnDouble_Read_clicked()
{
    double val = 0;
    readByStream(val);
    ui->edit_Double->setText(QString::asprintf("%.4f", val));
}


void MainWindow::on_btnStr_Read_clicked()
{
    char *val;
    readByStream(val);
    QString str(val);
    ui->editStr_Out->setText(str);
}


void MainWindow::on_btnQStr_Read_clicked()
{
    QString val = "";
    readByStream(val);
    ui->editQStr_Out->setText(val);
}


void MainWindow::on_btnFont_Read_clicked()
{
    QFont font;
    readByStream(font);
    ui->editFont_Out->setFont(font);
}


void MainWindow::on_btnColor_Read_clicked()
{
    QColor color = Qt::black;
    readByStream(color);
    QPalette plet = ui->editColor_Out->palette();
    plet.setColor(QPalette::Text, color);
    ui->editColor_Out->setPalette(plet);
}


void MainWindow::on_actSaveALL_triggered()
{
    QFile fileDevice(m_filename);

    if(!fileDevice.open(QIODevice::WriteOnly))
    {
        return;
    }

    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_2);

    if(ui->radio_BigEndian->isChecked())
    {
        fileStream.setByteOrder(QDataStream::BigEndian);
    }
    else
    {
        fileStream.setByteOrder(QDataStream::LittleEndian);
    }

    if(ui->radio_Single->isChecked())
    {
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    }
    else
    {
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);
    }

    qint8 int8_val = ui->spin_Int8->value();
    fileStream << int8_val;

    quint8 uint8_val = ui->spin_UInt8->value();
    fileStream << uint8_val;

    qint16 int16_val = ui->spin_Int16->value();
    fileStream << int16_val;

    quint16 uint16_val = ui->spin_UInt16->value();
    fileStream << uint16_val;

    qint32 int32_val = ui->spin_Int32->value();
    fileStream << int32_val;

    qint64 int64_val = ui->spin_Int64->value();
    fileStream << int64_val;

    bool bool_val = ui->chkBox_In->isChecked();
    fileStream << bool_val;

    qfloat16 float16_val = ui->spin_Float16->value();
    fileStream << float16_val;

    float float_val = ui->spin_Float->value();
    fileStream << float_val;

    double double_val = ui->spin_Double->value();
    fileStream << double_val;

    QString str = ui->editStr_In->text();
    char *char_str = str.toLocal8Bit().data();
    fileStream << char_str;

    QString str_val = ui->editQStr_In->text();
    fileStream << str_val;

    QFont font = ui->btnFont_In->font();
    fileStream << font;

    QPalette plet = ui->btnColor_In->palette();
    QColor color = plet.buttonText().color();
    fileStream << color;

    fileDevice.close();
    QMessageBox::information(this, "消息", "数据连续写入文件完成");

}


void MainWindow::on_actReadALL_triggered()
{
    if(!QFile::exists(m_filename))
    {
        QMessageBox::critical(this, "错误", "文件不存在,文件名：\n" + m_filename);
        return;
    }

    QFile fileDevice(m_filename);

    if(!fileDevice.open(QIODevice::ReadOnly))
    {
        return;
    }

    QDataStream fileStream(&fileDevice);
    fileStream.setVersion(QDataStream::Qt_6_2);

    if(ui->radio_BigEndian->isChecked())
    {
        fileStream.setByteOrder(QDataStream::BigEndian);
    }
    else
    {
        fileStream.setByteOrder(QDataStream::LittleEndian);
    }

    if(ui->radio_Single->isChecked())
    {
        fileStream.setFloatingPointPrecision(QDataStream::SinglePrecision);
    }
    else
    {
        fileStream.setFloatingPointPrecision(QDataStream::DoublePrecision);
    }

    fileStream.startTransaction();

    qint8 int8_val = 0;
    fileStream >> int8_val;
    ui->edit_Int8->setText(QString("%1").arg(int8_val));

    quint8 uint8_val = 0;
    fileStream >> uint8_val;
    ui->edit_UInt8->setText(QString("%1").arg(uint8_val));

    qint16 int16_val = 0;
    fileStream >> int16_val;
    ui->edit_Int16->setText(QString("%1").arg(int16_val));

    quint16 uint16_val = 0;
    fileStream >> uint16_val;
    ui->edit_UInt16->setText(QString("%1").arg(uint16_val));

    qint32 int32_val = 0;
    fileStream >> int32_val;
    ui->edit_Int32->setText(QString("%1").arg(int32_val));


    qint64 int64_val = 0;
    fileStream >> int64_val;
    ui->edit_Int64->setText(QString("%1").arg(int64_val));


    bool bool_val = false;
    fileStream >> bool_val;
    ui->chkBox_Out->setChecked(bool_val);

    qfloat16 float16_val = 0;
    fileStream >> float16_val;
    float val = float16_val;
    ui->edit_Float16->setText(QString::asprintf("%.2f", val));

    float float_val = 0;
    fileStream >> float_val;
    ui->edit_Float->setText(QString::asprintf("%.4f", float_val));


    double double_val = 0;
    fileStream >> double_val;
    ui->edit_Double->setText(QString::asprintf("%.4f", double_val));


    char *char_str;
    fileStream >> char_str;
    QString str(char_str);
    ui->editStr_Out->setText(str);


    QString str_val = "";
    fileStream >> str_val;
    ui->editQStr_Out->setText(str_val);


    QFont font;
    fileStream >> font;
    ui->editFont_Out->setFont(font);

    QColor color;
    fileStream >> color;
    QPalette plet = ui->editColor_Out->palette();
    plet.setColor(QPalette::Text, color);
    ui->editColor_Out->setPalette(plet);

    if(fileStream.commitTransaction())
    {
        QMessageBox::information(this, "消息", "从文件连续读取数据完成");
    }
    else
    {
        QMessageBox::critical(this, "错误", "文件读取过程出错，请检查文件格式");
    }

    fileDevice.close();
}


void MainWindow::on_actClearOutput_triggered()
{
    ui->edit_Int8->clear();
    ui->edit_UInt8->clear();
    ui->edit_Int16->clear();
    ui->edit_UInt16->clear();
    ui->edit_Int32->clear();
    ui->edit_Int64->clear();
    ui->chkBox_Out->setChecked(false);
    ui->edit_Float16->clear();
    ui->edit_Float->clear();
    ui->edit_Double->clear();
    ui->editStr_Out->clear();
    ui->editQStr_Out->clear();
    ui->editFont_Out->setFont(font_ini);
    ui->editColor_Out->setPalette(plet_ini);
}

