#include<iostream>
#include"Shop.h"
#include<cstring>
#include<string>
using namespace std;

void Shop::setShopName()
{
    cout<<endl<<"\t\t\tEnter Shop Name:   ";
    cin>>nameOfShop;
}

string Shop::getShopName()
{
    return nameOfShop;
}

void Shop::setPropName()
{
    cout<<endl<<"\t\t\tEnter Proprieter's Name:   ";
    cin>>nameOfProp;
}

string Shop::getPropName()
{
    return nameOfProp;
}

void Shop::setStatus()
{
    cout<<endl<<"\t\t\tEnter Status:   ";
    cin>>status;
}

string Shop::getStatus()
{
    return status;
}

void Shop::setBusType()
{
    cout<<endl<<"\t\t\tEnter Type of Business:   ";
    cin>>businessType[0];
}

string Shop::getBusType()
{
    return businessType[0];
}

void Shop::shopstatus()
{
    cout<<endl<<"\t\t\tThe Shop is "<<status<<" now.";
}

void Shop::chngProp()
{
    char name;
    cout<<endl<<"\t\t\tDo you want to change proprieter's name? If yes, then type 'Y' otherwise type 'N'.";
    cin>>name;
    if(name=='Y' || name == 'y')
    {
        cout<<endl<<"\t\t\tPlease type new proprieter's name: ";
        cin>>nameOfProp;
    }

}

void Shop::addBusType()
{
    int a=1,bb=1;
    char userIn;
    cout<<endl<<"If you want to add business types ( More Bussiness Added Limit is 4), please enter 'Y' otherwise enter 'N': ";
    cin>>userIn;
    while(userIn == 'Y' || userIn == 'y')
    {
        cout<<endl<<"\t\t\tEnter business type which you want to add: ";
        cin>>businessType[a];
        arraylength++;
        //getline(cin, businessType[a]);
        a++;
        bb++;
        cout<<endl<<"\t\t\tIf you want to add More business types, please enter 'Y' otherwise enter 'N': ";
        cin>>userIn;
        if(userIn == 'n' || userIn == 'N')
             {
                while(true)
                    {
                        break;
                    }

             }
        if (bb==5)
        {
            cout<<endl<<"\t\t\tBussiness Added Limit Exceeds";
            break;
        }
    }

}
void Shop::deductBusType()
{
    int a,e=0;
    char userIn;
    int num_chars = 0;
	//int num_strings = sizeof(businessType)/sizeof(businessType[0]);
	/*for (int i = 0; i < num_strings; i++)
	 {
     num_chars += businessType[i].size();
    e++;
	}*/
	cout<<endl<<"\t\t\tThe Available Bussiness Name and Number Now"<<endl;
	for (int b=0;b<=5;b++)
        {
            cout<<endl<<"Bussiness Name : "<<businessType[b]<<" Number : "<<b+1;
        }
    cout<<endl<<"\t\t\tIf you want to Deduct any Bussiness from Above List, please enter 'Y' otherwise enter 'N': ";
    cin>>userIn;
    while(userIn == 'Y' || userIn == 'y')
    {
        cout<<endl<<"\t\t\tEnter business type /'Number/' From Above List which you want to Deduct: ";
        cin>>a;
        a=a-1;
        for (int b=0;b<=5;b++)
        {
            businessType[a]=businessType[a+1];
            a++;
        }
        cout<<endl<<"\t\t\tIf you want to Deduct any Bussiness from Above List, please enter 'Y' otherwise enter 'N': ";
        cin>>userIn;
        if(userIn == 'n' || userIn == 'N')
             {
                while(true)
                    {
                        break;
                    }

             }
}
}
void Shop::arraylen()
{
    cout<<endl<<"\t\t\tThe length of array now is :"<<arraylength;
}

void Shop::summaryshop()
{

    cout<<endl<<endl;
    cout<<"#######################################################################################################################";

    cout<<endl<<"\t\t\tThe Name of  Shop : "<<nameOfShop;
    cout<<endl<<"T\t\t\the Name of the proprietor : "<<nameOfProp;
    cout<<endl<<"\t\t\tThe Shop is "<<status<<" now.";
    cout<<endl<<endl<<"The Available Bussiness Type List !(Ignore  no Business Added)"<<endl;

    for (int b=0;b<=5;b++)
        {
            cout<<endl<<"\t\t\tBussiness Name : "<<businessType[b]<<" Number : "<<b+1;
        }
    cout<<endl;
    cout<<"#######################################################################################################################";

}



