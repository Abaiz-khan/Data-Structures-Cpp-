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



void display(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
     cout<<endl;
     return;
}

void inserthead(Node* &head,int x){
  Node* temp = head;
  Node* new_head = new Node(x);
  new_head->next = head;
  head = new_head;
  return;
}

void insertatend(Node* &head,int x){
   Node* temp = head;
   Node* new_tail = new Node(x);
   while (temp->next != NULL)
   {
    temp = temp->next;
   }
   temp->next = new_tail;
   return;
}

void inseratpos(Node* &head,int x,int pos){
Node* insp = new Node(x);
Node* temp = head;
if (pos == 0)
{
    inserthead(head,x);
    return;
}
int initial_pos = 0;
while (initial_pos != pos-1)
{
    temp= temp->next;
    initial_pos++;
}
 insp->next = temp->next;
 temp->next =insp;
 return;
}

void delhead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp);
}

void delpos(Node* &head,int pos){
    if (pos == 0)
    {
        delhead(head);
        return;
    }
    int initial_pos = 0;
    Node* temp = head;
    while (initial_pos != pos-1)
    {
        temp = temp->next;
        initial_pos++;
    }
    temp->next = temp->next->next;
    return;
}

void searching(Node* &head,int pos){
    if (pos==0)
    {
        cout << head->val;
        return;
    }
    int initial_pos = 0;
    Node* temp = head;
    while (initial_pos != pos-1)
    {
        temp = temp->next;
        initial_pos++;
    }
    cout<<"value :"<<temp->next->val;
    return;
}


int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    Node* sec_node = new Node(20);
    head->next = sec_node;
    display(head);
    inserthead(head,5);
    display(head);
    insertatend(head,30);
    display(head);
    inseratpos(head,15,2);
    display(head);
    delhead(head);
    display(head);
    delpos(head,2);
    display(head);
    searching(head,2);
    return 0;
}
