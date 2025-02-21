#include<bits/stdc++.h>
using namespace std;

int sta[100],n=100,top=-1;

void Push(int v){
    if(top>=n-1) cout<<"Overflow"<<endl;
    else{
        top++;
        sta[top]=v;
    }
}

void Pop(){
    if(top<=-1) cout<<"Underflow"<<endl;
    else{
        cout<<"The popped element is :"<<sta[top]<<endl;
        top--;
    }
}

void Print(){
    if (top>=0){
        cout<<"Stack elements are: ";
        for(int i=0;i<=top;i++) cout<<sta[i]<<" ";
        cout<<endl;
    }
    else cout<<"Stack is empty"<<endl;
}

int main(){
    int ch,k;

    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;

    while(true){
        cout <<"\nEnter choice: ";
        cin>>ch;

        if(ch==1){
            cout<<"Enter value to be pushed: ";
            cin>>k;
            Push(k);
        }
        else if(ch==2) Pop();
        else if(ch==3) Print();
        else if (ch==4){
            cout<<"Exiting the program..."<<endl;
            break;
        }
        else cout<<"Invalid Choice"<<endl;
    }

    return 0;
}

