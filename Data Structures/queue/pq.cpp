#include <iostream>
using namespace std;

class Queue{
    int counter;
    int* arr;
    int top;
    int capacity;
    public:
    Queue(int c){
        this->capacity = c;
        this->counter  = -1;
        this->top = 0 ;
    }

    void enqueue(int x){
        if (this->counter == this->capacity-1)
        {
            cout<<"overflow";
            return;
        }
        this->counter++;
        this->arr[this->counter] = x;
        return;
    }
};