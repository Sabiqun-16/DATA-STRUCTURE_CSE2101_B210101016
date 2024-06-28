#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr,int n,int k){
    int first=0,last=n-1;
    int mid=first+(last-first)/2;
    while(first<=last){
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]<k)
            first=mid+1;
        else
            last=mid-1;

        mid=first+(last-first)/2;
    }
    return -1;
}


int main()
{
    int even[6]={7,4,2,5,6,8};
    int odd[5]={1,3,9,10,12};
    int EvenIndex=BinarySearch(even,6,12);
    cout<<"Even Index is "<<EvenIndex<<endl;
    int OddIndex=BinarySearch(odd,5,9);
    cout<<"Odd Index is "<<OddIndex<<endl;
    return 0;
}
