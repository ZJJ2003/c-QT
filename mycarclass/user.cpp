#include "user.h"
#include "car.h"
#include "ui_user.h"
#include<QMessageBox>
user::user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
    //设置背景图片
            this->setAutoFillBackground(true);
            QPalette palette;
            QPixmap pixmap(":/image/bcg.jpg");
            palette.setBrush(QPalette::Window,QBrush(pixmap));
            this->setPalette(palette);
            //背景图片设置完成

            //设置图标
            setWindowIcon(QIcon(":/image/picture.ico"));
}

user::~user()
{
    delete ui;
}

void user::on_pushButton_clicked()
{
    search*search1=new search;


    search1->setFixedSize(600,400);
    search1->setWindowTitle("查询界面");
    search1->show();
    search1->setAttribute(Qt::WA_DeleteOnClose);
}


void user::on_pushButton_2_clicked()
{if(position==50)
        QMessageBox::warning(this,"警告！","车辆信息库已满，不能添加新数据！");
       else
    {add *add1=new add;
    add1->setFixedSize(600,400);
   add1->setWindowTitle("信息添加界面");
    add1->show();
    add1->setAttribute(Qt::WA_DeleteOnClose);}
}


void user::on_pushButton_3_clicked()
{
    database*database1=new database;
    database1->setFixedSize(600,400);
   database1->setWindowTitle("数据库查看界面");
    database1->show();
    database1->setAttribute(Qt::WA_DeleteOnClose);
}


void user::on_pushButton_4_clicked()
{
    diver *diver2=new diver;
    diver2->setFixedSize(600,400);
   diver2->setWindowTitle("驾驶员操作界面");
    diver2->show();
    diver2->setAttribute(Qt::WA_DeleteOnClose);
}

