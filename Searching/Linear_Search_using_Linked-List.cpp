#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int v):data(v),next(nullptr){}
};

int LinearSearch(Node* head,int k){
    int i=0;
    Node* temp=head;
    while(temp!=nullptr){
        if (temp->data==k){
            return i;
        }
        temp=temp->next;
        i++;
    }
    return -1;
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;

    cout<<"\nEnter the elements: ";
    int val;
    Node* head=nullptr;
    Node* tail=nullptr;

    for(int i=0;i<n;i++){
        cin>>val;
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    cout<<"\nEnter the element to search for: ";
    int k;
    cin>>k;

    int res=LinearSearch(head,k);

    if(res!= -1) cout<<"\nElement found at the index: "<<res<<endl;
    else cout<<"\nNot found."<<endl;

    return 0;
}

