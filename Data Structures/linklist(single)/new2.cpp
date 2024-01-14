#include <iostream>
using namespace std;

class Node {
   public:
   int val;
   Node* next;

 Node(int data){
    val = data;
    next = NULL;
 }
};

void display(Node* head){
   Node* temp = head;
   while (temp != NULL )
   {
    cout<<temp->val<<"->";
    temp = temp->next;
   }
   cout << "NULL";
}


void insertathead (Node* &head){
    Node* new_head = new Node(5);
    Node* temp = head;
    new_head->next = head;
    head = new_head;
}

void insertattail(Node* &head){
    Node* new_tail = new Node(25);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_tail;
}

void insertatposition(Node* &head, int pos){
    if (pos==0)
    {
        insertathead(head);
        return;
    }
    Node* node_pos = new Node(15);
    Node* temp = head;
    int initial_position = 0;
    while (initial_position != pos-1)
    {
       temp = temp->next;
       initial_position ++;
    }
     node_pos->next = temp->next; 
     temp->next = node_pos;
     
}

void delfromhead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp);
}

void delatpos(Node* &head,int pos){
    if (pos == 0)
    {
        delfromhead(head);
        return;
    }
    Node*temp = head;
    int initioal_pos = 0;
    while (initioal_pos != pos-1)
    {
        temp = temp->next;
        initioal_pos ++;
    }
    temp->next = temp->next->next;
}

void searching(Node* &head, int result){
  Node* temp = head;
  while (temp != NULL)
  {
    if (temp->val != result)
    {
       temp = temp->next;
    }else{
        cout<<temp->val <<" FOUND";
        return;
    }
  }
}







int main(int argc, char const *argv[])
{
     Node* head = new Node(10);
     Node* sec_node = new Node(20);
     head->next = sec_node;
     display(head);
     cout<<endl;
     insertathead(head);
     display(head);
     cout<<endl;
     insertattail(head);
     display(head);
     cout<<endl;
    insertatposition(head,2);
    display(head);
    cout<<endl;
    delfromhead(head);
    display(head);
    cout<<endl;
    delatpos(head,1);
    display(head);
    cout<<endl;
    searching(head,25);
    return 0;
}

