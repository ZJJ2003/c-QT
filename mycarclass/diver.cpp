#include "diver.h"
#include "ui_diver.h"
#include"car.h"
#include<QMessageBox>
diver::diver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::diver)
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

diver::~diver()
{
    delete ui;
}





void diver::on_pushButton_clicked()
{
    this->close();
}

//定义检查数判断是添加还是删除
int dflag=0;
//添加
void diver::on_radioButton_toggled(bool checked)
        {
    if(checked==1)
        dflag=2;

        }

//删除
void diver::on_radioButton_2_toggled(bool checked)
{
    if(checked==1)
        dflag=2;

}


void diver::on_radioButton_3_toggled(bool checked)
{
    if(checked==1)
        dflag=3;

}



void diver::on_pushButton_2_clicked()
{
   if(dflag==0)QMessageBox::warning(this,"警告！","请选择操作类型！");
    if(dflag==1)
    {int check=0;int aa=0;//用来检查是否进入输入操作
    QString NUM,DNAME;
    NUM=ui->numadd->text();
    DNAME=ui->nameadd->text();
    if(NUM.length()>0&&DNAME.length()>0)
        check=1;
     else {
              QMessageBox::warning(this,"警告！","信息填写不完整！");
           }
    if(check==1)
    {int i=0;
        for(i=0;i<position;i++)
        {
            if(arry[i].getnum()==NUM)
            {
              if(arry[i].getdname()!="无")
                  {QMessageBox::warning(this,"警告！","该车辆已拥有驾驶员！");
                   break;
              }
              else
              {
                aa++;
                arry[i].setdname(DNAME);

              QMessageBox::information(this,"提示！","驾驶员绑定成功！");
              this->close();
              break;
              }

            }

        }
        if(i==position&&aa==0)
            QMessageBox::warning(this,"警告！","该编号不存在！");
    }
    }
    if(dflag==2)
    {
        int check=0;int aa=0;
        QString NUM,DNAME;
        NUM=ui->numdel->text();
        DNAME=ui->namedel->text();
        if(NUM.length()>0&&DNAME.length()>0)
            check=1;
         else {
                  QMessageBox::warning(this,"警告！","信息填写不完整！");
               }
        if(check==1)//定义jianyan数，用来判断是编号错误还是姓名错误
        {int i=0;  int jianyan=0;
            for(i=0;i<position;i++)
            {
                if(arry[i].getnum()==NUM&&arry[i].getdname()==DNAME)
                {arry[i].setdname("无");
                    aa++;
                    QMessageBox::information(this,"提示！","驾驶员删除成功！");
                    this->close();
                    break;}
                if(arry[i].getnum()==NUM&&arry[i].getdname()!=DNAME)
                    jianyan=1;
                if(arry[i].getnum()!=NUM&&arry[i].getdname()==DNAME)
                    jianyan=2;
                if(jianyan==1)
                  {  QMessageBox ::warning(this,"警告！","驾驶员姓名错误，无法删除");
                break;
                }
                if(jianyan==2)
                   { QMessageBox::warning(this,"警告！","车辆编号错误，无法删除！");
                break;
                }
            }
            if(i==position&&aa==0)
          QMessageBox::warning(this,"警告！","该编号不存在！");


    }
}


    if(dflag==3)
    {
        int check=0;int aa=0;
        QString NUM,DNAME;
        NUM=ui->lineEdit_5->text();
        DNAME=ui->lineEdit_9->text();
        if(NUM.length()>0&&DNAME.length()>0)
            check=1;
         else {
                  QMessageBox::warning(this,"警告！","信息填写不完整！");
               }
        if(check==1)//定义jianyan数，用来判断是编号错误还是姓名错误
        {int i=0;  int jianyan=0;
            for(i=0;i<position;i++)
            {
                if(arry[i].getnum()==NUM&&arry[i].getdname()==DNAME)
                {if(arry[i].gettype()=="小轿车")
                        {QString Mony;double basic,All;
                        basic=3000;
                        All=basic+(arry[i].gettkm()-arry[i].getlkm());
                        Mony=QString::number(All,10,2);
                        ui->mony->setText("您的工资为："+Mony);
                    }
                    if(arry[i].gettype()=="大客车")
                                            {QString Mony;double basic,All;
                                            basic=3000;
                                            All=basic+(arry[i].gettkm()-arry[i].getlkm())*3;
                                            Mony=QString::number(All,10,2);
                                            ui->mony->setText("您的工资为："+Mony);
                                        }
                    if(arry[i].gettype()=="卡车")
                                            {QString Mony;double basic,All;
                                            basic=3000;
                                            All=basic+(arry[i].gettkm()-arry[i].getlkm())*2;
                                            Mony=QString::number(All,10,2);
                                            ui->mony->setText("您的工资为："+Mony);
                                        }
                    break;}
                if(arry[i].getnum()==NUM&&arry[i].getdname()!=DNAME)
                    jianyan=1;
                if(arry[i].getnum()!=NUM&&arry[i].getdname()==DNAME)
                    jianyan=2;
                if(jianyan==1)
                  {  QMessageBox ::warning(this,"警告！","驾驶员姓名错误!");
                break;
                }
                if(jianyan==2)
                   { QMessageBox::warning(this,"警告！","车辆编号错误！");
                break;
                }
            }
            if(i==position&&aa==0)
          QMessageBox::warning(this,"警告！","该编号不存在！");


    }
    }
}









