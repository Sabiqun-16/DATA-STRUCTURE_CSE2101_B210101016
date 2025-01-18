#include<bits/stdc++.h>
using namespace std;


double Fact(int n){
    if(n==0) return 1;
    else return n*Fact(n-1);
}

int main()
{
    int n;
    while(true){
        cin>>n;
        cout<<n<<"th Factorical Number: "<<Fact(n)<<endl;
    }
    return 0;
}
