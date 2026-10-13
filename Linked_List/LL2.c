
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertBeginning(int x) {

    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void insertEnd(int x) {

    struct Node *newNode, *temp;
    newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteBeginning() {

    struct Node *temp;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;

    free(temp);
}

void deleteEnd() {

    struct Node *temp;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}

void search(int x) {

    struct Node *temp = head;
    int pos = 1;

    while (temp != NULL) {

        if (temp->data == x) {
            printf("Element found at position %d\n", pos);
            return;
        }

        temp = temp->next;
        pos++;
    }

    printf("Element not found\n");
}

void count() {

    struct Node *temp = head;
    int c = 0;

    while (temp != NULL) {
        c++;
        temp = temp->next;
    }

    printf("Total nodes: %d\n", c);
}

void reverse() {

    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next;

    while (current != NULL) {

        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void display() {

    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {

    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();

    insertBeginning(5);

    display();

    deleteBeginning();

    display();

    deleteEnd();

    display();

    search(20);

    count();

    reverse();

    display();

    while (head != NULL) {
        deleteBeginning();
    }

    return 0;
}
