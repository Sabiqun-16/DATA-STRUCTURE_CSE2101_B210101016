#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
               swap(arr[i],arr[j]);
           }
        }
    }
}
int main()
{
    cout<<"Enter array size---";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Unsorted Array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    BubbleSort(arr,n);
    cout<<"Sorted Array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
