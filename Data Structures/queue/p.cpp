#include <iostream>
using namespace std;

class Queue{
    int top;
    int counter;
    int* arr;
    int capacity;

    public:
    Queue(int c){
        this->capacity = c;
        arr = new int[c];
        this->counter = -1;
        this->top = 0;
    }
    
    void enqueue(int v){
        if (this->counter == this->capacity-1)
        {
            cout<<"overflow";
            return;
        }
        this->counter ++;
        this->arr[this->counter] = v;
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
    void isfull(){
        if (this->counter == this->capacity-1)
        {
            cout<<"full";
            return;
        }
        cout<<"space avaliable";
        return;
    }

    void isempty(){
        if (this->counter ==-1)
        {
            cout<<"empty";
            return;
        }
        cout<<" not empty";
        return;
    }

    void topp(){
        cout <<" "<<this->arr[this->top];
        return;
    }
    void size(){
        cout<<" size: "<<this->capacity;
        return;
    }
};

int main(int argc, char const *argv[])
{
    Queue qq(4);
    qq.enqueue(1);
    qq.enqueue(2);    
    qq.enqueue(3);    
    qq.enqueue(4);
    qq.topp();
    qq.isempty();
    qq.isfull();
    qq.dequeue();
    qq.isfull();
    qq.size();    

    return 0;
}