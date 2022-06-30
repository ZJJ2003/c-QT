#include "login.h"
#include "ui_login.h"
#include<QMessageBox>
login::login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("用户登录界面");
     setFixedSize(600,400);
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

login::~login()
{
    delete ui;
}

//内置root用户名和密码
QString user1="root";
QString passwd1="root";
//内置普通用户
QString user2="user";
QString passwd2="123456";

//flag用来判断密码和用户名的正确性
int flag=0;
//flag=2时是管理员
//flag=4时是普通用户

//判断用户名是否存在
void login::on_uesrname_textEdited(const QString &arg1)
{
    if(arg1==user1)
    {flag=1;}
    if(arg1==user2)
        flag=3;
     if(arg1!=user1&&arg1!=user2)
       flag=0 ;
}

//判断密码和用户名相符与否
void login::on_passwd_textEdited(const QString &arg1)
{
    if(arg1==passwd1)
    {flag=2;}
    if(arg1==passwd2)
        flag=4;
   if(arg1!=passwd1&&arg1!=passwd2)
     flag=0   ;
}

//在按下登录键之后不同情况的处理

void login::on_pushButton_clicked()
{
    //管理员账户
         if(flag==2)
        {
             this->close();
        admin *admin1=new admin;

        admin1->setFixedSize(600,400);
       admin1->setWindowTitle("车辆管理系统by GodXin@赵健钧(管理员账户)");
        admin1->show();
     admin1->setAttribute(Qt::WA_DeleteOnClose);
        }
         //普通账户
        if(flag==4)

        {
            this->close();
           user *user1=new user;


            user1->setFixedSize(600,400);
            user1->setWindowTitle("车辆管理系统by GodXin@赵健钧(普通账户)");
            user1->show();
            user1->setAttribute(Qt::WA_DeleteOnClose);}
           //错误的输入
       if(flag!=2&&flag!=4)
        {
             QMessageBox:: warning(this, "警告！", "用户名或密码输入错误");
       }
}

