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
   Node* head ;
   int capacity;
   int counter;

   public:
   Stack(int c){
    this->capacity = c;
    this->counter = 0;
    this->head = NULL;
   }

   void push(int x){
    if (this->counter == this->capacity)
    {
        cout<<"overflow";
        return;
    }
    Node* new_node = new Node(x);
    new_node->next= head;
    head = new_node;
    this->counter ++;
    return;
   }

   void pop(){
    if (head == NULL)
    {
        cout<<"underflow";
        return;
    }
    Node* temp = head;
    head = temp->next;
    counter --;
    free(temp);
    return;
   }

   void isempty(){
    if (head == NULL)
    {
        cout<<"empty";
        return;
    }
    cout<<"not empty";
    return;
   }

   void size(){
    cout<<this->capacity;
   }
};