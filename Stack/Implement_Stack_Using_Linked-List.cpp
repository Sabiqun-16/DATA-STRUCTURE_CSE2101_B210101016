#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    void Push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << value << " to the stack." << endl;
    }

    void Pop() {
        if (top == nullptr) {
            cout << "Underflow" << endl;
        } else {
            cout << "The popped element is: " << top->data << endl;
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void Print() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements are: ";
            Node* current = top;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int ch, k;

    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;

    while (true) {
        cout << "\nEnter choice: ";
        cin >> ch;

        if (ch == 1) {
            cout << "Enter value to be pushed: ";
            cin >> k;
            stack.Push(k);
        }
        else if (ch == 2) {
            stack.Pop();
        }
        else if (ch == 3) {
            stack.Print();
        }
        else if (ch == 4) {
            cout << "Exiting the program..." << endl;
            break;
        }
        else {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}

