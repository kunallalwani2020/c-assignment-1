#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Shop
{
private:
    string nameOfShop;
    string nameOfProp;
    string status;
    string businessType[200]={" Empty "," Empty "," Empty  "," Empty "," Empty "};

    int arraylength=1;
    //char businessTypeadd[200]={"NO Bussiness Type Added","NO Bussiness Type Added","NO Bussiness Type Added","NO Bussiness Type Added","NO Bussiness Type Added"};


public:
    void setShopName();
    string getShopName();

    void setPropName();
    string getPropName();

    void setStatus();
    string getStatus();
    void shopstatus();

    void setBusType();
    string getBusType();


    void chngProp();
    void addBusType();
    void subBusType();
    void deductBusType();
    void arraylen();
    void summaryshop();

};


