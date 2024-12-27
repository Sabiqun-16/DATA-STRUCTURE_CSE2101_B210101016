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
Node* DeleteLastNode(Node* head){
    if(head==NULL){
        cout<<"Memory Allocation Failed"<<endl;
        return NULL;
    }
    Node* ptr=head;
    while(ptr->next!=NULL && ptr->next->next!=NULL){
        ptr=ptr->next;
    }
    delete ptr->next;
    ptr->next=NULL;
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
    head=DeleteLastNode(head);
    Print(head);
    return 0;
}

