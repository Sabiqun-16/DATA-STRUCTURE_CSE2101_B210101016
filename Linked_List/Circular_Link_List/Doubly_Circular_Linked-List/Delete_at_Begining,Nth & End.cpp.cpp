#include<bits/stdc++.h>
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

void deleteNode(Node*& head, int value) {
    if (head == nullptr) {
        return;
    }

    Node* current = head;
    do {
        if (current->data == value) {
            if (current == head && current->next == head) {
                delete current;
                head = nullptr;
            } else {
                current->prev->next = current->next;
                current->next->prev = current->prev;

                if (current == head) {
                    head = current->next;
                }

                delete current;
            }
            return;
        }
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

    insertAtEnd(head, 45);
    insertAtEnd(head, 30);
    insertAtEnd(head, 60);
    insertAtEnd(head, 10);

    cout << "Linked List: ";
    display(head);

    deleteNode(head, 30);
    cout << "After deleting 30(Nth): ";
    display(head);

    deleteNode(head, 45);
    cout << "After deleting 45 (head): ";
    display(head);

    deleteNode(head, 100);
    cout << "After trying to delete 100: ";
    display(head);

    deleteNode(head, 10);
    cout << "After deleting 10 (last node): ";
    display(head);

    return 0;
}

