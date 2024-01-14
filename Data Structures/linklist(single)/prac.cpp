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
    while (temp != NULL )
    {
       cout << temp->val << "->";
       temp = temp->next;
    }
    cout<<"NULL";
}

void insertiononhead(Node* &head){
    Node* newhead = new Node(1);
    Node* temp = head;
    newhead->next = head;
    head = newhead;
}

void insertionattail(Node* &head){
    Node* newtail = new Node(30);
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newtail;
}


void insertionatposition(Node* &head,int pos){
  if (pos == 0)
  {
    insertiononhead(head);
    return;
  }
  Node* randominsert = new Node(15);
  Node* temp = head;
  int current_pos = 0;
  while (current_pos != pos-1)
  {
    temp = temp->next;
    current_pos ++;
  }
  randominsert->next = temp->next;
  temp->next = randominsert;
}

void delathead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp);
}

void delatposition(Node* &head,int pos){
    if (pos == 0)
    {
       delathead(head);
       return;
    }
    Node* temp = head;
    int initial_pos = 0;
    while (initial_pos != pos-1)
    {
        temp = temp->next;
        initial_pos ++;
    }
    
    temp -> next = temp->next->next;
}

int searching(Node* &head,int target){
   Node* temp = head;
   while (temp != NULL)
   {
    
    if (temp->val==target)
    {
        cout<< temp->val <<" Avaliable";
    }else{
            cout<<" Not avaliable at current position , "; 
    }
     temp = temp->next;
   };
   return 1;
}



int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    Node* secondNode = new Node(20);
    head->next = secondNode;
    display(head);
    cout<<endl;
    insertiononhead(head);
    display(head);
    cout<<endl;
    insertionattail(head);
    display(head);
    cout<<endl;
    insertionatposition(head,2);
    display(head);
    cout<<endl;
    delathead(head);
    display(head);
    cout<<endl;
    delatposition(head,1);
    display(head);
    cout<<endl;
    searching(head,30);
    return 0;
}









