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
    int n_th=n-1;
    int res=Fibo(n_th);
    cout<<n<<"th fibonacci number is: "<<res<<endl;
}
