#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void linkedlistTraversal(struct Node* ptr){
    while(ptr != NULL)
    {
    printf("Element: %d\n",ptr->data);
    ptr = ptr -> next;
    }
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* tail;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    //linking first node with second node
    head -> data = 6;
    head -> next = second;

    //linking second node with third node
    second -> data = 35;
    second -> next = third;

    //linking third node with tail node
    third -> data = 20;
    third -> next = tail;

    //terminating the list
    tail -> data = 56;
    tail -> next = NULL;

    linkedlistTraversal(head);
    
    return 0;
}