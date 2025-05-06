#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    //linking first node with second node
    head -> data = 6;
    head -> next = second;

    //linking second node with third node
    second -> data = 35;
    second -> next = third;

    //terminating the list
    third -> data = 20;
    third -> next = NULL;
    
    return 0;
}