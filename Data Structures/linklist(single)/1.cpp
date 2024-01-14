#include <iostream>;
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
        cout<<temp->val<<"-";
        temp = temp->next;
    }
    cout <<"NULL";
    cout<<endl;
    return;
}

void insertathead(Node* &head,int x){
    Node* new_head = new Node(x);
    new_head->next = head;
    new_head = head;
    return;
}

void insertatend(Node* &head,int x){
    Node* new_end = new Node(x);
    Node* temp= head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_end;
    return;
}

void insertatpos(Node* &head,int x,int pos){
    Node* new_pos = new Node(x);
    Node* temp = head;
    if (head == NULL)
    {
        insertathead(head,x);
        return;
    }
    int initial_pos = 0;
    while (initial_pos != pos-1)
    {
        temp=temp->next;
    }
    new_pos->next = temp->next;
    temp->next = new_pos;
    return;
}

void delhead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp);
}

void delpos(Node* &head,int pos){
   Node* temp = head;
   int initial_pos = 0;
   if (head == NULL)
   {
    return;
   }
   
   
    while (initial_pos != pos-1)
    {
        temp = temp->next;
        initial_pos++;
    }
    temp->next = temp->next->next;
    return;
}

void searching(Node* &head,int pos){
    Node* temp = head;
   int initial_pos = 0;
   while (initial_pos == pos)
   {
    temp = temp->next;
    initial_pos ++;
   }
   cout<<temp->val;
   return;
}




int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    Node* sec_node = new Node(20);
    head->next = sec_node;
    return 0;
}
