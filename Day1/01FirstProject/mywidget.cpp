#include "mywidget.h"
// 按钮的头文件
#include <QPushButton>
#include "mypushbutton.h"
#include <QDebug>

// 命名规范
// 类名首字母大写，单词和单词之间首字母大写
// 函数名 变量名称 首字母小写，单词和单词之间首字母大写

// 快捷键
// 注释 Ctrl + /
// 运行 Ctrl + r
// 编译 ctrl + b
// 字体缩放  ctrl + 滚轮
// 查找 ctrl + f
// 整行移动
// 帮助文档 F1
// 自动对齐 ctrl + i

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    // 创建一个按钮
    QPushButton *btn = new QPushButton;
    //btn->show(); // show以顶层方式弹出窗口控件
    // 让btn对象依赖在mywidget窗口中
    btn->setParent(this);
    // 显示文本
    btn->setText("第一个按钮");

    // 创建第二个按钮 按照控件的大小创建窗口
    QPushButton *btn2 = new QPushButton("第二个按钮", this);

    // 移动btn2按钮
    btn2->move(100, 100);

    // 按钮重新制定大小
    btn->resize(50, 50);

    // 重置窗口大小
    resize(600, 400);

    // 设置固定窗口大小
    setFixedSize(600, 400);

    // 设置窗口标题
    setWindowTitle("第一个窗口");

    // 创建一个自己的按钮对象
    MyPushButton *myBtn = new MyPushButton;
    myBtn->setText("我自己的按钮");
    myBtn->move(200, 0);
    myBtn->setParent(this);



}

myWidget::~myWidget()
{
    qDebug() << "myWidget的析构调用";
}
