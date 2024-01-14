#include <iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class Stack{
    Node* head;
    int counter;
    int capacity;

    public:
    Stack(int c){
        this->capacity = c;
        this->head = NULL;
        this->counter=0;
    }

    void push(int x){
      Node* new_node = new Node(x);
      if (this->counter == this->capacity)
      {
        cout<<"overflow";
        return;
      }
      
      new_node->next = head;
      head = new_node;
      counter ++;
    }

    void pop(){
       if (head == NULL)
       {
        cout<<"underflow";
        return;
       }
       
        Node* temp = head;
        head = temp->next;
        free(temp);
        counter --;
        return;
    }

    void isempty(){
        if (this->counter == 0)
        {
         cout<<"empty";
         return;
        }
        cout<<"not empty";
        return;
    }
    void isfull(){
        if (this->counter == this->capacity)
        {
            cout<<"full";
            return;
        }
        cout<<"space availaible";
        return;
    }

    void top(){
        if (this->counter == 0)
        {
            cout<<"underflow";
            return;
        }
        
        cout<<head->val;
        return;
    }
    void size(){
        cout<<this->capacity;
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
    st.top();
    st.isempty();
    st.isfull();
    return 0;
}
