#include "search.h"
#include "ui_search.h"
#include"car.h"
#include<QMessageBox>
search::search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::search)
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

search::~search()
{
    delete ui;
}
//创建flag作为选择查询类型的判断
int searchflag=0;

//按编号
void search::on_radioButton_clicked()
{
    searchflag=1;
}

//按公司
void search::on_radioButton_2_clicked()
{
    searchflag=2;
}

//按类型
void search::on_radioButton_3_clicked()
{
    searchflag=3;
}
QString TEXT;
void search::on_lineEdit_2_textEdited(const QString &arg1)
{
    TEXT=arg1;
}

void search::on_pushButton_clicked()

{    QString title;
     title="编号   车牌号       制造公司   车辆类型    上月里程    这月里程    基本费用  养路费    耗油量     总费用     驾驶员    特征值";
       //   001   苏AQA291     比亚迪    小轿车   123456    123456    1000   10      0.08    1234.6    张三溜    12.4
    ui->listWidget->clear();
    QListWidgetItem *item=new QListWidgetItem(title);
                 ui->listWidget->addItem(item);

    if(searchflag==1)
     {int i=0;int check=0;
         for(i=0;i<position;i++)
         {
             if(arry[i].getnum()==TEXT)
             {check++;
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
         if(i==position&&check==0)
         { QMessageBox:: warning(this, "警告！", "该编号不存在！");}
     }
    if(searchflag==2)
     {int i=0;int check=0;//check检查是否进入输出环节，check=0表示不符合条件
         for(i=0;i<position;i++)
         {
             if(arry[i].getcompany()==TEXT)
             {check++;
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
         if(i==position&&check==0)
         { QMessageBox:: warning(this, "警告！", "该车辆制造公司不存在！");}

   }
    if(searchflag==3)
     {int i=0;int check=0;
        if(TEXT.length()>0&&TEXT!="卡车"&&TEXT!="小轿车"&&TEXT!="大客车")
        {
            QMessageBox:: warning(this, "警告！", "请输入正确的车辆类型！");}
        else{
         for(i=0;i<position;i++)
         {
             if(arry[i].gettype()==TEXT)
             {check++;
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
         if(i==position&&check==0)
         { QMessageBox:: warning(this, "警告！", "该类型下没有车辆！");}

   }
}

}
void search::on_pushButton_2_clicked()
{
    this->close();
}










