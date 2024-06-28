#include<bits/stdc++.h>
using namespace std;

bool LinearSearch(int *arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            return 1;
    }
    return 0;
}

int main()
{
    cout<<"Enter Array Size---"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a Keyword---"<<endl;
    int k;
    cin>>k;
    bool found=LinearSearch(arr,n,k);
    if(found)
        cout<<"The element is found"<<endl;
    else
        cout<<"The element is found"<<endl;
    return 0;
}
