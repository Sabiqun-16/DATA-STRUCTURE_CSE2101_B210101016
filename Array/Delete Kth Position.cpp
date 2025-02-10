#include<bits/stdc++.h>
using namespace std;

void traverse(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void deleteKth(int arr[],int &size,int k){
    if(k<size && k>=0){
        for(int i=k;i<size-1;i++)
        arr[i]=arr[i+1];
    size--;
    }

    else cout<<"Invalid position"<<endl;
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

    int k;
    cout<<"Enter the position to delete :";
    cin>>k;

    cout<<"\nBefore deletion : " ;
    traverse(arr,size);

    deleteKth(arr,size,k);
    cout<<"\nAfter deletion : " ;
    traverse(arr,size);

    return 0;
}


