#include <stdio.h>

int s[10];
int top = -1;

void push(int x){

    if (top == 9)
    {
        printf("Stack is full\n");
        return;
    }
    s[++top] = x;
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

    printf("Top element: %d\n", s[top]);
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
        printf("%d ", s[i]);
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
