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

void Pop(){
    if(top<=-1) cout<<"Underflow"<<endl;
    else{
        cout<<stack[top]<<endl;
        top--;
    }
}

void Print(){
    if (top>=0){
        cout<<"Stack elements are: ";
        for(int i=0;i<=top;i++) cout<<stack[i]<<" ";
        cout<<endl;
    }
    else cout<<"Stack is empty"<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < s; i++) {
        if(top>=n-1)
            cout<<"Overflow"<<endl;
        else {
            top++;
            stack[top]=arr[i];
        }
    }

    cout<<"1) Display stack"<<endl;
    cout<<"2) Push in stack"<<endl;
    cout<<"3) Pop in stack"<<endl;
    cout<<"4) Exit"<<endl;
    int ch;
    while(true){
        cout <<"\nEnter choice: ";
        cin>>ch;

        if(ch==1) Print();
        if(ch==2){
            cout<<"Enter value to be pushed: ";
            cin>>k;
            Push(k);
        }

         else if(ch==3){
            cout<<"Enter value to be poped: ";
            Pop();
        }
             
        else if (ch==4){
            cout<<"Exiting the program..."<<endl;
            break;
        }
        else cout<<"Invalid Choice"<<endl;
    }
}


