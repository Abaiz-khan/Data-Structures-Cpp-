#include <iostream>
using namespace std;



class Node
{
public:
     int val;
     Node* next;

     Node(int data){
        val = data;
        next = NULL;
     }
};

void insertathead(Node* &head){
    Node* new_head = new Node(10);
    new_head->next = head;
    head = new_head;
}

void display(Node* head){
     Node* temp = head;
     while (temp != NULL)
     {
        cout<<temp->val<<"->";
        temp = temp->next;
     }
     cout<<"NULL";
}

void insertionatend(Node* head){
    Node* end_tail = new Node(40);
    Node* temp = head;
    while (temp->next != NULL )
    {
        temp = temp->next;
    }
    temp->next = end_tail;
}

int main(int argc, char const *argv[])
{
    Node* head = new Node(20);
    Node* second = new Node(30);
   
    head->next = second;
     display(head);
     cout<<endl;
     insertathead(head);
    display(head);
    insertionatend(head); 
    cout<<endl;
    display(head);
    return 0;
}





