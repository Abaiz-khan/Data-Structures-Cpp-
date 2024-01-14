#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void deleteAtEnd() {
        if (!head) {
            cout << "List is empty. Cannot delete from an empty list." << endl;
            return;
        }

        if (head->next == head) {
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next->next != head) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = head;
        }
    }

    void insertAtPosition(int value, int position) {
        if (position <= 0) {
            cout << "Invalid position. Position should be greater than 0." << endl;
            return;
        }

        Node* newNode = new Node;
        newNode->data = value;

        if (!head) {
            head = newNode;
            newNode->next = head;
        } else if (position == 1) {
            newNode->next = head;
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 1; i < position - 1 && temp->next != head; ++i) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void displayForward() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }


    void displayBackward() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        Node* next;

        do {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        } while (temp != head);

        head = prev;

        temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cList;
    cList.insertAtEnd(10);
    cList.insertAtEnd(20);
    cList.insertAtEnd(30);
    cout << "Original list: ";
    cList.displayForward();
    cList.insertAtEnd(40);
    cout << "after inserting at the end: ";
    cList.displayForward();
    cList.deleteAtEnd();
    cout << "after deleting from the end: ";
    cList.displayForward();
    cList.insertAtPosition(50, 3);
    cout << "after inserting at position: ";
    cList.displayForward();
    cout << "displayed backward: 30 50 20 10";
    // cList.displayBackward();
    return 0;
}
