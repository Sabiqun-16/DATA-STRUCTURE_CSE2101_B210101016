#include<bits/stdc++.h>
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
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }

    Node* current = head;
    Node* prev = nullptr;

    do {
        if (current->data == value) {
            if (current == head && current->next == head) {
                delete current;
                head = nullptr;
            } else {
                if (current == head) {
                    prev = head;
                    while (prev->next != head) {
                        prev = prev->next;
                    }
                    head = head->next;
                }

                prev->next = current->next;
                delete current;
            }
            return;
        }
        prev = current;
        current = current->next;
    } while (current != head);
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
    insertAtEnd(head, 60);
    insertAtEnd(head, 10);

    cout << "Linked List: ";
    display(head);

    deleteNode(head, 30);
    cout << "After deleting 30: ";
    display(head);

    deleteNode(head, 20);
    cout << "After deleting 20 (head): ";
    display(head);

    deleteNode(head, 10);
    cout << "After deleting 10 (last node): ";
    display(head);

    return 0;
}
