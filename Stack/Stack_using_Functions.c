#include <stdio.h>

int arr[10];
int top = -1;

void push(int value){

    if (top == 9)
    {
        printf("Stack is full\n");
        return;
    }
    arr[++top] = value;
}

void pop(){
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    top--;
}

void peek(){
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", arr[top]);
}

void display(){

    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    for (i = top; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);

    display();

    pop();
    pop();

    display();

    push(40);
    push(50);

    display();

    peek();

    return 0;
}
