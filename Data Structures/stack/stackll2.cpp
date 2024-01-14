#include <iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = NULL;
    };
};

class Stack{
    int capacity;
    Node* head;
    int currentsize;
 public:
 Stack(int c){
  head = NULL;
  this->capacity = c;
  this->currentsize = 0;
 };

 void push(int value){
    if (this->currentsize == this->capacity)
    {
        cout<<"overflow"<<endl;
        return;
    }
    
 Node* new_node = new Node(value);
 new_node->next = head;
 head = new_node;   
 this->currentsize ++;
 };

 void pop(){
    if (head == NULL)
    {
       cout<<"underflow"<<endl;
       return;
    }
    
      Node* temp = head;
      head = temp->next;
      free(temp);
      this->currentsize --;
 }

 void isfull(){
    if (this->currentsize == this->capacity)
    {
        cout<<"full"<<endl;
        return;
    }
    cout<<"space avalaible"<<endl;
 }

 void isempty(){
    if (head==NULL)
    {
       cout<<"empty"<<endl;
       return;  
    }
    cout<<"not empty"<<endl;
    return;
 }

 void gettop(){
    cout<< head->val;
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
    st.gettop();
    st.isempty();
    st.isfull();
    return 0;
    return 0;
}
