//push = insert at head
//pop = remove head
//stack on link list
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = NULL;
    }

};

class Stack{
    Node* head;
    int capicity;
    int currSize;

    public:
    Stack(int c){
        this->capicity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty(){
        return this->head ==NULL;
    }

    bool isFull(){
        return this->head == NULL;
    }

    void push(int data){
        if (this->currSize == this->capicity)
        {
            cout<<"capacity"<<endl;
            return;
        }

        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        this->currSize ++;
    }

    void pop(){
        if(head==NULL){
            cout<<"underflow"<<endl;
            return;
        }
        Node* temp = head;
        head = temp->next;
        free(temp);
        currSize --;
        return;
    }
    void size(){
        cout<< this->currSize;
    }
    void gettop(){
        if (head ==NULL)
        {
            cout<<"underflow"<<endl;
            return;
        }
        cout<<head->data<<endl;
    }
    void isempty(){
        if (head==NULL)
        {
            cout<<"empty"<<endl;
            return;
        }
        cout<<"not empty"<<endl;
        return;
    }

    void isfull(){
        if (this->currSize ==this->capicity)
        {
            cout<<"is full"<<endl;
            return;
        }
        cout<<"not full";
        return;
    }

};

int main(int argc, char const *argv[])
{
     Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.gettop();
    st.isempty();
    st.isfull();
    return 0;
}
