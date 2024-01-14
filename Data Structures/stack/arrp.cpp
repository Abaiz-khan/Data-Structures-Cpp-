#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
} ;

class Stack{
    private:
    Node* head;
    int capacity;
    int initial_cap;

    public:
    Stack(int c){
        this->capacity = c;
        this->initial_cap = 0;
        head = NULL;
    } 
    
    void push(int x){
        Node* new_node = new Node(x);
        if (this->initial_cap == this->capacity)
        {
            cout<<"overflow"<<endl;
            return;
        }
        new_node->next = head;
        head = new_node;
        this->initial_cap ++;
        return;
    }

    void pop(){
        if (head==NULL)
        {
            cout<<"underflow";
            return;
        }
        Node* temp = head;
        head = temp->next;
        free(temp);
        this->initial_cap --;
    }

    void isempty(){
        if (head == NULL)
        {
            cout<<"empty"<<endl;
            return;
        }
        cout<<"spac avlaible";
        return;
    }
    void isfull(){
        if (this->initial_cap == this->capacity)
        {
            cout<<"full";
            return;
        }
        cout<<"not full";
    }
    
    void top(){
        cout <<head->data;
        return;
    }

    void size(){
        cout<<this->capacity;
        return;
    }

};










int main(int argc, char const *argv[])
{
    Stack st(5);
    st.push(1);
    st.top();
    st.push(2);
    st.top();
    st.push(3);
    st.top();
    st.push(4);
    st.top();
    st.push(5);
    st.top();
    st.push(6);
    st.isfull();
    st.isempty();
    st.size();

    return 0;
}
