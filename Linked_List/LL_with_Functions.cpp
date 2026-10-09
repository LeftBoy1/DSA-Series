
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


void push_front(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}


void push_back(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}


void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    push_front(head, tail, 10);
    push_front(head, tail, 20);
    push_back(head, tail, 30);
    push_back(head, tail, 40);

    cout << "Linked List: ";
    display(head);

    return 0;
}