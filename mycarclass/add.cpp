#include "add.h"
#include "ui_add.h"
#include"car.h"
#include<QMessageBox>
add::add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add)
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

add::~add()
{
    delete ui;
}
//检查数，check相加=9时才能添加成功
int check1=0,check2=0,check3=0,check4=0,check5=0,check6=0,check7=0,check8=0,check9=0;

//车辆编号
void add::on_lineEdit_3_textEdited(const QString &arg1)
{
    int i=0;
        for(i=0;i<position;i++)
        {
            if(arry[i].getnum()==arg1&&arg1.length()>0)
            {QMessageBox:: warning(this, "警告！", "车辆编号已存在！");
            break;
            }

        }
        if(i==position)
        {
            arry[position].setnum(arg1);
            check1=1;

        }
}

//车牌号
void add::on_lineEdit_7_textEdited(const QString &arg1)
{
    int i=0;

        for(i=0;i<position;i++)
        {
            if(arry[i].getid()==arg1)
            {QMessageBox:: warning(this, "警告！", "车牌号已存在！");
            break;
            }

        }
        if(i==position)
        {
            arry[position].setid(arg1);
            check3=1;

        }
}

//制造公司
void add::on_lineEdit_8_textEdited(const QString &arg1)
{
      arry[position].setcompany(arg1);
      check2=1;
}

//车辆类型和基本维护费用
void add::on_lineEdit_9_textEdited(const QString &arg1)
{
    if(arg1=="小轿车")
     {  arry[position].settype(arg1);arry[position].setcost(arg1);check4=1;}
    if(arg1=="大客车")
       {arry[position].settype(arg1);arry[position].setcost(arg1);check4=1;}
    if(arg1=="卡车")
       { arry[position].settype(arg1);arry[position].setcost(arg1);check4=1;}
    if(arg1.length()>0&&arg1!="卡车"&&arg1!="小轿车"&&arg1!="大客车")
    {check4=0;
        QMessageBox:: warning(this, "警告！", "请输入正确的车辆类型！");}
}

//上月公里数
void add::on_lineEdit_11_textEdited(const QString &arg1)
{

    arry[position].setlkm(arg1);
    check5=1;
}

//现在公里数
void add::on_lineEdit_13_textEdited(const QString &arg1)
{

    arry[position].settkm(arg1);
    check6=1;
}

//每公里耗油量
void add::on_lineEdit_15_textEdited(const QString &arg1)
{

    arry[position].setoilkm(arg1);
    check7=1;
}

//养路费
void add::on_lineEdit_17_textEdited(const QString &arg1)
{

    arry[position].setroadfee(arg1);
    check8=1;
}

//厢数



void add::on_lineEdit_19_textEdited(const QString &arg1)
{
    if(arry[position].gettype()=="小轿车")
        {
        arry[position].setspecial(arg1);
        check9=1;}
        if(arry[position].gettype()!="小轿车"&&arg1.length()>0)
       QMessageBox:: warning(this, "警告！", "错误的输入！");
}

//最大载客量
void add::on_lineEdit_21_textEdited(const QString &arg1)
{
    if(arry[position].gettype()=="大客车")
    {
    arry[position].setspecial(arg1);
    check9=1;}
    if(arry[position].gettype()!="大客车"&&arg1.length()>0)
   QMessageBox:: warning(this, "警告！", "错误的输入！");

}


void add::on_lineEdit_23_textEdited(const QString &arg1)
{
    if(arry[position].gettype()=="卡车")
        {
        arry[position].setspecial(arg1);
        check9=1;}
        if(arry[position].gettype()!="卡车"&&arg1.length()>0)
       QMessageBox:: warning(this, "警告！", "错误的输入！");
}

//按下确认键之后的判断
void add::on_right_clicked()
{
    if(check1+check2+check3+check4+check5+check6+check7+check8+check9==9)
        {
           arry[position].setallfee();

           if(arry[position].getallfee().length()<7)

           { for(;arry[position].getallfee().length()>=7;)
               {arry[position].getallfee()+=" ";}}

           position++;
        QMessageBox:: information(this, "提示！", "信息添加成功！");
        check1=0;
        check2=0;
        check3=0;
        check4=0;
        check5=0;
        check6=0;
        check7=0;
        check8=0;
        check9=0;
        this->close();}
        else
        {QMessageBox:: warning(this, "警告！", "信息填写错误或不完整！");


        }

}


void add::on_pushButton_2_clicked()
{
    check1=0;
         check2=0;
         check3=0;
         check4=0;
         check5=0;
         check6=0;
         check7=0;
         check8=0;
         check9=0;


            arry[position].setnum(NULL);
            arry[position].setid(NULL);
            arry[position].setcompany(NULL);
            arry[position].settype(NULL);
            arry[position].setlkm(NULL);
            arry[position].settkm(NULL);

            arry[position].setroadfee(NULL);
            arry[position].setoilkm(NULL);

            arry[position].setspecial(NULL);
        this->close();
}

