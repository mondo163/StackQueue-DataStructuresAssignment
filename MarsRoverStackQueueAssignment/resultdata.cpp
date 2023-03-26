#include "resultdata.h"

//constructors
resultdata::resultdata(){
    id = 0;
    x = 0;
    y = 0;
    scandata = 0;
}

resultdata::resultdata(int tempId, int tempX, int tempY, int tempData){
    id = tempId;
    x = tempX;
    y = tempY;
    scandata = tempData;
}

//mutator functions
void resultdata::setId(int tempId){
    id = tempId;
}

void resultdata::setX(int tempX){
    x = tempX;
}

void resultdata::setY(int tempY){
    y = tempY;
}

void resultdata::setScandata(int tempData){
    scandata = tempData;
}

//accessor functions
int resultdata::getId(){
    return id;
}

int resultdata::getX(){
    return x;
}

int resultdata::getY(){
    return y;
}

int resultdata::getScandata(){
    return scandata;
}

//print function
void resultdata::print(){
    cout << "Reading from rover #" << id << " at " << x << ", "
         << y << " is " << scandata << endl;
}




