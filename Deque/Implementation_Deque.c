#include<stdio.h>

int deque[5];
int f=-1,r=-1;

void InsertFront(int n){
    if((f==0 && r==5-1) || (f==r+1)) printf("Overflow");
    else if((f==-1) && (r==-1)){
        f=r=0;
        deque[f]=n;
    }
    else if(f==0){
        f=5-1;
        deque[f]=n;
    }
    else{
        f=f-1;
        deque[f]=n;
    }
}

void InsertRear(int n){
    if((f==0 && r==5-1) || (f==r+1)) printf("Overflow");
    else if((f==-1) && (r==-1)){
        r=0;
        deque[r]=n;
    }
    else if(r==5-1){
        r=0;
        deque[r]=n;
    }
    else{
        r++;
        deque[r]=n;
    }

}

void Print(){
    int i=f;
    printf("\nElements in a deque are: ");

    while(i!=r){
        printf("%d ",deque[i]);
        i=(i+1)%5;
    }
    printf("%d",deque[r]);
}

void getfront(){
    if((f==-1) && (r==-1))  printf("Deque is empty");
    else printf("\nThe value of the element at front is: %d", deque[f]);

}

void getrear(){
    if((f==-1) && (r==-1)) printf("Deque is empty");
    else printf("\nThe value of the element at rear is : %d", deque[r]);

}

void delete_front(){
    if((f==-1) && (r==-1)) printf("Deque is empty");
    else if(f==r){
        printf("\nThe deleted element is : %d", deque[f]);
        f=-1;
        r=-1;

    }
    else if(f==(5-1)){
             printf("\nThe deleted element is : %d", deque[f]);
             f=0;
    }
    else{
        printf("\nThe deleted element is : %d", deque[f]);
        f=f+1;
    }
}

void delete_rear(){
    if((f==-1) && (r==-1)) printf("Deque is empty");
    else if(f==r){
        printf("\nThe deleted element is : %d", deque[r]);
        f=-1;
        r=-1;

    }
    else if(r==0){
             printf("\nThe deleted element is : %d", deque[r]);
             r=5-1;
    }
    else{
        printf("\nThe deleted element is : %d", deque[r]);
        r=r-1;
    }
}

int main()
{
    InsertFront(20);
    InsertFront(10);
    InsertRear(30);
    InsertRear(50);
    InsertRear(80);
    Print();
    getfront();
    getrear();
    delete_front();
    delete_rear();
    Print();
    return 0;
    }
