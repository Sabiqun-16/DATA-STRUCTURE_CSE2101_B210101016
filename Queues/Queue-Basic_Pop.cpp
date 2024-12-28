#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> a;

    a.push(10);
    a.push(20);
    a.push(30);

    //remove element from the front
    a.pop();
    cout<<"After pop: ";
    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }

    return 0;
}

