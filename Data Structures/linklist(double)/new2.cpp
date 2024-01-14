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
   };
};


class Doublylinklist{
    public:
    Node* head;
    Node* tail;
    
    Doublylinklist(){
        head = NULL;
        tail = NULL;
    }

    void insertatstart(int val){
     Node* new_node = new Node(val);
     if (head == NULL)
     {
        head = new_node;
        tail = new_node;
        return;
     }
     new_node->next = head;
     new_node->prev = NULL;
     head = new_node;
    }

    void displayfront(){
       Node* temp = head;
       while (temp != NULL)
       {
         cout << temp->val <<"<->";
         temp = temp->next;
       }
        cout << "NULL"  ;  
    };
};


int main(int argc, char const *argv[])
{
     Doublylinklist dll;
     dll.insertatstart(10);
     dll.displayfront();
     cout<<endl;
     dll.insertatstart(5);
     dll.displayfront();
     cout<<endl;
      dll.insertatstart(1);
     dll.displayfront();
    return 0;
}

