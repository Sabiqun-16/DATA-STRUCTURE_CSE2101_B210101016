#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void Print(Node* head){
    struct Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
    cout<<"NULL"<<endl;
}
Node* DeleteFirstNode(Node* head){
    if(head==NULL){
        cout<<"Memory Allocation Failed"<<endl;
        return NULL;
    }
    Node* newNode=head;
    head=head->next;
    delete newNode;
    return head;
}
int main()
{
    cout<<"Link List ";
    Node* head= new Node(4);
    head->next= new Node(7);
    head->next->next= new Node(8);
    head->next->next->next= new Node(2);
    Print(head);

    cout<<"After Delete :";
    head=DeleteFirstNode(head);
    Print(head);
    return 0;
}

