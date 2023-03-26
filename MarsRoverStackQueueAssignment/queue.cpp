#include "queue.h"

//constructors and destructors
queue::queue(){
    item = NULL;
    front = 0;
    rear = 0;
    size = 0;
    maxCap = 0;
}

queue::queue(const int& tempCap){
    //constructs array of capacity that is passed to it
    item = new resultdata[tempCap];
    front = 0;
    rear = 0;
    size = 0;
    maxCap = tempCap;
}

queue::~queue(){
    delete [] item;
    item = NULL;
}

//adds data to the back of the queue
void queue::enqueue(const resultdata& aData){   
    item[rear] = aData;
    //makes sure if array reaches the end, it circles back around
    rear = (rear+1) % maxCap;
    size++;
}

//removes data from the front of the queue
resultdata queue::dequeue(){
    resultdata adata;
    if (size != 0){
        adata = item[front];
        //circles array around if front reaches the end
        front = (front+1) % maxCap;
        size--;
        return adata;
    }
}  

//double checks if queue is empty
bool queue::isEmpty(){
    return size == 0;
} 
    
//returns data at the front of the queue 
bool queue::peek(resultdata& adata){
    if (size == 0)
        return false;
    else{
        adata = item[front];
        return true;
    }
}

//accessor function: returns size
int queue::getSize(){
    return size;
}


