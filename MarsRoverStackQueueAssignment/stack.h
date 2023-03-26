/*****************************************************************
* Stack data structure that holds coordinate nodes for the position
* of the rover. Each rover will have its own stack. 
******************************************************************/
#ifndef STACK_H
#define STACK_H

#include<iostream>

class Stack{
    
    private:
        //node for link list implementation
        struct node{
            int     x;
            int     y;
            node    *next;
        };
        node    *top;
        
 
    public:
        //constructor and destructor
        Stack();
        ~Stack();
        
        //stack function
        bool isEmpty();
        void push(int tempX, int tempY);
        void pop(int& tempX, int& tempY);
        bool peek(int& tempX, int& tempY);
        
};

#endif
