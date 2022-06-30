#ifndef CAR_H
#define CAR_H
#pragma once
#include<QString>
#include<iostream>
#include<QWidget>
class car
{
    QString num;//编号
    QString id;//车牌
    QString company;//厂商名称
    QString type;//车辆类型 2：小汽车  3：卡车  1：大客车
   QString lkm;//上月车辆行驶里程
   QString tkm;//这月车辆行驶里程
    QString cost;//基本养护费用
   QString roadfee;//养路费用
    QString oilkm;//耗油量
   double allfee;//车辆整体费用
    QString dname;//驾驶员姓名
   QString special;//不同车型的特殊数据，
                  //小汽车为厢数，大客车为最大载客量，卡车为载重量
 double oil;

public:
    car(QString NUM,QString ID,QString COMPANY,QString TYPE,QString LKM,QString TKM,QString ROADFEE,QString OILKM,QString SPECIAL);
   car();
    ~car(){}



    void setnum(QString NUM);
    QString getnum();

    void setid(QString ID);
    QString getid();

    void setcompany(QString COMPANY);
    QString getcompany();

    void settype(QString TYPE);
    QString gettype();

    void setlkm(QString LKM);
    double getlkm();
   QString getlkmqstr();

   void settkm(QString TKM);
   double gettkm();
   QString gettkmqstr();

   void setcost(QString cartype);
   void setcost_2(QString lal);
    double getcost();
    void delcost();
   QString getcostqstr();

   void setroadfee(QString ROADFEE);
    double getroadfee();
    QString getroadqstr();

    void setoilkm(QString OILKM);
    double getoilkm();
   QString getoilkmqstr();

   void setallfee();
   void delallfee();
    QString getallfee();
    void setallfee_2(QString a);

    void setdname(QString DNAME);
    QString getdname();

    void setspecial(QString SPECIAL);
    QString getspecial();

void changeoil(double mony);
};

 extern int position;
extern int situation;//指针，指示目前锁定的对象（在修改信息的时候使用）
 extern car arry[];

#endif // CAR_H
