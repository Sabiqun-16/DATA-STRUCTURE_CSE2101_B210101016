#include<bits/stdc++.h>
using namespace std;

void traverse(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteLast(int arr[],int &size){
    size--;
}

int main()
{
    cout<<"Enter array size : ";
    int size;
    cin>>size;
     cout<<"\nEnter array : ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nBefore deletion : " ;
    traverse(arr,size);

    deleteLast(arr,size);
    cout<<"\nAfter deletion : " ;
    traverse(arr,size);

    return 0;
}

