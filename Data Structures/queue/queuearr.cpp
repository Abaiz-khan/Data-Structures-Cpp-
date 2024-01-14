#include <iostream>
using namespace std;

//Q on arry
class Queue{
    int counter;
    int* arr;
    int top;
    int capacity;

    public:
    Queue(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = 0;
        this->counter = -1;
    }

    void enque(int data){
        if (this->counter == this->capacity-1)
        {
            cout<<"overflow";
            return;
        }
        this->counter ++;
        this->arr[this->counter] = data;
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

    void topp(){
        cout << this->arr[this->top];
      return;
    }

    void size(){
        cout<<this->capacity;
        return;
    }
    void isfull(){
        if (this->counter == this->capacity-1)
        {
            cout<<"full";
            return;
        }
        cout<<"not full";
    }
    void isempty(){
        if (this->counter==-1)
        {
            cout<<"empty";
            return;
        }
        cout<<"not empty";
        return;
    }
};

int main(int argc, char const *argv[])
{
    Queue qq(4);
    qq.enque(1);
    qq.enque(2);
    qq.enque(3);
    qq.enque(4);
    qq.topp();
    qq.isempty();
    qq.isfull();
    qq.dequeue();
    qq.isfull();
    qq.size();

    return 0;
}
