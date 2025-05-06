#include <stdio.h>

/*
    n = number of elements in array
    search = search element
    c = loop index
*/

int main()
{
    int array[100], search , c, n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (c = 0; c < n ; c ++)
    {
        scanf("%d", &array [c]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);
    for (c = 0; c < n ; c ++)
    {
        if(array[c] == search)
        {
            printf("%d is present at location %d", search, c + 1);
            break;
        }
    }
    if (c == n)
    {
        printf("%d is not present in array\n", search);
    }
    return 0;
}
