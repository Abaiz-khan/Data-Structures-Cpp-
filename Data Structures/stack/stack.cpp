// functions in stack
// puch
// pop
// isempty
// size
// isfull
// top
 

#include <iostream>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    };
    void push(int value){
        if (this->top == this->capacity-1)
        {
            cout<<"overflow";
            return;
        }
        this->top ++;
        this->arr[this->top] = value;
    }

    int pop(){
        if(this->top == -1){
           cout<< "underflow";
           return 0;
        }
        this-top --;
    }

    int gettop(){
        if (this->top == -1)
        {
            cout<<"underflow";
            return 0;
        }
        return this->arr[this->top];
    }

    int size(){
        return this->top+1;
    }

    bool isfull(){
        return this->top == this->capacity-1;
    }
};




int main(int argc, char const *argv[])
{
    
    return 0;
}
