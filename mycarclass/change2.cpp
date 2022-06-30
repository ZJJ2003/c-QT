#include "change2.h"
#include "ui_change2.h"
#include"car.h"
#include<QMessageBox>

change2::change2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change2)
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

change2::~change2()
{
    delete ui;
}

void change2::on_pushButton_2_clicked()
{
    this->close();
}
int check=0;//检查数，用来检测输入的编号是否正确

void change2::on_pushButton_3_clicked()
   {
    int i=0;

    for(i=0;i<position;i++)
    {
    if(arry[i].getnum()==ui->lineEdit_5->text())
    {situation=i;check=1;
        ui->id->setText(arry[i].getid());
        ui->company->setText(arry[i].getcompany());
        ui->type->setText(arry[i].gettype());
        ui->lkm->setText(arry[i].getlkmqstr());
        ui->tkm->setText(arry[i].gettkmqstr());
        ui->roadfee->setText(arry[i].getroadqstr());
        ui->oilkm->setText(arry[i].getoilkmqstr());
        if(arry[i].gettype()=="小轿车")
            ui->carspecial->setText(arry[i].getspecial());
        if(arry[i].gettype()=="大客车")
            ui->busspecial->setText(arry[i].getspecial());
        if(arry[i].gettype()=="卡车")
            ui->truckspecial->setText(arry[i].getspecial());

        break;}
    }
    if(i==position&&check==0)
QMessageBox::warning(this,"警告！","该编号不存在！");
 }


//检查数检查用户修改了哪一条信息
int point1=0,point2=0,point3=0,point4=0,point5=0,point6=0,point7=0,point8=0,point9=0;
//判断车辆类型输入是否正确
void change2::on_type_textEdited(const QString &arg1)
{




        if(arg1.length()>0&&
    (arg1=="小轿车"||arg1=="大客车"||arg1=="卡车"))
        point4=1;
    if(arg1.length()>0&&(arg1!="小轿车"&&arg1!="大客车"&&arg1!="卡车"))
        QMessageBox::warning(this,"警告！","请输入正确的车型！");
}

//判断编号唯一性
void change2::on_num_textEdited(const QString &arg1)
{int i=0;
    if(arg1.length()>0)
    {
        for(i=0;i<position;i++)
        {
            if(arry[i].getnum()==arg1)
                QMessageBox::warning(this,"警告！","该编号已存在！");
        }
        if(i==position&&arg1.length()>0)
            point1=1;
    }
}
void change2::on_pushButton_clicked()
{

    if(ui->id->text().length()>0)
        point2=1;
    if(ui->company->text().length()>0)
        point3=1;


    if(ui->lkm->text().length()>0)
        point5=1;
    if(ui->tkm->text().length()>0)
        point6=1;
    if(ui->oilkm->text().length()>0)
        point7=1;
    if(ui->roadfee->text().length()>0)
        point8=1;
     if(ui->carspecial->text().length()>0||ui->busspecial->text().length()>0||ui->truckspecial->text().length()>0)
         point9=1;

     //写入

     if(point1==1)
         arry[situation].setnum(ui->num->text());
     if(point2==1)
         arry[situation].setid(ui->id->text());
     if(point3==1)
         arry[situation].setcompany(ui->company->text());
     if(point4==1)
         arry[situation].settype(ui->type->text());
     if(point5==1)
         arry[situation].setlkm(ui->lkm->text());
     if(point6==1)
         arry[situation].settkm(ui->tkm->text());
     if(point7==1)
         arry[situation].setoilkm(ui->oilkm->text());
     if(point8==1)
         arry[situation].setroadfee(ui->roadfee->text());
     if(
             (point9==1&&ui->type->text()=="小轿车")||(point9==1&&arry[situation].gettype()=="小轿车")
         )
         arry[situation].setspecial(ui->carspecial->text());
     if((point9==1&&ui->type->text()=="大客车")||(point9==1&&arry[situation].gettype()=="大客车"))
         arry[situation].setspecial(ui->busspecial->text());
     if((point9==1&&ui->type->text()=="卡车")||(point9==1&&arry[situation].gettype()=="卡车"))
         arry[situation].setspecial(ui->truckspecial->text());


     if(point1==1||point2==1||point3==1||point4==1||point5==1||point6==1||point7==1||point8==1||point9==1)
     {QMessageBox::information(this,"提示!","信息修改成功！");
         this->close();
     }
     else
         QMessageBox::warning(this,"警告！","未输入修改信息！");
}







