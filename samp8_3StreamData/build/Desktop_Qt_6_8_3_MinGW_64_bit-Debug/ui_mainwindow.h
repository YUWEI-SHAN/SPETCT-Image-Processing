/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actClearOutput;
    QAction *actClose;
    QAction *actSaveALL;
    QAction *actReadALL;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnFile;
    QLineEdit *editFilename;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_LittleEndian;
    QRadioButton *radio_BigEndian;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radio_Single;
    QRadioButton *radio_Double;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spin_Double;
    QLineEdit *edit_UInt16;
    QLabel *label_12;
    QPushButton *btnDouble_Write;
    QCheckBox *chkBox_Out;
    QLineEdit *edit_UInt8;
    QPushButton *btnInt16_Write;
    QLabel *label_7;
    QLineEdit *edit_Float;
    QLineEdit *editQStr_In;
    QPushButton *btnUInt8_Write;
    QPushButton *btnStr_Read;
    QLabel *label_15;
    QLabel *label_5;
    QPushButton *btnUIn16_Read;
    QPushButton *btnBool_Read;
    QPushButton *btnInt8_Read;
    QPushButton *btnColor_In;
    QPushButton *btnFloat_Write;
    QSpinBox *spin_Int8;
    QLineEdit *editColor_Out;
    QSpinBox *spin_UInt8;
    QPushButton *btnInt8_Write;
    QPushButton *btnInt64_Write;
    QLabel *label_6;
    QSpinBox *spin_Int32;
    QSpinBox *spin_Int64;
    QLineEdit *edit_Int8;
    QPushButton *btnColor_Read;
    QLineEdit *editStr_In;
    QLineEdit *editStr_Out;
    QPushButton *btnBool_Write;
    QPushButton *btnFont_In;
    QLineEdit *editQStr_Out;
    QLabel *label_2;
    QCheckBox *chkBox_In;
    QLabel *label_13;
    QPushButton *btnQStr_Read;
    QPushButton *btnInt64_Read;
    QPushButton *btnStr_Write;
    QLineEdit *edit_Int16;
    QPushButton *btnFont_Write;
    QPushButton *btnUInt16_Write;
    QPushButton *btnUInt8_Read;
    QSpinBox *spin_UInt16;
    QLabel *label_4;
    QPushButton *btnInt32_Write;
    QLabel *label_11;
    QLineEdit *edit_Double;
    QPushButton *btnInt16_Read;
    QLineEdit *editFont_Out;
    QPushButton *btnDouble_Read;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_10;
    QLineEdit *edit_Int64;
    QPushButton *btnFloat_Read;
    QPushButton *btnInt32_Read;
    QDoubleSpinBox *spin_Float;
    QSpinBox *spin_Int16;
    QPushButton *btnQStr_Write;
    QPushButton *btnColor_Write;
    QLabel *label_16;
    QLineEdit *edit_Int32;
    QPushButton *btnFont_Read;
    QLabel *label_8;
    QPushButton *btnInt_Write;
    QPushButton *btnInt_Read;
    QLineEdit *edit_Float16;
    QDoubleSpinBox *spin_Float16;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(575, 591);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        actClearOutput = new QAction(MainWindow);
        actClearOutput->setObjectName("actClearOutput");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/214.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actClearOutput->setIcon(icon);
        actClose = new QAction(MainWindow);
        actClose->setObjectName("actClose");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/132.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actClose->setIcon(icon1);
        actSaveALL = new QAction(MainWindow);
        actSaveALL->setObjectName("actSaveALL");
        actSaveALL->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/saveall1.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSaveALL->setIcon(icon2);
        actReadALL = new QAction(MainWindow);
        actReadALL->setObjectName("actReadALL");
        actReadALL->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/images/upfold1.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actReadALL->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMaximumSize(QSize(16777215, 90));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 5, -1, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnFile = new QToolButton(groupBox_2);
        btnFile->setObjectName("btnFile");
        btnFile->setMinimumSize(QSize(0, 22));

        horizontalLayout_3->addWidget(btnFile);

        editFilename = new QLineEdit(groupBox_2);
        editFilename->setObjectName("editFilename");

        horizontalLayout_3->addWidget(editFilename);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 5, -1, 5);
        radio_LittleEndian = new QRadioButton(groupBox_3);
        radio_LittleEndian->setObjectName("radio_LittleEndian");
        radio_LittleEndian->setChecked(true);

        horizontalLayout->addWidget(radio_LittleEndian);

        radio_BigEndian = new QRadioButton(groupBox_3);
        radio_BigEndian->setObjectName("radio_BigEndian");

        horizontalLayout->addWidget(radio_BigEndian);


        horizontalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 5, -1, 5);
        radio_Single = new QRadioButton(groupBox_4);
        radio_Single->setObjectName("radio_Single");
        radio_Single->setChecked(true);

        horizontalLayout_2->addWidget(radio_Single);

        radio_Double = new QRadioButton(groupBox_4);
        radio_Double->setObjectName("radio_Double");

        horizontalLayout_2->addWidget(radio_Double);


        horizontalLayout_4->addWidget(groupBox_4);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setVerticalSpacing(5);
        spin_Double = new QDoubleSpinBox(groupBox);
        spin_Double->setObjectName("spin_Double");
        spin_Double->setDecimals(4);
        spin_Double->setMinimum(-600000000.000000000000000);
        spin_Double->setMaximum(600000000.000000000000000);
        spin_Double->setValue(-456.523599999999988);

        gridLayout->addWidget(spin_Double, 10, 1, 1, 1);

        edit_UInt16 = new QLineEdit(groupBox);
        edit_UInt16->setObjectName("edit_UInt16");
        edit_UInt16->setReadOnly(true);

        gridLayout->addWidget(edit_UInt16, 3, 4, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 10, 0, 1, 1);

        btnDouble_Write = new QPushButton(groupBox);
        btnDouble_Write->setObjectName("btnDouble_Write");

        gridLayout->addWidget(btnDouble_Write, 10, 2, 1, 1);

        chkBox_Out = new QCheckBox(groupBox);
        chkBox_Out->setObjectName("chkBox_Out");

        gridLayout->addWidget(chkBox_Out, 7, 4, 1, 1);

        edit_UInt8 = new QLineEdit(groupBox);
        edit_UInt8->setObjectName("edit_UInt8");
        edit_UInt8->setReadOnly(true);

        gridLayout->addWidget(edit_UInt8, 1, 4, 1, 1);

        btnInt16_Write = new QPushButton(groupBox);
        btnInt16_Write->setObjectName("btnInt16_Write");

        gridLayout->addWidget(btnInt16_Write, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        edit_Float = new QLineEdit(groupBox);
        edit_Float->setObjectName("edit_Float");
        edit_Float->setReadOnly(true);

        gridLayout->addWidget(edit_Float, 9, 4, 1, 1);

        editQStr_In = new QLineEdit(groupBox);
        editQStr_In->setObjectName("editQStr_In");

        gridLayout->addWidget(editQStr_In, 13, 1, 1, 1);

        btnUInt8_Write = new QPushButton(groupBox);
        btnUInt8_Write->setObjectName("btnUInt8_Write");

        gridLayout->addWidget(btnUInt8_Write, 1, 2, 1, 1);

        btnStr_Read = new QPushButton(groupBox);
        btnStr_Read->setObjectName("btnStr_Read");

        gridLayout->addWidget(btnStr_Read, 12, 3, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 14, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        btnUIn16_Read = new QPushButton(groupBox);
        btnUIn16_Read->setObjectName("btnUIn16_Read");

        gridLayout->addWidget(btnUIn16_Read, 3, 3, 1, 1);

        btnBool_Read = new QPushButton(groupBox);
        btnBool_Read->setObjectName("btnBool_Read");

        gridLayout->addWidget(btnBool_Read, 7, 3, 1, 1);

        btnInt8_Read = new QPushButton(groupBox);
        btnInt8_Read->setObjectName("btnInt8_Read");

        gridLayout->addWidget(btnInt8_Read, 0, 3, 1, 1);

        btnColor_In = new QPushButton(groupBox);
        btnColor_In->setObjectName("btnColor_In");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 0, 0, 128));
        brush1.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush2(QColor(255, 0, 0, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush4(QColor(255, 0, 0, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        btnColor_In->setPalette(palette);

        gridLayout->addWidget(btnColor_In, 15, 1, 1, 1);

        btnFloat_Write = new QPushButton(groupBox);
        btnFloat_Write->setObjectName("btnFloat_Write");

        gridLayout->addWidget(btnFloat_Write, 9, 2, 1, 1);

        spin_Int8 = new QSpinBox(groupBox);
        spin_Int8->setObjectName("spin_Int8");
        spin_Int8->setMinimum(-128);
        spin_Int8->setMaximum(127);
        spin_Int8->setValue(85);

        gridLayout->addWidget(spin_Int8, 0, 1, 1, 1);

        editColor_Out = new QLineEdit(groupBox);
        editColor_Out->setObjectName("editColor_Out");
        editColor_Out->setReadOnly(false);

        gridLayout->addWidget(editColor_Out, 15, 4, 1, 1);

        spin_UInt8 = new QSpinBox(groupBox);
        spin_UInt8->setObjectName("spin_UInt8");
        spin_UInt8->setMinimum(0);
        spin_UInt8->setMaximum(255);
        spin_UInt8->setValue(236);

        gridLayout->addWidget(spin_UInt8, 1, 1, 1, 1);

        btnInt8_Write = new QPushButton(groupBox);
        btnInt8_Write->setObjectName("btnInt8_Write");

        gridLayout->addWidget(btnInt8_Write, 0, 2, 1, 1);

        btnInt64_Write = new QPushButton(groupBox);
        btnInt64_Write->setObjectName("btnInt64_Write");

        gridLayout->addWidget(btnInt64_Write, 5, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        spin_Int32 = new QSpinBox(groupBox);
        spin_Int32->setObjectName("spin_Int32");
        spin_Int32->setMinimum(-2147483647);
        spin_Int32->setMaximum(2147483647);
        spin_Int32->setValue(-3546);

        gridLayout->addWidget(spin_Int32, 4, 1, 1, 1);

        spin_Int64 = new QSpinBox(groupBox);
        spin_Int64->setObjectName("spin_Int64");
        spin_Int64->setMinimum(-2147483647);
        spin_Int64->setMaximum(2147483647);
        spin_Int64->setValue(2564851);

        gridLayout->addWidget(spin_Int64, 5, 1, 1, 1);

        edit_Int8 = new QLineEdit(groupBox);
        edit_Int8->setObjectName("edit_Int8");
        edit_Int8->setReadOnly(true);

        gridLayout->addWidget(edit_Int8, 0, 4, 1, 1);

        btnColor_Read = new QPushButton(groupBox);
        btnColor_Read->setObjectName("btnColor_Read");

        gridLayout->addWidget(btnColor_Read, 15, 3, 1, 1);

        editStr_In = new QLineEdit(groupBox);
        editStr_In->setObjectName("editStr_In");

        gridLayout->addWidget(editStr_In, 12, 1, 1, 1);

        editStr_Out = new QLineEdit(groupBox);
        editStr_Out->setObjectName("editStr_Out");

        gridLayout->addWidget(editStr_Out, 12, 4, 1, 1);

        btnBool_Write = new QPushButton(groupBox);
        btnBool_Write->setObjectName("btnBool_Write");

        gridLayout->addWidget(btnBool_Write, 7, 2, 1, 1);

        btnFont_In = new QPushButton(groupBox);
        btnFont_In->setObjectName("btnFont_In");

        gridLayout->addWidget(btnFont_In, 14, 1, 1, 1);

        editQStr_Out = new QLineEdit(groupBox);
        editQStr_Out->setObjectName("editQStr_Out");
        editQStr_Out->setReadOnly(true);

        gridLayout->addWidget(editQStr_Out, 13, 4, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        chkBox_In = new QCheckBox(groupBox);
        chkBox_In->setObjectName("chkBox_In");

        gridLayout->addWidget(chkBox_In, 7, 1, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 13, 0, 1, 1);

        btnQStr_Read = new QPushButton(groupBox);
        btnQStr_Read->setObjectName("btnQStr_Read");

        gridLayout->addWidget(btnQStr_Read, 13, 3, 1, 1);

        btnInt64_Read = new QPushButton(groupBox);
        btnInt64_Read->setObjectName("btnInt64_Read");

        gridLayout->addWidget(btnInt64_Read, 5, 3, 1, 1);

        btnStr_Write = new QPushButton(groupBox);
        btnStr_Write->setObjectName("btnStr_Write");

        gridLayout->addWidget(btnStr_Write, 12, 2, 1, 1);

        edit_Int16 = new QLineEdit(groupBox);
        edit_Int16->setObjectName("edit_Int16");
        edit_Int16->setReadOnly(true);

        gridLayout->addWidget(edit_Int16, 2, 4, 1, 1);

        btnFont_Write = new QPushButton(groupBox);
        btnFont_Write->setObjectName("btnFont_Write");

        gridLayout->addWidget(btnFont_Write, 14, 2, 1, 1);

        btnUInt16_Write = new QPushButton(groupBox);
        btnUInt16_Write->setObjectName("btnUInt16_Write");

        gridLayout->addWidget(btnUInt16_Write, 3, 2, 1, 1);

        btnUInt8_Read = new QPushButton(groupBox);
        btnUInt8_Read->setObjectName("btnUInt8_Read");

        gridLayout->addWidget(btnUInt8_Read, 1, 3, 1, 1);

        spin_UInt16 = new QSpinBox(groupBox);
        spin_UInt16->setObjectName("spin_UInt16");
        spin_UInt16->setMinimum(0);
        spin_UInt16->setMaximum(65535);
        spin_UInt16->setValue(54862);

        gridLayout->addWidget(spin_UInt16, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        btnInt32_Write = new QPushButton(groupBox);
        btnInt32_Write->setObjectName("btnInt32_Write");

        gridLayout->addWidget(btnInt32_Write, 4, 2, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        edit_Double = new QLineEdit(groupBox);
        edit_Double->setObjectName("edit_Double");
        edit_Double->setReadOnly(true);

        gridLayout->addWidget(edit_Double, 10, 4, 1, 1);

        btnInt16_Read = new QPushButton(groupBox);
        btnInt16_Read->setObjectName("btnInt16_Read");

        gridLayout->addWidget(btnInt16_Read, 2, 3, 1, 1);

        editFont_Out = new QLineEdit(groupBox);
        editFont_Out->setObjectName("editFont_Out");
        editFont_Out->setReadOnly(false);

        gridLayout->addWidget(editFont_Out, 14, 4, 1, 1);

        btnDouble_Read = new QPushButton(groupBox);
        btnDouble_Read->setObjectName("btnDouble_Read");

        gridLayout->addWidget(btnDouble_Read, 10, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 12, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 7, 0, 1, 1);

        edit_Int64 = new QLineEdit(groupBox);
        edit_Int64->setObjectName("edit_Int64");
        edit_Int64->setReadOnly(true);

        gridLayout->addWidget(edit_Int64, 5, 4, 1, 1);

        btnFloat_Read = new QPushButton(groupBox);
        btnFloat_Read->setObjectName("btnFloat_Read");

        gridLayout->addWidget(btnFloat_Read, 9, 3, 1, 1);

        btnInt32_Read = new QPushButton(groupBox);
        btnInt32_Read->setObjectName("btnInt32_Read");

        gridLayout->addWidget(btnInt32_Read, 4, 3, 1, 1);

        spin_Float = new QDoubleSpinBox(groupBox);
        spin_Float->setObjectName("spin_Float");
        spin_Float->setDecimals(4);
        spin_Float->setMinimum(-60000000.000000000000000);
        spin_Float->setMaximum(600000000.000000000000000);
        spin_Float->setValue(1542.361400000000003);

        gridLayout->addWidget(spin_Float, 9, 1, 1, 1);

        spin_Int16 = new QSpinBox(groupBox);
        spin_Int16->setObjectName("spin_Int16");
        spin_Int16->setMinimum(-32768);
        spin_Int16->setMaximum(32767);
        spin_Int16->setValue(-1522);

        gridLayout->addWidget(spin_Int16, 2, 1, 1, 1);

        btnQStr_Write = new QPushButton(groupBox);
        btnQStr_Write->setObjectName("btnQStr_Write");

        gridLayout->addWidget(btnQStr_Write, 13, 2, 1, 1);

        btnColor_Write = new QPushButton(groupBox);
        btnColor_Write->setObjectName("btnColor_Write");

        gridLayout->addWidget(btnColor_Write, 15, 2, 1, 1);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 15, 0, 1, 1);

        edit_Int32 = new QLineEdit(groupBox);
        edit_Int32->setObjectName("edit_Int32");
        edit_Int32->setReadOnly(true);

        gridLayout->addWidget(edit_Int32, 4, 4, 1, 1);

        btnFont_Read = new QPushButton(groupBox);
        btnFont_Read->setObjectName("btnFont_Read");

        gridLayout->addWidget(btnFont_Read, 14, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        btnInt_Write = new QPushButton(groupBox);
        btnInt_Write->setObjectName("btnInt_Write");

        gridLayout->addWidget(btnInt_Write, 8, 2, 1, 1);

        btnInt_Read = new QPushButton(groupBox);
        btnInt_Read->setObjectName("btnInt_Read");

        gridLayout->addWidget(btnInt_Read, 8, 3, 1, 1);

        edit_Float16 = new QLineEdit(groupBox);
        edit_Float16->setObjectName("edit_Float16");
        edit_Float16->setReadOnly(true);

        gridLayout->addWidget(edit_Float16, 8, 4, 1, 1);

        spin_Float16 = new QDoubleSpinBox(groupBox);
        spin_Float16->setObjectName("spin_Float16");
        spin_Float16->setMinimum(-10000.000000000000000);
        spin_Float16->setMaximum(10000.000000000000000);
        spin_Float16->setValue(675.259999999999991);

        gridLayout->addWidget(spin_Float16, 8, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actClearOutput);
        toolBar->addAction(actSaveALL);
        toolBar->addAction(actReadALL);
        toolBar->addSeparator();
        toolBar->addAction(actClose);

        retranslateUi(MainWindow);
        QObject::connect(actClose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\242\204\345\256\232\344\271\211\347\274\226\347\240\201\345\272\217\345\210\227\345\214\226\350\257\273\345\206\231\344\272\214\350\277\233\345\210\266\346\226\207\344\273\266", nullptr));
        actClearOutput->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\346\241\206\345\205\250\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actClearOutput->setToolTip(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272\346\225\260\346\215\256\347\232\204\347\274\226\350\276\221\346\241\206\345\205\250\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actSaveALL->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actSaveALL->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actReadALL->setText(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\344\273\216\346\226\207\344\273\266\350\257\273\345\217\226", nullptr));
#if QT_CONFIG(tooltip)
        actReadALL->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\236\347\273\255\344\273\216\346\226\207\344\273\266\350\257\273\345\217\226", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QString());
        btnFile->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\347\224\250\346\226\207\344\273\266", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\350\212\202\345\272\217", nullptr));
        radio_LittleEndian->setText(QCoreApplication::translate("MainWindow", "LittleEndian", nullptr));
        radio_BigEndian->setText(QCoreApplication::translate("MainWindow", "BigEndian", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\265\256\347\202\271\346\225\260\347\262\276\345\272\246", nullptr));
        radio_Single->setText(QCoreApplication::translate("MainWindow", "SinglePrecision", nullptr));
        radio_Double->setText(QCoreApplication::translate("MainWindow", "DoublePrecision", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\242\204\347\274\226\347\240\201\346\225\260\346\215\256\345\272\217\345\210\227\345\214\226\346\226\271\345\274\217\350\257\273\345\206\231\346\265\213\350\257\225", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "double", nullptr));
        btnDouble_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        chkBox_Out->setText(QCoreApplication::translate("MainWindow", "\345\270\203\345\260\224\345\200\274", nullptr));
        btnInt16_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "qint64", nullptr));
#if QT_CONFIG(tooltip)
        editQStr_In->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\257\344\273\245\350\276\223\345\205\245\346\261\211\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        editQStr_In->setText(QCoreApplication::translate("MainWindow", "HelloQ", nullptr));
        btnUInt8_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnStr_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "QFont", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "quint16(0~65535)", nullptr));
        btnUIn16_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnBool_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnInt8_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnColor_In->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        btnFloat_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        editColor_Out->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262", nullptr));
        btnInt8_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnInt64_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "qint32", nullptr));
        btnColor_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        editStr_In->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\252\350\203\275\350\276\223\345\205\245ASCII\347\240\201", nullptr));
#endif // QT_CONFIG(tooltip)
        editStr_In->setText(QCoreApplication::translate("MainWindow", "Hello", nullptr));
        btnBool_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnFont_In->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "quint8(0~255)", nullptr));
        chkBox_In->setText(QCoreApplication::translate("MainWindow", "\345\270\203\345\260\224\345\200\274", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "QString", nullptr));
        btnQStr_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnInt64_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnStr_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnFont_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnUInt16_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnUInt8_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "qint16(-32768~32767)", nullptr));
        btnInt32_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "float", nullptr));
        btnInt16_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        editFont_Out->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223", nullptr));
        btnDouble_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "qint8(-128~127)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "char* string", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Bool", nullptr));
        btnFloat_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnInt32_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        btnQStr_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnColor_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "QColor", nullptr));
        btnFont_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "qfloat16", nullptr));
        btnInt_Write->setText(QCoreApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        btnInt_Read->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
