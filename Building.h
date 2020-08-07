#include<iostream>
using namespace std;

class Building
{
private:
    float height;
    string city;
    int floors;
    int rooms[1000];
    int newRooms[1000];
    int mergeRooms[1000];
    int roomsAfterMerging[1000];
    string paintColour;
    string floorColour[1000];


public:

    //Getter & Setter for height
    void setHeight();
    float getHeight();

    //Getter & Setter for city
    void setCity();
    string getCity();

    //Getter & Setter for Floors
    void setFloors(int);
    int getFloors();

    //Getter & Setter for Rooms
    void setRooms(int);
    void getRooms();


    void paintBuilding(string);
    void paintFloor();
    void showPaintedFloors();
    void addRooms();
    void showFloorRooms();
    void setMergeRooms();
    void showMergeRooms();
    void BuildingSummary();

};


