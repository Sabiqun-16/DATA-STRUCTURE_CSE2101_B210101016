#include<bits/stdc++.h>
using namespace std;


int Fibo(int n){
    if(n<=1) return n;
    else return Fibo(n-2)+Fibo(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<"fibonacci number is: ";
    for(int i=0;i<n;i++) cout<<Fibo(i)<<" ";
}

