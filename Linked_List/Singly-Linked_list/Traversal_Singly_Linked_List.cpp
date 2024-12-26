#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};
void Traverse(node* ptr){
    while(ptr !=NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
}

int main()
{
    node* Head,*first,*second,*third;

    Head=(node*)malloc(sizeof(node));
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));


    Head->next=first;

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    Traverse(Head->next);

    return 0;
}
