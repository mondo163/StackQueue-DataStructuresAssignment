#include "stack.h"

//constructor and destructor
Stack::Stack(){
        top = NULL;
}

Stack::~Stack(){
    if (top){
        node    *curr = top;
        while (curr){
            top = curr->next;
            delete curr;
            curr = top;
        }
    }
}

//checks if stack is empty
bool Stack::isEmpty(){
    return top == NULL;
}

//pushes new node onto stack
void Stack::push(int tempX, int tempY){
    node    *newNode = new node;
    
    newNode->x = tempX;
    newNode->y = tempY;
    newNode->next = NULL;
    
    newNode->next = top;
    top = newNode;    
}

//pops off the top node of the stack
void Stack::pop(int& tempX, int& tempY){
    node    *curr = top;

    if (isEmpty())
        return;
    else{
        tempX = curr->x;
        tempY = curr->y;
        top = top->next;
        delete curr;
    }     
}

//peeks at top node of the stack
bool Stack::peek(int& tempX, int& tempY){
    if (isEmpty())
        return false;
    else{
        tempX = top->x;
        tempY = top->y;
        return true;
    }
}

