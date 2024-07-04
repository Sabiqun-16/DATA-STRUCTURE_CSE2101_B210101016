#include<bits/stdc++.h>
#define ll long long int

using namespace std;

Insert(int *arr,int n,int k,int e){
    if(k<=n && k>=0){
        for(int i=n;i>k;i--){
            arr[i]=arr[i-1];
        }
        arr[k]=e;
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Invlaid Position"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter a size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int e,k;
    cout<<"Enter position(k) and element(e):";
    cin>>e>>k;
    Insert(arr,n,k,e);
    return 0;
}

