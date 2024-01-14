#include <iostream>
using namespace std;
//stack on arry
class Stack{
  int top;
  int* arr;
  int capacity;

  public:
  Stack(int c){
    this->capacity = c;
    arr = new int[c];
    this->top = -1;
  };

  void push(int val){
    if (this->capacity == capacity-1)
    {
        cout<<"overflow"<<endl;
        return;
    }
    this->top++;
    this->arr[this->top] = val;
    return;
  }

  void pop(){
    if (this->top == -1)
    {
        cout<<"underflow"<<endl;
        return;
    }
    this->top --;
    return;
  }

  void topp(){
    if (this->top==-1)
    {
       cout<<"empty"<<endl;
       return;
    }
    cout<<this->arr[this->top] <<endl;
    return;
  }

  void isempty(){
    if (this->top==-1)
    {
       cout<<"empty"<<endl;
       return;
    }
    cout<<"not empty"<<endl;
    return;
  }

  void size(){
    cout<<this->capacity-1;
    return;
  }

  void isfull(){
    if (this->capacity == capacity-1)
    {
        cout<<"full"<<endl;
        return;
    }
    cout<<"space avaliable"<<endl;
    return;
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
    st.topp();
    st.isempty();
    st.isfull();
    return 0;
}
