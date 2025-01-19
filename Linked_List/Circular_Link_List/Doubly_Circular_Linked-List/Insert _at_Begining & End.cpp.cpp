#include <bits/stdc++.h>
using namespace std;

struct Node {
    Node* prev;
    int data;
    Node* next;

    Node(int v) {
        data = v;
        prev = next = nullptr;
    }
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->prev = newNode;
        newNode->next = newNode;
    } else {
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }
}

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->prev = newNode;
        newNode->next = newNode;
    } else {
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
        head = newNode;
    }
}

void display(Node* head) {
    if (head == nullptr) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 45);
    insertAtEnd(head, 30);

    cout<<"Linked List : ";
    display(head);

    insertAtEnd(head, 60);
    insertAtEnd(head, 10);

    cout << "\nAfter Insertions at End : ";
    display(head);

    insertAtBeginning(head, 5);
    insertAtBeginning(head, 1);

    cout << "\nAfter Insertions at Beginning : ";
    display(head);

    return 0;
}
