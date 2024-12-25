#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* next;
};

void Traverse(struct node* ptr) {
    while(ptr!=NULL){
        cout<<" "<<ptr->data;
        ptr=ptr->next;
    }
    cout<<endl;
}

struct node* Reverse(struct node* head) {
    struct node *prev=NULL,*curr=head,*nextNode=NULL;

    while(curr!=NULL){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

int main() {
    struct node *Head,*first,*second,*third;

    Head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    Head->next=first;

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    cout << "Given Linked List: ";
    Traverse(Head->next);

    Head->next = Reverse(Head->next);

    cout << "Reversed List: ";
    Traverse(Head->next);

    return 0;
}
