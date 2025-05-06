#include<stdio.h>
//program to print the average of 3 numbers
int main()
{
    int a, b, c;
    float avg;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("Enter number 3: ");
    scanf("%d",&c);

    avg =  (a + b + c)/3;
    printf("Average of numbers are: %f",avg);
    return 0;
}