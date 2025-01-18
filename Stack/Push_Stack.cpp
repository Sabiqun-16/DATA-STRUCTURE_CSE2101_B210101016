#include<iostream>
using namespace std;

int stack[100],n=100,top=-1;

void Push(int v){
    if(top>=n-1) cout<<"Overflow"<<endl;
    else{
        top++;
        stack[top]=v;
    }
}

void Print(){
    if (top>=0){
        cout<<"Stack elements are: ";
        for(int i=top;i>=0;i--) cout<<stack[i]<<" ";
        cout<<endl;
    }
    else cout<<"Stack is empty"<<endl;
}

int main()
{
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Display stack"<<endl;
    cout<<"3) Exit"<<endl;
    int k,ch;
    while(true){
        cout <<"\nEnter choice: ";
        cin>>ch;

        if(ch==1){
            cout<<"Enter value to be pushed: ";
            cin>>k;
            Push(k);
        }
        else if(ch==2) Print();
        else if (ch==3){
            cout<<"Exiting the program..."<<endl;
            break;
        }
        else cout<<"Invalid Choice"<<endl;
    }
}
