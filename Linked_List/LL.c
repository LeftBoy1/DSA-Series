
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node *next;
};


struct Node* createNode(int value) {
    struct Node *newNode =
        (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}


void insert(struct Node **head, int value) {
    struct Node *newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}


void display(struct Node *head) {
    struct Node *temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


void deleteNode(struct Node **head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;

    free(temp);
    printf("First node deleted.\n");
}


void search(struct Node *head, int key) {
    int position = 1;

    while (head != NULL) {
        if (head->data == key) {
            printf("Element found at position %d.\n",
                   position);
            return;
        }

        head = head->next;
        position++;
    }

    printf("Element not found.\n");
}


int countNodes(struct Node *head) {
    int count = 0;

    while (head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}


void freeList(struct Node **head) {
    while (*head != NULL) {
        struct Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    struct Node *head = NULL;
    int choice, value;

    do {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert node\n");
        printf("2. Display list\n");
        printf("3. Delete first node\n");
        printf("4. Search element\n");
        printf("5. Count nodes\n");
        printf("6. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            freeList(&head);
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1) {
                    freeList(&head);
                    return 1;
                }
                insert(&head, value);
                break;

            case 2:
                display(head);
                break;

            case 3:
                deleteNode(&head);
                break;

            case 4:
                printf("Enter value to search: ");
                if (scanf("%d", &value) != 1) {
                    freeList(&head);
                    return 1;
                }
                search(head, value);
                break;

            case 5:
                printf("Total nodes = %d\n",
                       countNodes(head));
                break;

            case 6:
                freeList(&head);
                printf("Program terminated.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
