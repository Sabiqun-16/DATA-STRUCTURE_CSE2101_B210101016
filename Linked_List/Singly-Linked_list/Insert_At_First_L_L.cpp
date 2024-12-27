#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

Node *head= NULL;

void Print(){
    struct Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
    cout<<"NULL"<<endl;
}
void InsertAtFirst(int data){
    struct Node* newNode=new Node();
    if(newNode==NULL){
        cout<<"Memory Allocation Failed"<<endl;
        return;
    }
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
int main()
{


    cout<<"Number of Node: ";
    int n;
    cin>>n;
    cout<<"Values of the node: ";
    int k;

    while(n--){
        cin>>k;
        InsertAtFirst(k);
    }
    cout<<"Insert at end: ";
    Print();

    return 0;
}

