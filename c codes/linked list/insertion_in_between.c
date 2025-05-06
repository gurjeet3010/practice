//insertion in between

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void listTravesal(struct Node * ptr)
{
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node * insertAtIndex(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i != (index-1))
    {
        p = p-> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    //allocating memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));

    //linking nodes
    head -> data = 1;
    head -> next = second;

    second -> data = 6;
    second -> next = third;

    third -> data = 52;
    third -> next = forth;

    forth -> data = 20;
    forth -> next = NULL;

    head = insertAtIndex(head, 63, 2);
    listTravesal(head);

    return 0;
}