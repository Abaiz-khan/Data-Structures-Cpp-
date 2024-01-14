#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};


class doublylinklist{
  public:
  Node* head;
  Node* tail;

  doublylinklist(){
    head = NULL;
    tail = NULL;
  };



  void inserthead(int x){
    Node* new_head = new Node(x);
    if (head == NULL)
    {
        head = new_head;
        tail = new_head;
        return;
    }
    Node* temp = head;
    new_head->next = temp;
    temp->prev = new_head;
    // new_head->prev = NULL;
    head = new_head;
    return;
  }

  void displayhead(){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<"<->";
     temp = temp->next;
    }
    cout<<"NULL";
    return;
  }

void inserttail(int y){
    Node* new_tail = new Node(y);
    if (tail == NULL)
    {
        head = new_tail;
        tail = new_tail;
        return;
    }
    tail->next = new_tail;
    new_tail->prev = tail;
    tail = new_tail;
    return;
}

void inertatpos(int pos,int val,int z){
    if (pos == 0)
    {
        inserthead(z);
        return;
    }
    int currentpos = 0;
    Node* new_pos = new Node(z);
    Node* temp = head;
    while (pos != currentpos-1)
    {
        temp = temp->next;
        currentpos ++;
    }
    new_pos->next = temp->next;
    new_pos->prev = temp;
    new_pos->next->prev = new_pos;
    temp->next = new_pos;
    return;
}

void delhead(){
    if (head == NULL)
    {
        return;
    }
    Node* temp = head;
    head = temp->next;
    free(temp);
}

void delpos(int pos){
    if (pos == 0)
    {
        delhead();
        return;
    }
    Node* temp = head;
    int initial_pos = 0;
    while (initial_pos != pos-1)
    {
        temp = temp->next;
        initial_pos ++;
    }
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
    return;
}

void deltail(){
    if (head == NULL)
    {
        return;
    }
    Node* temp = tail;
    tail = temp->prev;
    tail->next = NULL;
}

void search(int pos){
  if (pos == 0)
  {
   cout<< head->val;
   return;
  }
  int initial_pos = 0;
  Node* temp = head;
  while (initial_pos != pos)
  {
    temp = temp->next;
  }
  cout << temp->val<<endl;
  return;
}

void reversal(){
    Node* current = head;
    while (current != NULL)
    {
        Node* next = current->next;
        current->next = current->prev;
        current->prev = current->next;
        current->prev = next;
        current = next;
    }
    Node* new_head = tail;
    tail = head ; 
    head = new_head;
}

};
