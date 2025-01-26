#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;
Node* newNode;
Node* temp;

void Print() {
    temp = head;
    cout << "Linked List : ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertatFirst() {
    int newData;
    cout << "\nEnter the data for add beginning: ";
    cin >> newData;
    newNode = new Node;
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    cout<<"After insertion the ";
}


int main() {
    int n;
    cout << "Enter the number of nodes : ";
    cin >> n;
    cout << "Enter the data : ";
    for (int i = 0; i < n; i++) {
        newNode = new Node;
        cin >> newNode->data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    Print();

    insertatFirst();
    Print();

    return 0;
}
