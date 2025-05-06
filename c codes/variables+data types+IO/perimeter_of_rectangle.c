#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter length of side a: ");
    scanf("%d",&a);

    printf("Enter length of side b: ");
    scanf("%d",&b);

    printf("Perimeter of rectangle: %d", (2*a) + (2*b));
    return 0;
}