#include <iostream>
using namespace std;

class Queue{
    int top;
    int counter;
    int capacity;
    int* arr;

    public:
    Queue(int c){
        this->capacity = c;
        arr = new int[c];
        this->counter = -1;
        this->top = 0;
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

    void dequeue(){
        if (this->counter == -1)
        {
            cout<<"underflow";
            return;
        }
        this->top ++;
        return;
    }


    void size(){
        cout<<this->capacity-1;
    }
};
