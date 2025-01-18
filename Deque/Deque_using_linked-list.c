#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void InsertFront(int n) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->prev = NULL;
    newNode->next = front;

    if (front == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        front->prev = newNode;
        front = newNode;
    }
    printf("Insert element at the front : %d\n", n);
}

void InsertRear(int n) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->next = NULL;
    newNode->prev = rear;

    if (rear == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Insert element at the rear : %d\n", n);
}

void DeleteFront() {
    if (front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Delete element from the front : %d\n", temp->data);

    front = front->next;
    if (front == NULL) {
        rear = NULL;
    } else {
        front->prev = NULL;
    }
    free(temp);
}

void DeleteRear() {
    if (rear == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node* temp = rear;
    printf("Delete element from the rear : %d\n", temp->data);

    rear = rear->prev;
    if (rear == NULL) {
        front = NULL;
    } else {
        rear->next = NULL;
    }
    free(temp);
}

void GetFront() {
    if (front == NULL) {
        printf("Deque is empty\n");
    } else {
        printf("Element at the front: %d\n", front->data);
    }
}

void GetRear() {
    if (rear == NULL) {
        printf("Deque is empty\n");
    } else {
        printf("Element at the rear: %d\n", rear->data);
    }
}

void Print() {
    if (front == NULL) {
        printf("Deque is empty\n");
        return;
    }

    struct Node* temp = front;
    printf("Elements in the deque: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    InsertFront(20);
    InsertFront(10);
    InsertRear(30);
    InsertRear(50);
    InsertRear(80);

    Print();

    GetFront();
    GetRear();

    DeleteFront();
    DeleteRear();

    Print();

    return 0;
}

