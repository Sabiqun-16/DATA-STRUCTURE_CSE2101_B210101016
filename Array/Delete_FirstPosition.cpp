#include<bits/stdc++.h>
using namespace std;

void traverse(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteFirst(int arr[],int &size){
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
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

    deleteFirst(arr,size);
    cout<<"\nAfter deletion : " ;
    traverse(arr,size);

    return 0;
}

