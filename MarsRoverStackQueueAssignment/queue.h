/******************************************************
* Queue data structure that will hold the a queue of 
* result data from the rovers
******************************************************/

#ifndef QUEUE_H
#define QUEUE_H

#include "resultdata.h"
using namespace std;

class queue{
    
    private:
        resultdata *item;
        int     front;
        int     rear;
        int     size;
        int     maxCap;

    public:
        //constructors and destructors
        queue();
        queue(const int& tempSize);
        ~queue();
        
        //queue functions
        void enqueue(const resultdata& adata);
        resultdata dequeue();
        bool isEmpty();
        bool peek(resultdata& adata);
        
        //accessor function
        int getSize();
       
        
};

#endif
