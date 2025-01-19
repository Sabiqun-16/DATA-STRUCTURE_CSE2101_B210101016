#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* prev;
    int data;
    Node* next;

    Node(int v){
        data=v;
        prev=next=nullptr;
    }
};

int main(){
    Node* head=new Node(45);

    head->prev=head;
    head->next=head;

    cout<<"Node data: "<<head->data<<endl;

    delete head;

    return 0;
}
