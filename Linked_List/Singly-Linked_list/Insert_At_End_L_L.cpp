#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node *head= NULL;

void Print(){
     Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
    cout<<"NULL"<<endl;
}
void InsertAtEnd(int data){
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL){
        cout<<"Memory Allocation Failed"<<endl;
        return;
    }
    newNode->data=data;
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node* temp=head;

    while(temp->next!=NULL){
        temp =temp->next;
    }
    temp->next=newNode;

}
int main()
{
    cout<<"Number of Node: ";
    int n;cin>>n;
    cout<<"Values of the node: ";
    int k;

    while(n--){
        cin>>k;
        InsertAtEnd(k);
    }
    cout<<"Insert at end: ";
    Print();

    return 0;
}
