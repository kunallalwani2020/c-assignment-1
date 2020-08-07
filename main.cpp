#include<iostream>
#include"Building.h"
#include<string>
#include<cstring>
#include<stdlib.h>
#include"Shop.h"
#include"House.h"
void houseobject();
void shopobject();
void buildingobject();
void mainfunction();
using namespace std;

int main()
{   system("Color 7c");
	mainfunction();
}

void mainfunction()
{    
    system("CLS");
    cout<<"************************************************************************************************************************";
    cout<<"\t\t\tWelcome To CSC 104 – OBJECT-ORIENTED PROGRAMMING ASSIGNMENT 01"<<endl;
    cout<<"************************************************************************************************************************";
    cout<<endl;
    cout<<"\tStudent Name : Muhammad Azhar"<<endl;
    cout<<"\tID : CSC-19F-069"<<endl;
    cout<<"\tSection : 2B"<<endl<<endl;

    cout<<"\tSelect An Option To Continue"<<endl;
    cout<<"\tThere are Three Class Avalable To Work On"<<endl<<endl;
    cout<<"\t1. Building"<<endl;
    cout<<"\t2. Shop"<<endl;
    cout<<"\t3. House"<<endl;
    cout<<"\tEnter the Class Number Or Name To Continue : ";
    char inputa;
    cin>>inputa;
    if (inputa == '1')
    {
        buildingobject();
        
    }
    else if (inputa == '2')
    {
        shopobject();
        
    }
    else if (inputa == '3' )
    {
        houseobject();
        
    }
}
void buildingobject()
{
	system("CLS");
	cout<<"************************************************************************************************************************";
    cout<<"\t\t\tWelcome  TO Building Class"<<endl;
    cout<<"************************************************************************************************************************";
    cout<<endl;
    Building x;
    int storeys;
    string clr;
    string location;

    system("Color 5F");
    x.setHeight();
    x.getHeight();

    x.setCity();
    //x.getCity(); use in summary x.BuildingSummary(); I coment this to show geter and setter are made

    //x.getFloors(); use in summary x.BuildingSummary(); I coment this to show geter and setter are made

    x.setRooms(storeys);
    //x.getRooms();  use in summary x.BuildingSummary(); I coment this to show geter and setter are made

    x.paintBuilding(clr);
    x.paintFloor();
    //x.showPaintedFloors(); use in summary x.BuildingSummary(); I coment this to show geter and setter are made
    x.addRooms();
    //x.showFloorRooms(); use in summary x.BuildingSummary(); I coment this to show geter and setter are made
    x.setMergeRooms();
    //x.showMergeRooms(); use in summary x.BuildingSummary(); I coment this to show geter and setter are made
    x.BuildingSummary();
    cout<<endl<<endl;
    cout<<"#######################################################################################################################";
    cout<<"#######################################################################################################################";
    cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
    cout<<"Enter : ";
    int userii;
    cin>>userii;
    if (userii == 1)
    {
    	while(true)
    	{
    		break;
		}
        
    }
    else
        {
        mainfunction();
        }
}
void shopobject()

{
	system("CLS");
	system("Color 5F");
	system("Color 6a");
	cout<<"************************************************************************************************************************";
    cout<<"\t\t\tWelcome  TO Shop Class"<<endl;
    cout<<"************************************************************************************************************************";
    cout<<endl;
    system("Color 7c");

    Shop a;
    a.setShopName();
    cout<<a.getShopName();

    a.setPropName();
    cout<<a.getPropName();

    a.setStatus();
    cout<<a.getStatus();

    a.setBusType();
    cout<<a.getBusType();

    a.shopstatus();

    a.chngProp();
    a.arraylen();
    a.addBusType();
    a.deductBusType();

    a.summaryshop();
    cout<<endl<<endl;
    cout<<"#######################################################################################################################";
    cout<<"#######################################################################################################################";
    cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
    cout<<"Enter : ";
    int useriii;
    cin>>useriii;
    if (useriii == 1)
    {
    	while(true)
    	{
    		break;
		}
        
    }
    else
        {
        mainfunction();
        }
}
void houseobject()
{
	system("CLS");
	system("Color 5F");
	cout<<"************************************************************************************************************************";
    cout<<"\t\t\tWelcome  TO House Class"<<endl;
    cout<<"************************************************************************************************************************";
    cout<<endl;
    House h;
    h.setownwername();
    h.setRooms();
    h.setaddRooms();


    h.getaddRooms();
    h.getownwername();
    h.Housesummary();
    cout<<endl<<endl;
    cout<<"#######################################################################################################################";
    cout<<"#######################################################################################################################";
    cout<<endl<<"\t\t\tEnter \'0\' to go to Main Menu & \'1\' to Exits /"<<endl;
    cout<<"Enter : ";
    int useriio;
    cin>>useriio;
    if (useriio == 1)
    {
    	while(true)
    	{
    		break;
		}
        
    }
	
    else
        {
        mainfunction();
        }


}



