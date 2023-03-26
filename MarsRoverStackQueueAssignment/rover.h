/**************************************************
* This rover class defines the functionality of the
* rover and what data it holds. 
***************************************************/

#ifndef ROVER_H
#define ROVER_H

#include<iostream>
#include "queue.h"
#include "stack.h"
#include "scandata.h"
#include "resultdata.h"

using namespace std;

class rover{
    
    private:
        queue   *list;
        Stack   location;
        scandata scan;
        int     id;
        int     currX;
        int     currY;
        int     cap;
    
    public:
        //constructor and destructor
        rover();
        rover(int tempId, int size, queue& resultqueue);
        ~rover();
    
        //rover functions
        void deploy();
        void move(int x, int y);
        bool corescan();    
        void dock();    
};

#endif
