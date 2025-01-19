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

Node *insertAtFront(Node *head, int new_data) {
    Node *new_node = new Node(new_data);
    new_node->next = head;
    if (head != NULL)
        head->prev = new_node;
    return new_node;
}

Node *deleteAtFront(Node *head) {
    if (head == NULL) return NULL;
    Node *temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    delete temp;
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
    Node *head = new Node(2);
    head->next = new Node(3);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    cout << "Original Linked List:";
    printList(head);

    cout << "After inserting Node at the front:";
    int data = 1;
    head = insertAtFront(head, data);

    printList(head);

    cout << "After deleting Node at the front:";
    head = deleteAtFront(head);
    printList(head);

    return 0;
}

