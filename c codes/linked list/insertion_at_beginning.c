//insert at beginning

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;     //self referencing structure
};

void listTravesal(struct Node * ptr){
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

struct Node * insertAtFirst(struct Node * first, int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> next = first;
    ptr -> data = data;
    return ptr;
}

int main()
{
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;   

    //allocate memory for nodes in the linked list in heap
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //linked first and second
    first -> data = 1;
    first -> next = second;

    //linked second and third
    second -> data = 45;
    second -> next = third;

    //linked third and fourth
    third -> data = 26;
    third -> next = fourth;

    //terminating the list
    fourth -> data = 64;
    fourth -> next = NULL;

    //listTravesal(first);
    first = insertAtFirst(first , 56);
    listTravesal(first);

    return 0;
}