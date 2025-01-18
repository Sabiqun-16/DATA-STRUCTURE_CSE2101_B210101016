#include<bits/stdc++.h>
using namespace std;

void Hanoi(int disk,char from,char to,char via){
    if(disk==1)
        cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
    else{
        Hanoi(disk-1,from,via,to);
        cout<<"Move disk "<<disk<<" from "<<from<<" to "<<to<<endl;
        Hanoi(disk-1,via,to,from);
    }
}

int main()
{
    int disk=3;
    char from='A';
    char to='B';
    char via='C';
    Hanoi(disk,from,via,to);
}
