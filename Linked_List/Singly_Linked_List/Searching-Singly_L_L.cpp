#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data=data;
        next = NULL;
    }
};

void Searching(Node* head,int key){
    if (head==NULL){
        cout<<"Not Found"<<endl;
    }
    else if(head->data==key){
        cout<<"Found"<<endl;
    }
    else{
        Searching(head->next,key);
    }
}

int main()
{
    int n,key;
    cout<<"Number of nodes: ";
    cin>>n;
    Node* head=NULL;
    Node* temp=NULL;
    cout<<endl;

    cout<<"Given Linked list:"<<" ";
    for(int i=1;i<=n;++i){
        int value;
        cin>>value;

        Node* newNode=new Node(value);
        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=temp->next;
        }
    }
    cout<<endl;

    cout<<"Enter the key for search: ";
    cin>>key;
    cout<<endl;

    Searching(head,key);

    return 0;
}
