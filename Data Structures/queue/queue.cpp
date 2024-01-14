//enqueue add at tail
// dequeue removefromhead  baqi same hai
//q on link list
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    };
};

class Queue{

    int capacity;
    int ini_capacity;
     Node* head ;
    Node* tail;

    public:
    Queue(int val){
        this->capacity = val;
        this->ini_capacity = 0;
       this->head = NULL;
        this->tail = NULL;

    }

    void enqueue(int y){
        Node* new_node = new Node(y);
        if (this->head == NULL)
        {
            this->head = new_node;
            this->tail = new_node;
            return;
        };
        this->tail->next = new_node;
        this->tail = new_node;
        this->ini_capacity ++;
        return;
    }

    void dequeue(){
        if (head == NULL)
        {
            cout<<"underflow";
            return;
        }
        Node* temp = head;
        head = temp->next;
        ini_capacity --;
        return;
    }
    void isfull(){
        if (this->ini_capacity == this->capacity)
        {
            cout<<"full";
            return;
        }
        cout<<"not full ";
    }

    void isempty(){
        if (head==NULL)
        {
            cout<<"is empty";
            return;
        }
        cout<<"not empty";
        return;
    }

    void top(){
        if (head == NULL)
        {
            cout<<"null"<<endl;
            return;
        }

        cout<< "'"<<this->head->data<<"'";
        return;
    }
    void size(){
        cout <<this->capacity;
        return;
    }
};


int main(int argc, char const *argv[])
{
    Queue qq(4);
    qq.enqueue(1);
    qq.top();
    qq.enqueue(2);
    qq.top();

    qq.enqueue(3);
    qq.top();

    qq.enqueue(4);
    qq.top();

    qq.dequeue();
    qq.isempty();
    qq.isfull();
    qq.size();

    return 0;
}
