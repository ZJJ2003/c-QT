#include "del.h"
#include "car.h"
#include "ui_del.h"
#include<QMessageBox>
del::del(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::del)
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

del::~del()
{
    delete ui;
}

void del::on_pushButton_3_clicked()
{
    this->close();
}

//检查输入的编号是否存在，存在为1
int checknum=0;
void del::on_pushButton_clicked()
{
    QString NUM;
        NUM=ui->lineEdit_3->text();
        if(NUM.length()==0)QMessageBox::warning(this,"警告！","请输入编号！");
        else{
        int i=0;
        for(i=0;i<position;i++)
        {
            if(arry[i].getnum()==NUM)
            {checknum=1;
                situation=i;
                QMessageBox::information(this,"提示！","编号已确认！");
                break;
            }

        }
        if(i==position&&checknum==0)
            QMessageBox::warning(this,"警告！","该编号不存在！");}
}


void del::on_pushButton_2_clicked()
{
    if(checknum==1)
        {
            for(int j=situation+1;j<position;j++)
            {
                arry[situation].setnum(arry[j].getnum());
                arry[situation].setid(arry[j].getid());
                arry[situation].setcompany(arry[j].getcompany());
               arry[situation].settype(arry[j].gettype());
                arry[situation].setlkm(arry[j].getlkmqstr());
                arry[situation].settkm(arry[j].gettkmqstr());
                arry[situation].setoilkm(arry[j].getoilkmqstr());
                arry[situation].setcost(arry[j].gettype());
                arry[situation].setroadfee(arry[j].getroadqstr());
                arry[situation].setallfee();
                arry[situation].setdname(arry[j].getdname());
                arry[situation].setspecial(arry[j].getspecial());
            }

            arry[position-1].setnum(NULL);
            arry[position-1].setid(NULL);
            arry[position-1].setcompany(NULL);
            arry[position-1].settype(NULL);
            arry[position-1].setlkm(NULL);
            arry[position-1].settkm(NULL);
            arry[position-1].delcost();
            arry[position-1].setroadfee(NULL);
            arry[position-1].setoilkm(NULL);
            arry[position-1].delallfee();
            arry[position-1].setdname("无");
            arry[position-1].setspecial(NULL);
         checknum=0;
            QMessageBox::information(this,"提示！","信息删除成功！");
             this->close();
             }
        else
            QMessageBox::warning(this,"警告！","请先确认编号！");
}

