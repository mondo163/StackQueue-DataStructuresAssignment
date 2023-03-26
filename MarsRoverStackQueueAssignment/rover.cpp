#include "rover.h"

//constructors and destructors
rover::rover(){
    list = NULL;
    id = 0;
    currX = 0;
    currY = 0;
    cap = 0;
}

rover::rover(int tempId, int size, queue& resultqueue){
    list = &resultqueue;
    cap = size;
    id = tempId;
    currX = 0;
    currY = 0;
}

rover::~rover(){
   list = NULL; 
}

//deploys rover and adds current coordinates to stack
void rover::deploy(){
    location.push(currX, currY);
    cout << "Rover (ID " << id << ") deploying..." << endl;
    cout << "Rover (ID " << id << ") ready." << endl;
}

//moves rover and add new coordinates to stack
void rover::move(int x, int y){
    location.push(x, y);
    currX = x;
    currY = y;
    cout << "Rover (ID " << id << ") moving to location " 
         << currX << ", " << currY << endl;
}

//rover scans current location and sends data to queue
bool rover::corescan(){
    int     data;
    
    if (list->getSize() == cap)
        return false;
    else{
        cout << "Rover (ID " << id << ") scanning." << endl;
        data = scan.getScandata(currX, currY);
        resultdata item(id, currX, currY, data);
        list->enqueue(item);
        return true;
    }
}

//rover moves back to base while outputting stack information
void rover::dock(){
    int     tempX;
    int     tempY;

    cout << "Rover (ID " << id << ") returning to base." << endl;
    location.pop(tempX, tempY);
    while (!location.isEmpty()){
        location.pop(tempX, tempY);
        cout << "Rover (ID " << id << ") moving to location " 
             << tempX << ", " << tempY << "." << endl;    
    } 
    cout << "Rover (ID " << id << ") at base and docked." << endl;
    currX = 0;
    currY = 0;
}
