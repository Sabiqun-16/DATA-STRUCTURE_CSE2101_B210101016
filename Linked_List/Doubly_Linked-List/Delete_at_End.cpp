#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;

    Node(int new_data) {
        data = new_data;
        next = prev = NULL;
    }
};

Node *insertAtEnd(Node *head, int new_data) {
    Node *new_node = new Node(new_data);
    if (head == NULL) head = new_node;
    else {
      	Node *curr = head;
        while (curr->next != NULL)  curr = curr->next;
        curr->next = new_node;
        new_node->prev = curr;
    }
    return head;
}

Node *deleteAtEnd(Node *head) {
    if (head == NULL) return NULL;
    Node *curr = head;
    while (curr->next != NULL) curr = curr->next;
    if (curr->prev != NULL) curr->prev->next = NULL;
    else head = NULL; // This happens if there's only one node
    delete curr;
    return head;
}

void printList(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << " " << curr->data;
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    cout << "Original Linked List:";
    printList(head);

    cout << "After inserting Node at the end:";
    int data = 4;
    head = insertAtEnd(head, data);

    printList(head);

    cout << "After deleting Node at the end:";
    head = deleteAtEnd(head);
    printList(head);

    return 0;
}


