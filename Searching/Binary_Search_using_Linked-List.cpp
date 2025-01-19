#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int v):data(v),next(nullptr){}
};

Node* BinarySearch(Node* head,int k){
    vector<int>v;
    Node* temp=head;
    while(temp!=nullptr){
        v.push_back(temp->data);
        temp=temp->next;
    }

    int left=0,right= v.size()-1,mid;
    while(left<=right){
        mid=left+(right-left)/2;
        if(v[mid]==k){
            temp=head;
            while(temp!=nullptr){
                if(temp->data==k){
                    return temp;
                }
                temp=temp->next;
            }
        }
        else if(v[mid]<k) left=mid+1;
        else right=mid-1;
    }
    return nullptr;
}

void Display(Node* head) {
    while (head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;

    cout<<"Enter the elements: ";
    int val;
    Node* head=nullptr;
    Node* tail=nullptr;

    for(int i=0;i<n;i++){
        cin>>val;
        Node* newNode=new Node(val);
        if (head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    cout<<"\Linked List :";
    Display(head);

    cout<<"\nSorted elements for Binary Search: ";
    vector<int>v;
    Node* temp=head;
    while (temp!=nullptr) {
        v.push_back(temp->data);
        temp=temp->next;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    cout<<"\nEnter the element to search for: ";
    int k;
    cin>>k;

    Node* res=BinarySearch(head,k);

    if(res!=nullptr)
        cout<<"\nElement found in the linked list."<<endl;
    else
        cout<<"\nNot found."<<endl;

    return 0;
}

