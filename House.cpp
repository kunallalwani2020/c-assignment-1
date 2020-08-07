#include<iostream>
#include<string>
#include"House.h"
using namespace std;

void House::setownwername()
{
    cout<<endl<<"Enter House Owner Name:   ";
    cin>>nameOfowner;
}

string House::getownwername()
{
    return nameOfowner;
}
void House::setRooms()
    {
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"Enter No. of Rooms inside the House:."<<endl;
        cout<<"================================="<<endl;
        cout<<endl<<"Enter : ";
        cin>>houserooms;

    }

void House::setaddRooms()
    {
        char userInput='Y';
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"Enter 'Y' if you want to add rooms & Enter 'N' if you don't:"<<endl<<endl<<endl;
        cin>>userInput;
        while(userInput == 'Y' || userInput == 'y')
        {
            cout<<endl<<"Enter Room Quantity: ";
            cin>>newRooms;
            newRooms=newRooms+houserooms;
            cout<<endl<<"If you want to add More Rooms Enter 'Y' & Enter 'N' if you don't:";
            cin>>userInput;
            if(userInput == 'n' || userInput == 'N')
             {
                while(true)
                    {
                        break;
                    }

             }
        }
    }
void House::getaddRooms()
{
    cout<<endl<<endl;
    cout<<"======================================================================================================================";
    cout<<endl<<endl<<endl;cout<<endl<<endl<<endl;
    cout<<"\t\t\tThe Total Room Available In House Are : "<<houserooms<<endl;
    cout<<"======================================================================================================================";
    cout<<endl<<endl;
}

void House::Housesummary()
{
    
	cout<<endl<<endl;
   	cout<<"#######################################################################################################################";

	cout<<endl<<"\t\t\tThe Name of House Owner : "<<nameOfowner;
	cout<<endl<<"\t\t\tThe Rooms in House Before Addindg : "<<newRooms<<endl;
    	cout<<endl<<"\t\t\tThe Total Room Available In House Are : "<<houserooms<<endl;


	cout<<"#######################################################################################################################";
	cout<<endl<<endl;
}




