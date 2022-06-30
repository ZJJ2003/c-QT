#include "database.h"
#include "ui_database.h"
#include"car.h"
database::database(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::database)
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

database::~database()
{
    delete ui;
}

void database::on_pushButton_clicked()
{
    this->close();
}


void database::on_pushButton_2_clicked()
{

       int c1 = 0, c2 = 0, c3 = 0,top=0;
       for(int j=0;j<position;j++)
       if(arry[j].gettype()=="小轿车")c1++;
       else if(arry[j].gettype()=="大客车")c2++;      //统计小轿车的数量
       else if(arry[j].gettype()=="卡车")c3++;
       top=c1+c2+c3;
       QString cc1,cc2,cc3,cc4;
       cc1=QString::number(c1);
       cc2=QString::number(c2);
       cc3=QString::number(c3);
       cc4=QString::number(top);
       ui->allnum->setText("总数："+cc4);
       ui->carnum->setText("小轿车:"+cc1);
       ui->busnum->setText("大客车:"+cc2);
       ui->trucknum->setText("卡车:"+cc3);//统计+显示



       QString title;
            title="编号   车牌号       制造公司   车辆类型    上月里程    这月里程    基本费用  养路费    耗油量     总费用     驾驶员    特征值";
              //   001   苏AQA291     比亚迪    小轿车   123456    123456    1000   10      0.08    1234.6    张三溜    12.4
           ui->listWidget->clear();
           QListWidgetItem *item=new QListWidgetItem(title);
                        ui->listWidget->addItem(item);

       for(int i=0;i<position;i++)
       {


               QString all=NULL;
               all+=arry[i].getnum()+"   ";//三个空格
               all+=arry[i].getid()+"      ";

                     if(arry[i].getcompany().length()<4)
                     {  QString result;   result=arry[i].getcompany();
                         for(;result.length()>=4;)
                             result += " ";
                         all+=result+"        ";
                     }
                     else
                   all+=arry[i].getcompany()+"        ";

                     if(arry[i].gettype()=="卡车")
                   all+=arry[i].gettype()+"          ";//10个空格
               else
               all+=arry[i].gettype()+"        ";//6


                   if(arry[i].getlkmqstr().length()<7)
                   {QString result;   result=arry[i].getlkmqstr();
                       for(;result.length()>=7;)
                           result += " ";
                       all+=result+"          ";
                   }
                   else
                       all+=arry[i].getlkmqstr()+"          ";

                   if(arry[i].gettkmqstr().length()<7)
                   {QString result;   result=arry[i].gettkmqstr();
                       for(;result.length()>=7;)
                           result += " ";
                       all+=result+"          ";
                   }
                   else
                       all+=arry[i].gettkmqstr()+"          ";

               all+=arry[i].getcostqstr()+"      ";

               if(arry[i].getroadqstr().length()<5)
               {QString result;   result=arry[i].getroadqstr();
                   for(;result.length()>=5;)
                       result += " ";
                   all+=result+"            ";
               }
               else
                   all+=arry[i].getroadqstr()+"            ";

               if(arry[i].getoilkmqstr().length()<5)
               {QString result;   result=arry[i].getoilkmqstr();
                   for(;result.length()>=5;)
                       result += " ";
                   all+=result+"      ";
               }
               else
                   all+=arry[i].getoilkmqstr()+"      ";

               all+=arry[i].getallfee()+"           ";

               if(arry[i].getdname().length()<4)
               {for(;arry[i].getdname().length()>=4;)
                  arry[i].getdname()+=" ";
                   all+=arry[i].getdname()+"      ";
               }
               else
               all+=arry[i].getdname()+"      ";

               if(arry[i].getspecial().length()<5)
               {QString result;   result=arry[i].getspecial();
                   for(;result.length()>=5;)
                       result += " ";
                   all+=result+"      ";
               }
               else
                   all+=arry[i].getspecial();

               QListWidgetItem *item=new QListWidgetItem(all);
               ui->listWidget->addItem(item);

       }


}

