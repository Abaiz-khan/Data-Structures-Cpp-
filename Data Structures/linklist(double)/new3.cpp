#include <iostream>
using namespace std;


class Node{
  public:
  int val;
  Node* prev;
  Node* next;

  Node(int data){
    val = data;
    prev = NULL;
    next = NULL;
  }
};


class Doublylinkedlist{
     public:
     Node* head;
     Node* tail;

     Doublylinkedlist(){
        head =NULL;
        tail = NULL;
     }  ;


void insertaathead(int val){
    Node* new_head = new Node(val);
    // Node* temp = head;
    if(head == NULL){
    head = new_head;
    tail = new_head;
    return;
    }
    new_head->next = head;
    head->prev = new_head;
    // new_head->prev = NULL;
    head = new_head;
}

void insertatend(){
    Node* new_node = new Node(50);
    if(tail == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
   tail->next = new_node;
   new_node->prev = new_node;
    return;
}

void inserttail(int val){
    Node* new_tail = new Node(val);
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

void insertpos(int val,int pos){
    Node* new_pos = new Node(val);
    if (pos == 0)
    {
        insertaathead(val);
        return;
    }
    Node* temp = head;
    int current_pos = 0;
    while (current_pos != pos-1)
    {
        temp = temp->next;
        current_pos ++;
    }
     new_pos->next = temp->next;
    temp->next = new_pos;
   
    temp = new_pos->prev;
    new_pos->next->prev = new_pos;
    return;
    
}



void displayhead(){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<< temp->val << "<->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<endl;
};


void detefromhead(){
    if(head == NULL){
        return;
    }
  Node* temp = head;
  head = temp->next;
  if (head!=NULL)
  {
    head->prev = NULL;
  }
  free(temp);
  }

void dltfrompos(int pos){
    Node* temp = head;
    if (pos==0)
    {
        detefromhead();
        return;
    }

    int inipos = 0;
    while (inipos != pos-1)
    {
        temp = temp->next;
        inipos ++;
    }
    Node* neww = temp;
     temp->prev = neww;
    temp = temp->next->next;
   
    return;
}  

void deleteatend(){
    if (head == NULL)
    {
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    if (tail==NULL)
    {
        head = NULL;
    }else{
        tail->next =NULL;
    }
    free(temp);
    return;
}

void search(int pos){
    Node* temp = head;
    int initialpos = 0;
    while (initialpos != pos )
    {
        temp = temp->next;
        initialpos ++;
    }
    cout << temp->val<< " found";
    return;
}



};

void reversal(Node* &head, Node* &tail){
  Node* currPtr = head;
  while (currPtr !=NULL)
  {
    Node* nextptr = currPtr->next;
    currPtr->next = currPtr->prev;
    currPtr->prev=nextptr;
    currPtr = nextptr;
  }
  Node* new_head = tail;
  tail = head;
  head = new_head;

};



int main(int argc, char const *argv[])
{
    Doublylinkedlist dll;
    // dll.insertaathead(10);
    // dll.displayhead();
    // dll.insertaathead(20);
    // dll.displayhead();
    // dll.inserttail(5);
    // dll.displayhead();
    // dll.insertpos(15,1);
    // dll.displayhead();
    // // dll.displaytail();
    // dll.detefromhead();
    // dll.displayhead();
    // dll.dltfrompos(1);
    // dll.displayhead();
    // // dll.search(3);
    // dll.deleteatend();
    // dll.displayhead();
    dll.inserttail(1);
    dll.inserttail(2);
    dll.inserttail(3);
    dll.displayhead();
    reversal(dll.head,dll.tail);
    dll.displayhead();
    dll.search(1);

    return 0;
}


