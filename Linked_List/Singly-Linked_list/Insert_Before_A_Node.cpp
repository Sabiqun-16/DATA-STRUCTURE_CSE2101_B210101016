#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=nullptr;
    }
};

Node* insertBeforeKey(Node* head,int key,int newData){
    if (head==nullptr) return nullptr;

    if (head->data==key){
        Node* new_node=new Node(newData);
        new_node->next=head;
        return new_node;
    }

    head->next=insertBeforeKey(head->next,key,newData);
    return head;
}

void Print(Node* node){
    Node* curr=node;
    while (curr != nullptr){
        cout<<curr->data<< " ";
        curr=curr->next;
    }
}

int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    cout<<"Link List: ";
    Print(head);
    cout<<endl;

    int newData=6;
    int key=2;
    head=insertBeforeKey(head,key,newData);
    cout<<"Link list before insertation: ";
    Print(head);

    return 0;
}
