#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int d): data(d),next(nullptr){}
};

void insertAfter(Node* prevNode, int newData){
    if (prevNode==nullptr) {
        cout<<"Previous node cannot be NULL"<<endl;
        return;
    }

    Node* newNode=new Node(newData);
    newNode->next=prevNode->next;

    prevNode->next=newNode;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);

    head->next=second;
    second->next=third;

    cout<<"Linked List: ";
    print(head);

    insertAfter(second, 4);

    cout<<"Linked List after insertion: ";
    print(head);

    return 0;
}

