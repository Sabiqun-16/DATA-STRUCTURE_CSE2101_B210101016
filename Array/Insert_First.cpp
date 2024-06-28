#include<bits/stdc++.h>
using namespace std;

void InsertFirst(int *arr,int n,int e){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=e;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e;
    cin>>e;
    cout<<"Before insert:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    InsertFirst(arr,n,e);
    cout<<"After insert:";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


