#include<stdio.h>
//to check if a number is divisible by 2 or not
int main()
{
    int a;
    printf("Enter a number to check whether it is divisible by 2 or not: ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("Given number is even");
    }
    else{
        printf("Given number is odd");
    }
    return 0;
}
/*
    % ----> arithmetic operator
    == ----> relational operator
*/