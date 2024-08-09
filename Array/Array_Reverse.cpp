#include<bits/stdc++.h>
using namespace std;

void traverse(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before reverse : "<<endl;
    traverse(arr,size);

    cout<<"After reverse : "<<endl;
    reverse(arr,size);

    traverse(arr,size);
    return 0;
}
