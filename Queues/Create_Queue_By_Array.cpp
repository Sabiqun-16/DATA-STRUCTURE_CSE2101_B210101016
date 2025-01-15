#include<bits/stdc++.h>
using namespace std;

int que[100],n=101,f=-1,r=-1;

void Insert(){
    int v;
    if(r==n-1) cout<<"Overflow"<<endl;
    else{
        if(f==-1) f=0;
        cout<<"Insert the element: ";
        cin>>v;
        r++;
        que[r]=v;
    }
    cout<<endl;
}

void Delete(){
    if(f==-1 || f>r){
        cout<<"Underflow"<<endl;
        return;
    }
    else{
        cout<<"Delete an element: "<<que[f]<<endl;
        f++;
        if(f>r) f=r=-1;
    }
    cout<<endl;
}


void PrintQueue(){
    cout<<"Print current queue: ";
    if(f==-1) cout<<"Empty"<<endl;
    else{
        for(int i=f;i<=r;i++) cout<<que[i]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    int Num;
    cout<<"1) Insert element"<<endl;
    cout<<"2) Delete element"<<endl;
    cout<<"3) Print current queue"<<endl;
    cout<<"4) Exit"<<endl;

    while (true){
        cout<<"Enter your choice : ";
        cin>>Num;

        if(Num==1) Insert();
        else if(Num==2) Delete();
        else if(Num==3) PrintQueue();
        else if(Num==4){
            cout<<"Exit"<<endl;
            break;
        }
        else cout<<"Invalid choice"<<endl;
    }

    return 0;
}
