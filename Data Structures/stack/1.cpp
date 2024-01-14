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
  int capacity;
  int counter;
  Node* head;

  public:
  Stack(int c){
    this->capacity = c;
    this->counter = 0;
    head = NULL;
  }

  void push(int x){
    if (this->counter == this->capacity)
    {
        cout<<"overflow";
        return;
    }
    Node* new_head = new Node(x);
    new_head->next = head ; 
    head = new_head;
    this->counter ++;
    return;
  }

  void pop(){
    if (this->counter == 0)
    {
        cout<<"underflow";
        return;
    }
    Node* temp = head;
    head = temp->next;
    this->counter --;
    free(temp);
  }

  void size(){
    cout<<this->capacity;
  }
};
