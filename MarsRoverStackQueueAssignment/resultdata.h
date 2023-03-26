/*****************************************************
* This class is the container for the coordinate and 
* scan data associated with the rover
******************************************************/

#ifndef RESULTDATA_H
#define RESULTDATA_H

#include<iostream>
using namespace std;

class resultdata{

    private:
        int     id;
        int     x;
        int     y;
        int     scandata; 

    public:
        //constructors
        resultdata();
        resultdata(int tempId, int tempX, int tempY, int tempData);
         //mutator functions
        void setId(int tempId);
        void setX(int tempX);  
        void setY(int tempY);
        void setScandata(int tempData);
  
        //accessor functions    
        int getId();
        int getX();
        int getY();
        int getScandata();
       
        //print function 
        void print();
};

#endif
