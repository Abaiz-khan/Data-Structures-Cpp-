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

void display(Node* head){
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->val <<"->";
    temp = temp->next;
  }
  cout<< "NULL";
}

void insertathead(Node* &head){
  Node* new_head = new Node(5);
  Node* temp = head;
  new_head->next = head;
  head = new_head;
}
 void insertattail(Node* &head){
    Node* new_tail = new Node(30);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp->next = new_tail;
 }

 void insertatpos(Node* &head,int pos){
    if (pos == 0)
    {
        insertathead(head);
    }
    Node* pos_node = new Node(15);
    Node* temp  = head ;
    int current_pos = 0; 
    while (current_pos == pos-1)
    {
        temp = temp->next;
        current_pos ++;
    }
    pos_node->next = temp->next;
    temp->next = pos_node;
    
 }

 void delathead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp); 
 }

 void delatpos(Node* &head,int pos){
   if (pos == 0)
   {
    delathead(head);
   }
   int initial_pos = 0;
   Node* temp = head;
   while (initial_pos == pos-1)
   {
    temp = temp->next;
    initial_pos ++;
   }
   temp->next = temp->next->next;
 }

void searching(Node* &head,int result){
    Node* temp = head;
    while (temp->next != NULL)
    {
        if (temp->val == result)
        {
            cout << temp->val <<" available ,";
        }else{
            cout <<" Not available at this position ";
        }
        temp = temp->next;
        
    }
    
}





int main(){
    Node* head = new Node(10);
    Node* second_node = new Node(20);
    head->next = second_node;
    display(head);
    cout<<endl;
    insertathead(head);
    display(head);
    cout<<endl;
    insertattail(head);
    display(head);
    cout<<endl;
    insertatpos(head,1);
    display(head);
    cout <<endl;
    delathead(head);
    display(head);
    cout<<endl;
    delatpos(head,2);
    display(head);
    cout<<endl;
    searching(head,10);
}