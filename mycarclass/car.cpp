#include"car.h"
#include<QString>
#include<QWidget>
int position=0;
int situation=0;
car arry[50];

car::car(QString NUM,QString ID,QString COMPANY,QString TYPE,QString LKM,QString TKM,QString ROADFEE,QString OILKM,QString SPECIAL)
{
num=NUM;
id=ID;
company=COMPANY;
type=TYPE;
lkm=LKM;
tkm=TKM;
cost=NULL;
roadfee=ROADFEE;
oilkm=OILKM;
allfee=0.0;
dname="无";
special=SPECIAL;
oil=10.0;
}

car::car()
{
    num=NULL;
    id=NULL;
    company=NULL;
    type=NULL;
    lkm=NULL;
    tkm=NULL;
    cost=NULL;
    roadfee=NULL;
    oilkm=NULL;
    allfee=0.0;
    dname="无";
    special=NULL;
oil=10.0;
}


void car::setnum(QString NUM)
{
    this->num= NUM;
}
QString car::getnum()
{
    return this->num;
}


void car::setid(QString ID)
{
    this->id=ID;
}
QString car:: getid()
{
    return this->id;
}



void car::setcompany(QString COMPANY)
{
    this->company=COMPANY;
}
QString car::getcompany()
{
    return this->company;
}



void car::settype(QString TYPE)
{
    this->type=TYPE;
}
QString car::gettype()
{
    return this->type;
}



void car::setlkm(QString LKM)
{
    this->lkm=LKM;
}
double car::getlkm()
{QString NUMBER=this->lkm;
    double result;
    result=NUMBER.toDouble();
    return result;
}
QString car::getlkmqstr()
{return this->lkm;}




void car::settkm(QString TKM)
{
    this->tkm=TKM;
}
double car::gettkm()
{QString NUMBER=this->tkm;
    double result;
    result=NUMBER.toDouble();
    return result;

}
QString car::gettkmqstr()
{
    return this->tkm;
}


void car::setcost(QString cartype)
{
    if(cartype=="小轿车")
        this->cost="1000";
    if(cartype=="大客车")
        this->cost="2000";
    if(cartype=="卡车")
        this->cost="1500";
}
void car:: setcost_2(QString lal)
{

    this->cost=lal;
}
double car:: getcost(){

    QString NUMBER=this->cost;
        double result;
        result=NUMBER.toDouble();
        return result;
}
QString car::getcostqstr()
{
    return this->cost;
}
void car::delcost()
{

    this->cost=NULL;
}

void car::setroadfee(QString ROADFEE)
{
    this->roadfee=ROADFEE;
}
double car::getroadfee()
{
    QString NUMBER=this->roadfee;
        double result;
        result=NUMBER.toDouble();
        return result;
}
QString car::getroadqstr()
{
    return this->roadfee;
}


void car::setoilkm(QString OILKM)
{
    this->oilkm=OILKM;
}
double car::getoilkm(){

    QString NUMBER=this->oilkm;
        double result;
        result=NUMBER.toDouble();
        return result;
}
QString car::getoilkmqstr()
{
    return this->oilkm;
}


void car::setallfee()
 {

         this->allfee=(this->gettkm()-this->getlkm())*this->getoilkm()*oil+this->getroadfee()+this->getcost();

 }

QString car::getallfee()
{QString result;
    this->allfee=(this->gettkm()-this->getlkm())*this->getoilkm()*oil+this->getroadfee()+this->getcost();
    result=QString::number(this->allfee);
    return result;
}
void car::delallfee()
{
    this->allfee=0.0;
}

void car::setallfee_2(QString a)
{

    double aa;
    aa=a.toDouble();
    this->allfee=aa;

}



void car::setdname(QString DNAME)
{
    this->dname=DNAME;
}
QString car::getdname()
{
    return this->dname;
}

void car::setspecial(QString SPECIAL)
{
    this->special=SPECIAL;
}
QString car::getspecial()
{
    return this->special;
}

 void car::changeoil(double mony)
{
  oil=mony;
}

