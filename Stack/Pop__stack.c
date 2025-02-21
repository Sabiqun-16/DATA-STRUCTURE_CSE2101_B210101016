#include <stdio.h>

#define MAX 100

int stack[MAX], top = -1;

void Pop() {
    if (top <= -1) {
        printf("Underflow\n");
    } else {
        printf("%d\n", stack[top]);
        top--;
    }
}

void Print() {
    if (top >= 0) {
        printf("Stack elements are: ");
        for(int i=0;i<=top;i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("Stack is empty\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int s = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < s; i++) {
        if (top >= MAX - 1) {
            printf("Overflow\n");
        } else {
            top++;
            stack[top] = arr[i];
        }
    }

    printf("1) Display stack\n");
    printf("2) Pop from stack\n");
    printf("3) Exit\n");

    int ch;
    while (1) {
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        if (ch == 1) Print();
        else if (ch == 2) {
            printf("Enter value to be poped: ");
            Pop();
        } else if (ch == 3) {
            printf("Exiting the program...\n");
            break;
        } else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
