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
Node* DeleteKthNode(Node* head,int k){
    if(head==NULL){
        cout<<"Memory Allocation Failed"<<endl;
        return NULL;
    }

    if(k==1){
        Node* ptr = head;
        head = head->next;
        delete ptr;
        return head;
    }

    Node* ptr=head;
    for(int i=1;ptr!=NULL && i<k-1;i++){
        ptr=ptr->next;
    }

    if(ptr==NULL || ptr->next==NULL){
        cout<<"Node "<<k<<" does not exist."<<endl;
        return head;
    }

    Node* temp = ptr->next;
    ptr->next = ptr->next->next;
    delete temp;
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

    int k;
    cout<<"Enter the Kth postion: ";
    cin>>k;

    cout<<"After Delete "<<k<<"th node:";
    head=DeleteKthNode(head,k);
    Print(head);
    return 0;
}

