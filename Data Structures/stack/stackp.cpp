#include <iostream>
using namespace std;

class Stack{
    int top;
    int capacity;
    int* arr;
public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int val){
        if (this->top == this->capacity-1)
        {
            cout<<"overflow"<<endl;
            return;
        }
        this->top ++;
        this->arr[this->top] = val;
    }

    void pop(){
        if(this->top == -1){
            cout<<"underflow" <<endl;
            return;
        }
        this->top --;
    }

    void gettop(){
        if(this->top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        cout<<this->arr[this->top];
        return;
    }

    void size(){
        cout<<this->capacity-1;
    }

    void isfull(){
        if (this->capacity == capacity-1)
        {
            cout <<"is full"<<endl;
            return;
        }
        cout<<"space avalaible"<<endl;
    }
};


int main(int argc, char const *argv[])
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.size();
    cout<<endl;
    st.isfull();
    return 0;
}
