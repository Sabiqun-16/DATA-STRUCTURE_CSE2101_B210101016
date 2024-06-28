#include<bits/stdc++.h>
using namespace std;

void LastPos(int *arr,int n,int e){
    arr[n]=e;

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
    LastPos(arr,n,e);
    cout<<"After insert:";
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
