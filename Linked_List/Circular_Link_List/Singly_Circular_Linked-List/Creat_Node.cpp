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

int main() {
    Node* head = new Node(10);

    head->next = head;

    cout << "Node data: " << head->data << endl;

    delete head;

    return 0;
}

