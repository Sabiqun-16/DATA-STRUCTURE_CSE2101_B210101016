#include<bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[],int first,int last,int key){
    while(first<=last){
        int mid=first+(last-first)/2;
        if(arr[mid]==key)
            return mid;
        if(arr[mid]<key)
            first=mid+1;
        else
            last=mid-1;
    }
     return -1;
}


int main()
{
    cout<<"Enter array size : " ;
    int size;
    cin>>size;
    cout<<"\nEnter array : " ;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"\nEnter a Key : " ;
    int key;
    cin>>key;

    int res=Binarysearch(arr,0,size-1,key);
    if(res==-1) cout<<"\nNot found : " ;
    else cout<<"\nfound at position: "<<res ;

    return 0;
}
