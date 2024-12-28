#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> a;

    a.push(10);
    a.push(20);
    a.push(30);

    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
    return 0;
}
