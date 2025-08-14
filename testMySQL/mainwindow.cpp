#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 查看驱动是否安装成功,是否有QMYSQL
    qDebug() << QSqlDatabase::drivers();

    //设置表格视图属性
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->btnDisconnect->setEnabled(false);
}

MainWindow::~MainWindow()
{
    //若数据库处于连接状态，则关闭
    if(db.isOpen())
    {
        db.close();
    }

    delete ui;
}

void MainWindow::on_btnConnect_clicked()
{
    //数据库连接参数
    QString host = ui->lineEditHost->text();
    QString dbName = ui->lineEditDataBase->text();
    QString user = ui->lineEditUsrName->text();
    QString password = ui->lineEditPwd->text();

    //配置数据库连接
    db = QSqlDatabase::addDatabase("QMYSQL", "my_conn_name");
    db.setHostName(host);
    db.setDatabaseName(dbName);
    db.setUserName(user);
    db.setPassword(password);
    db.setPort(3306);


    if(!db.open())
    {
        QMessageBox::critical(this, "错误", "无法连接至数据库:\n" + db.lastError().text());
        return;
    }

    ui->btnDisconnect->setEnabled(true);
    // 要切换数据库必须先断开连接，不允许在已连接数据库的情况下进行切库
    ui->btnConnect->setEnabled(false);
    // 初始化模型
    model = new QSqlTableModel(this, db);
    ui->tableView->setModel(model);
    QMessageBox::information(this, "成功", "数据库连接成功");
    setupTable();
}


void MainWindow::on_btnRefresh_clicked()
{
    if(db.isOpen())
    {
        setupTable();
    }
    else
    {
        QMessageBox::warning(this, "警告", "请先连接数据库");
    }

}

void MainWindow::setupTable()
{
    QString tableName = ui->lineEditTableName->text().trimmed();

    //若表格不存在则报错
    if (!db.tables().contains(tableName, Qt::CaseInsensitive))
    {
        QMessageBox::warning(this, "警告", "表不存在！请检查表名");
        return;
    }

    if(tableName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请输入表名");
        return;
    }

    model->setTable(tableName);

    //设置编辑策略
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    //表格打开失败也报错
    if(!model->select())
    {
        QMessageBox::critical(this, "错误", "无法加载表格数据:\n" + model->lastError().text());
        qDebug() << model->lastError().text();
        return;
    }

    // //手动设置表头
    // model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    // model->setHeaderData(1, Qt::Horizontal, tr("Name"));
    // model->setHeaderData(2, Qt::Horizontal, tr("hire_date"));
    // model->setHeaderData(3, Qt::Horizontal, tr("salary"));
    // model->setHeaderData(4, Qt::Horizontal, tr("dept_id"));

    //灵活获取数据库表里的表头！QSqlRecord专门获取字段
    QSqlRecord rec = model->record();

    for(int i = 0; i < rec.count(); i++)
    {
        //获取字段名
        QString fieldName = rec.fieldName(i);
        model->setHeaderData(i, Qt::Horizontal, fieldName);
    }

    //自动调整列参数以适应显示内容
    ui->tableView->resizeColumnsToContents();
    //显示有多少条记录
    ui->statusbar->showMessage(QString("共 %1 条记录").arg(model->rowCount()));

}

//断开连接数据库的按钮
void MainWindow::on_btnDisconnect_clicked()
{
    if(!db.isValid())  // 先检查连接是否有效
    {
        QMessageBox::warning(this, "提示", "当前没有有效的数据库连接");
        //避免出现未连接但按不了连接按钮的状况
        ui->btnConnect->setEnabled(true);
        ui->btnDisconnect->setEnabled(false);
        return;
    }

    // 1. 解除视图与模型的关联
    ui->tableView->setModel(nullptr);

    // 2. 清理模型
    if (model)
    {
        model->clear();
        model->deleteLater();
        model = nullptr;
    }

    // 3. 关闭连接
    if(db.isOpen())
    {
        db.close();
    }

    // 4. 延迟移除连接（关键！）
    QString connName = db.connectionName();

    QTimer::singleShot(0, [connName]()
    {
        if(QSqlDatabase::contains(connName))
        {
            QSqlDatabase::removeDatabase(connName);
        }
    });

    // 5. 重置数据库对象
    db = QSqlDatabase();
    ui->btnConnect->setEnabled(true);
    ui->btnDisconnect->setEnabled(false);
    ui->statusbar->showMessage("数据库已安全断开");

}

