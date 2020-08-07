#include<iostream>
#include"Building.h"
using namespace std;

    //Setter for height
    void Building::setHeight()
    {
        cout<<"Enter height of the building in meters: ";
        cin>>height;
    }

    //Getter for height
    float Building::getHeight()
    {
        cout<<endl<<"Height of your building (in meters) is: "<<height<<endl;
    }

     //Setter for city
    void Building::setCity()
    {
    cout<<endl<<"Enter city in which the building is located: ";
    cin>>city;
    }

    //Getter for city
    string Building::getCity()
    {
       cout<<endl<<"Location of your building is: "<<city<<endl;;
    }

     //Setter for Floors
    void Building::setFloors(int f)
    {
        cout<<endl<<"How many floors are there in your building: ";
    	cin>>floors;
    }

    //Getter for Floors
    int Building::getFloors()
    {
        cout<<endl<<"Total Floors in your building are: "<<floors;
    }

     //Setter for Rooms
    void Building::setRooms(int r)
    {
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"Enter No. of Rooms in each floor:."<<endl;
        cout<<"================================="<<endl;

        for(int a=0;a<=r;a++)
        {
            if(a==0)
            {
             cout<<endl<<"Enter No. of Rooms in Ground Floor   ";
             cin>>rooms[a];
            }
            else
            {
                cout<<endl<<"Enter No. of Rooms in Floor # "<<a<<"   ";
                cin>>rooms[a];
            }
        }
    }

    //Getter for Rooms
    void Building::getRooms()
    {
        int r = floors;
        cout<<endl<<endl<<endl;
        cout<<endl<<"No. of Rooms in each floor are:."<<endl;
        cout<<"================================="<<endl;

        for(int a=0;a<=r;a++)
        {
            if(a==0)
            {
             cout<<endl<<"No. of Rooms in Ground Floor are "<<rooms[a]<<endl;
            }
            else
            {
             cout<<endl<<"No. of Rooms in Floor # "<<a<<" are "<<rooms[a]<<endl;
            }
        }
    }

    void Building::paintBuilding(string p)
    {
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"Enter colour name you want to paint your building: ";
        cin>>paintColour;
        cout <<endl<<"Painted "<< paintColour <<" colour to your building"<<endl;
    }

    void Building::paintFloor()
    {
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"Enter 'Y' if you want to paint the specified floor & Enter 'N' if you don't want to paint the specified floor:."<<endl<<endl<<endl;
        for(int a=0;a<=floors;a++)
        {
            char userInput;
            if(a==0)
            {
             cout<<endl<<"Are you want to paint ground floor?   ";
             cin>>userInput;
             if(userInput == 'Y' || userInput == 'y')
             {
                 cout<<endl<<"Enter the colour you want to paint:   ";
                 cin>>floorColour[a];
             }
            }
            else
            {
             cout<<endl<<"Are you want to paint Floor # "<<a<<"   ";
             cin>>userInput;
             if(userInput == 'Y' || userInput == 'y')
             {
                 cout<<endl<<"Enter the colour you want to paint:   ";
                 cin>>floorColour[a];
             }
            }
        }
    }

    void Building::showPaintedFloors()
    {
        cout<<endl<<endl<<endl;
        cout<<"You want to paint:."<<endl;
        cout<<"====================";
        for(int a=0;a<=floors;a++)
        {
            if(floorColour[a]!="")
            {
                if(a==0)
                {
                    cout<<endl<<endl<<"Ground Floor with "<<floorColour[a]<<" colour";
                }
                else
                {
                    cout<<endl<<endl<<"Floor # "<<a<<" with "<<floorColour[a]<<" colour";
                }
            }
            else
            {
                continue;
            }
        }
    }

    void Building::addRooms()
    {
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"Enter 'Y' if you want to add rooms in the specified floor & Enter 'N' if you don't:."<<endl<<endl<<endl;
        for(int a=0;a<=floors;a++)
        {
            char userInput;
            if(a==0)
            {
             cout<<endl<<"Are you want to add rooms in ground floor?   ";
             cin>>userInput;
             if(userInput == 'Y' || userInput == 'y')
             {
                 cout<<endl<<"How many rooms you want to add? ";
                 cin>>newRooms[a];
             }
            }
            else
            {
             cout<<endl<<"Are you want to add rooms in Floor # "<<a<<"   ";
             cin>>userInput;
             if(userInput == 'Y' || userInput == 'y')
             {
                 cout<<endl<<"How many rooms you want to add?   ";
                 cin>>newRooms[a];
             }
            }
        }
    }


    void Building::showFloorRooms()
    {
        cout<<endl<<endl<<endl;
        cout<<"Now, you have rooms in the floors:."<<endl;
        cout<<"====================================";
        for(int a=0;a<=floors;a++)
        {

                if(a==0)
                {
                    int room = rooms[a] + newRooms[a];
                    cout<<endl<<endl<<"Total Rooms in Ground Floor are "<<room;
                }
                else
                {
                    int room = rooms[a] + newRooms[a];
                    cout<<endl<<endl<<"Total Rooms in Floor # "<<a<<" are "<<room;
                }

        }
    }

    void Building::setMergeRooms()
    {
        cout<<endl<<endl<<endl;
        cout<<"======================================================================================================================";
        cout<<endl<<endl<<endl;
        cout<<endl<<"\t\t\tEnter 'Y' if you want to merge rooms in the specified floor & Enter 'N' if you don't:."<<endl;
        for(int a=0;a<=floors;a++)
        {
            char userInput;
            if(a==0)
            {
             cout<<endl<<"\t\t\tAre you want to merge rooms in ground floor?   ";
             cin>>userInput;
             if(userInput == 'Y' || userInput == 'y')
             {
                 cout<<endl<<"\t\t\tHow many rooms you want to merge?   ";
                 cin>>mergeRooms[a];
                 roomsAfterMerging[a] = ((rooms[a] + newRooms[a])-mergeRooms[a])+1;
             }
            }
            else
            {
             cout<<endl<<"\t\t\tAre you want to merge rooms in Floor # "<<a<<"   ";
             cin>>userInput;
             if(userInput == 'Y' || userInput == 'y')
             {
                 cout<<endl<<"\t\t\tHow many rooms you want to merge?   ";
                 cin>>mergeRooms[a];
                 roomsAfterMerging[a] = ((rooms[a] + newRooms[a])-mergeRooms[a])+1;
             }
            }
        }
    }


    void Building::showMergeRooms()
    {
        cout<<endl<<endl<<"\t\t\tNow, you have rooms in the floors after merging rooms:."<<endl<<endl;
        cout<<"=========================================================";
        for(int a=0;a<=floors;a++)
        {

                if(a==0)
                {
                    cout<<endl<<endl<<"\t\t\tTotal Rooms in Ground Floor are "<<roomsAfterMerging[a];
                }
                else
                {
                    cout<<endl<<endl<<"\t\t\tTotal Rooms in Floor # "<<a<<" are "<<roomsAfterMerging[a];
                }
        }
    }

    void Building::BuildingSummary()
    {

    	cout<<endl<<endl;
   	cout<<"***********************************************************************************************************************";



   	cout<<endl<<"\t\t\tLocation of your building is: "<<city<<endl;;
   	cout<<endl<<"\t\t\tHeight of your building (in meters) is: "<<height<<endl;


   	cout<<endl<<endl;
   	cout<<"******************************************"<<endl;
   	cout <<endl<<"\t\t\tYou Painted "<< paintColour <<" colour to your building"<<endl;
   	cout<<"******************************************"<<endl;


   	cout<<endl<<endl;
   	cout<<"******************************************"<<endl;
        cout<<"\t\t\tYou want to paint:."<<endl;
   	cout<<"******************************************"<<endl;
   	cout<<endl;
        for(int a=0;a<=floors;a++)
        {
            if(floorColour[a]!="")
            {
                if(a==0)
                {
                    cout<<endl<<endl<<"\t\t\tGround Floor with "<<floorColour[a]<<" colour";
                }
                else
                {
                    cout<<endl<<endl<<"\t\t\tFloor # "<<a<<" with "<<floorColour[a]<<" colour";
                }
            }
            else
            {
                continue;
            }
        }
   	cout<<endl<<endl;
   	cout<<"******************************************"<<endl;
        cout<<"\t\t\tyou have rooms in the floors:."<<endl;
        cout<<"******************************************"<<endl;
        for(int a=0;a<=floors;a++)
        {

                if(a==0)
                {
                    int room = rooms[a] + newRooms[a];
                    cout<<endl<<"\t\t\tTotal Rooms in Ground Floor are "<<room;
                }
                else
                {
                    int room = rooms[a] + newRooms[a];
                    cout<<endl<<endl<<"\t\t\tTotal Rooms in Floor # "<<a<<" are "<<room;

                }
   	}
   	cout<<endl<<endl;
   	cout<<"*****************************************"<<endl;
   	cout<<endl<<"\t\t\tRooms 0n the floors after merging rooms:"<<endl;
        cout<<"*****************************************"<<endl<<endl;
        for(int a=0;a<=floors;a++)
        {

                if(a==0)
                {
                    cout<<endl<<"\t\t\tTotal Rooms in Ground Floor are "<<roomsAfterMerging[a];
                }
                else
                {
                    cout<<endl<<endl<<"\t\t\tTotal Rooms in Floor # "<<a<<" are "<<roomsAfterMerging[a];
                }
        }
    }



