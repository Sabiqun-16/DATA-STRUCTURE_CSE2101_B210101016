#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Queue{
private:
    Node* front;
    Node* rear;

public:
    Queue(){
        front = rear = nullptr;
    }

    void Insert() {
        int v;
        cout << "Insert the element: ";
        cin >> v;

        Node* newNode = new Node();
        newNode->data = v;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << endl;
    }

    void Delete() {
        if (front == nullptr) {
            cout << "Underflow" << endl;
            return;
        }

        Node* temp = front;
        cout << "Delete an element: " << front->data << endl;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
        cout << endl;
    }

    void PrintQueue() {
        cout << "Print current queue: ";
        if (front == nullptr) {
            cout << "Empty" << endl;
        } else {
            Node* temp = front;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int Num;

    cout << "1) Insert element" << endl;
    cout << "2) Delete element" << endl;
    cout << "3) Print current queue" << endl;
    cout << "4) Exit" << endl;

    while (true) {
        cout << "Enter your choice: ";
        cin >> Num;

        if (Num == 1) q.Insert();
        else if (Num == 2) q.Delete();
        else if (Num == 3) q.PrintQueue();
        else if (Num == 4) {
            cout << "Exit" << endl;
            break;
        }
        else cout << "Invalid choice" << endl;
    }

    return 0;
}

