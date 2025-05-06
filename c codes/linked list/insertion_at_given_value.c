#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void listTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insertAfterValue(struct Node *head, int targetValue, int val) {
    struct Node *temp = head;

    while (temp != NULL && temp->data != targetValue) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", targetValue);
    } else {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *tail;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    tail = (struct Node *)malloc(sizeof(struct Node));

    head->data = 11;
    head->next = second;

    second->data = 65;
    second->next = tail;

    tail->data = 36;
    tail->next = NULL;

    printf("Original list:\n");
    listTraversal(head);

    int targetValue = 65;
    int newValue = 2;
    insertAfterValue(head, targetValue, newValue);

    printf("\nAfter inserting %d after node with value %d:\n", newValue, targetValue);
    listTraversal(head);

    return 0;
}
