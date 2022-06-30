#include "admin.h"
#include "car.h"
#include "ui_admin.h"
#include<QMessageBox>
#include<QString>
admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
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

admin::~admin()
{
    delete ui;
}

void admin::on_search_clicked()
{    search*search2=new search;


     search2->setFixedSize(600,400);
     search2->setWindowTitle("查询界面");
     search2->show();
     search2->setAttribute(Qt::WA_DeleteOnClose);

}


void admin::on_add_clicked()
{if(position==50)
    QMessageBox::warning(this,"警告！","车辆信息库已满，不能添加新数据！");
   else
    {add *add2=new add;
    add2->setFixedSize(600,400);
   add2->setWindowTitle("信息添加界面");
    add2->show();
    add2->setAttribute(Qt::WA_DeleteOnClose);}
}


void admin::on_change_clicked()
{
    change2*change12=new change2;


            change12->setFixedSize(600,400);
            change12->setWindowTitle("编辑信息界面");
            change12->show();
           change12->setAttribute(Qt::WA_DeleteOnClose);
}


void admin::on_delete_2_clicked()
{if(position==0)
        QMessageBox::warning(this,"警告！","车辆信息库为空！");
       else
   { del *del1=new del;
    del1->setFixedSize(600,400);
   del1->setWindowTitle("删除信息界面");
    del1->show();
    del1->setAttribute(Qt::WA_DeleteOnClose);}
}


void admin::on_diver_clicked()
{
    diver *diver1=new diver;
    diver1->setFixedSize(600,400);
   diver1->setWindowTitle("驾驶员操作界面");
    diver1->show();
    diver1->setAttribute(Qt::WA_DeleteOnClose);
}


void admin::on_pushButton_clicked()
{
    database*database2=new database;
    database2->setFixedSize(600,400);
   database2->setWindowTitle("数据库查看界面");
    database2->show();
    database2->setAttribute(Qt::WA_DeleteOnClose);
}


void admin::on_pushButton_2_clicked()
{
    outinput *outinput1=new outinput;
    outinput1->setFixedSize(600,400);
   outinput1->setWindowTitle("导入和导出界面");
    outinput1->show();
    outinput1->setAttribute(Qt::WA_DeleteOnClose);
}


void admin::on_pushButton_3_clicked()
{QString oilj;
    oilj=ui->lineEdit->text();
    if(position==0)QMessageBox::warning(this,"警告！","数据库中没有车辆，不能设置油价！");
    else{
    if(oilj.length()==0)
        QMessageBox::warning(this,"警告！","请输入油价！");
    else{
    double OIL;
    OIL=oilj.toDouble();
    for(int i=0;i<position;i++)
    {
        arry[i].changeoil(OIL);
    }
   QMessageBox::information(this,"提示！","油价设置成功！");
    }
}

}

