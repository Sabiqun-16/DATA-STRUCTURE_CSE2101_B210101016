#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void Insert(int arr[],int n,int k,int e){
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
        cout<<"Invlaid Position!"<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter a size: ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k,e;
    cout<<"Enter position(k) and element(e):";
    cin>>k>>e;
    Insert(arr,n,k,e);
    return 0;
}

