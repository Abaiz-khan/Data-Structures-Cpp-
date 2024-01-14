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

void insertionathead(Node* &head){
    Node* new_node = new Node(1);
    new_node->next = head;
    head = new_node;
}


void display(Node* head){
   Node* temp = head;
    while (temp!=NULL)
    {
        cout<< temp->val <<"->";
       temp = temp->next ;
    }
   cout << "NULL"   ;
}


void inseratpostition(Node* &head,int pos){
    if (pos==0)
    {
        insertionathead(head);
        return;
    }
    Node* new_node = new Node(33);
    
    Node* temp=head;
    int current_pos = 0;
    while (current_pos!=pos-1)
    {
        temp = temp->next;
        current_pos ++;
    }
    new_node->next = temp->next;
    temp->next=new_node;
}


void deleteatHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}


void deleteatposition(Node* &head,int pos){

   if (pos==0)
   {
    deleteatHead(head);
    return;
   }
   int curr_pos=0;
   Node* prev = head;
   while (curr_pos!=pos-1)
   {
    prev = prev->next;
    curr_pos++;
   }
   Node* temp = prev->next;
   prev->next = prev->next->next;
   free(temp);

}

int searcing(Node* head, int target){
 Node *current = head;
 while (current != NULL)
 {
    if (current->val == target)
    {
        return current->val;
    }
    current = current->next;
 }
    return NULL;
};

int main(int argc, char const *argv[])
{
    Node* head = new Node(10);
    //  cout<< head->val <<"->";
    Node* secondNode = new Node(20);
    //  cout << secondNode->val ;
  
    head->next = secondNode;
    display(head);
    cout<<endl;
    insertionathead(head);
    display(head);
    inseratpostition(head,4);
    deleteatHead(head);
    return 0;
}
