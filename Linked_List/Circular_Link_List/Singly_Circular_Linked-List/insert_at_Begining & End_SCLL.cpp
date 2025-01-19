#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int v) {
        data = v;
        next = nullptr;
    }
};

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
    } else {
        Node* last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = newNode;
        newNode->next = head;
    }
}

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
    } else {
        newNode->next = head;
        Node* last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = newNode;
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

    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Linked List : ";
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
