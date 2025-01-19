#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next,*prev;

    Node(int new_data){
        data=new_data;
        next=prev=NULL;
    }
};

void Traverse(Node*head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<" "<<curr->data;
        curr=curr->next;
    }
    cout<<endl;
}

void Reverse(Node *head){
    if(head==NULL)
        return;

    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }

    while(curr!=NULL){
        cout<<" "<<curr->data;
        curr=curr->prev;
    }
    cout<<endl;
}

int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->prev=head;
    head->next->next=new Node(3);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(4);
    head->next->next->next->prev=head->next->next;

    cout<<"Traverse Linked List:";
    Traverse(head);

    cout<<"Rraverse Linked List:";
    Reverse(head);

    return 0;
}
