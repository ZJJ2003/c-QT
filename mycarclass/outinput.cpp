#include "outinput.h"
#include "ui_outinput.h"
#include"car.h"
#include<QMessageBox>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QList>
outinput::outinput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::outinput)
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

outinput::~outinput()
{
    delete ui;
}
//检查数，1为导入，2为导出
int in_or_out=0;

void outinput::on_input_toggled(bool checked)
{
    if(checked==1)
        in_or_out=1;
}


void outinput::on_output_toggled(bool checked)
{
    if(checked==1)
        in_or_out=2;
}

//检查数，判断是否选择了文件
int ck=0; QString fname1,fname2;
void outinput::on_infile_clicked()
{

    fname1=QFileDialog::getOpenFileName(this,"选择导入文件！","C:");
       //判断是否选择了文件
    if(fname1.length()>0)
       { ck=1;
             ui->innname->setText(fname1);}
}


void outinput::on_outfile_clicked()
{

    fname2=QFileDialog::getOpenFileName(this,"选择导出文件！","C:");
       //判断是否选择了文件
    if(fname2.length()>0)
       { ck=2;
    ui->outname->setText(fname2);}
}


void outinput::on_pushButton_clicked()
{
    if(in_or_out==1&&ck==1){

        QFile file_1(fname1);
               if(file_1.open(QIODevice::ReadOnly|QIODevice::Text))
               {
                   QTextStream textstream(&file_1);
                   textstream.seek(0);
                   int x=1;
                 goon:  while(!textstream.atEnd())
                   {   if(x==1)
                       {
                       QString str1;
                       textstream>>str1;
                       arry[position].setnum(str1);
                       x=2;
                       goto goon;
                       }
                       if(x==2)
                                              {
                                              QString str2;
                                              textstream>>str2;
                                              arry[position].setid(str2);
                                              x=3;
                                              goto goon;
                                              }
                       if(x==3)
                                              {
                                              QString str3;
                                              textstream>>str3;
                                              arry[position].setcompany(str3);
                                              x=4;
                                              goto goon;
                                              }
                       if(x==4)
                                              {
                                              QString str4;
                                              textstream>>str4;
                                              arry[position].settype(str4);
                                              x=5;
                                              goto goon;
                                              }
                       if(x==5)
                                              {
                                              QString str5;
                                              textstream>>str5;
                                              arry[position].setlkm(str5);
                                              x=6;
                                              goto goon;
                                              }
                       if(x==6)
                                              {
                                              QString str6;
                                              textstream>>str6;
                                              arry[position].settkm(str6);
                                              x=7;
                                              goto goon;
                                              }
                       if(x==7)
                                              {
                                              QString str7;
                                              textstream>>str7;
                                              arry[position].setcost_2(str7);
                                              x=8;
                                              goto goon;
                                              }
                       if(x==8)
                                              {
                                              QString str8;
                                              textstream>>str8;
                                              arry[position].setroadfee(str8);
                                              x=9;
                                              goto goon;
                                              }
                       if(x==9)
                                              {
                                              QString str9;
                                              textstream>>str9;
                                              arry[position].setoilkm(str9);
                                              x=10;
                                              goto goon;
                                              }
                       if(x==10)
                                              {
                                              QString str10;
                                              textstream>>str10;
                                              arry[position].setallfee_2(str10);
                                              x=11;
                                              goto goon;
                                              }
                       if(x==11)
                                              {
                                              QString str11;
                                              textstream>>str11;
                                              arry[position].setdname(str11);
                                              x=12;
                                              goto goon;
                                              }
                       if(x==12)
                                              {
                                              QString str12;
                                              textstream>>str12;
                                              arry[position].setspecial(str12);
                                              x=1;
                                              position++;
                                              if(position==50)break;
                                              goto goon;
                                              }

                   }
                       if(position==50)
                       {
                           QMessageBox::warning(this,"警告！","数据库已满，不能添加新信息。");

                       }


                   file_1.close(); }

               QMessageBox:: information(this, "提示！", "信息导入成功！");
               this->close();}

               if(in_or_out==2||ck==2)
               {
                   QFile file(fname2);
                   if(file.open(QIODevice::WriteOnly|QIODevice::Text))
                  { QTextStream out(&file);
                       out<<"编号"<<"   "<<"车牌号"<<"       "<<"制造公司"<<"   "<<"车型"<<"   "<<"上月里程"<<"   "<<"这月里程"<<"   "<<"基本费用"<<"   "<<"养路费"<<"   "<<"耗油量"<<"   "<<"总费用"<<"   "<<"驾驶员"<<"   "<<"特征值"<<Qt::endl;
                   for(int i=0;i<position;i++)
                   {
                       out<<arry[i].getnum()<<"   "<<arry[i].getid()<<"   "<<arry[i].getcompany()<<"   ";
                       if(arry[i].gettype()=="卡车")
                       {
                           out<<arry[i].gettype()<<"       ";
                       }
                       else
                       {
                           out<<arry[i].gettype()<<"      ";
                       }
                       out<<arry[i].getlkm()<<"          "<<arry[i].gettkm()<<"         "<<arry[i].getcost()<<"         "<<arry[i].getroadfee()<<"           "<<arry[i].getoilkm()<<"        "<<arry[i].getallfee()<<"     "<<arry[i].getdname()<<"          "<<arry[i].getspecial();
                      out<<Qt::endl;
      }file.close();
           QMessageBox:: information(this, "提示！", "信息导出成功！");
            this->close();


                   }}
        if(in_or_out==0||ck==0||(in_or_out==1&&ck!=1)||(in_or_out==2&&ck!=2)||(in_or_out!=1&&ck==1)||(in_or_out!=2&&ck==2))
            QMessageBox:: warning(this, "警告！", "发生错误！");
}

