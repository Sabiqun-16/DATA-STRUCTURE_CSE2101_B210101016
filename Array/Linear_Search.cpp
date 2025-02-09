#include<bits/stdc++.h>
using namespace std;

int Search(vector<int>&arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key) return i;
    }
     return -1;


}

int main() {
    int s;
    cout << "Enter array size : " ;
    cin >> s;
    cout << "\nEnter array : " ;
    vector<int>arr(s);
    for (int i = 0; i <s;i++){
        cin>>arr[i];
    }
    int key;
    cout << "\nEnter a key : " ;
    cin>>key;
    int res=Search(arr,key);
    if (res==-1) cout <<"\nNot present" << endl;
    else
        cout <<"\nPresent at index : "<< res<<endl;;
    return 0;
}
