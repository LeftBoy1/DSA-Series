
#include <stdio.h>

int q[10];
int front = -1, rear = -1;

void enqueue(int x) {

    if (rear == 9) {
        printf("Queue is full\n");
        return;
    }

    if (front == -1) {
        front = 0;
    }

    q[++rear] = x;
}

void dequeue() {

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void peek() {

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", q[front]);
}

void display() {

    int i;

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    for (i = front; i <= rear; i++) {
        printf("%d ", q[i]);
    }

    printf("\n");
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(40);
    enqueue(50);

    display();

    peek();

    return 0;
}
