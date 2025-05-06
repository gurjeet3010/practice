#include<stdio.h>
// assignment operator or shorthand operator
int main()
{
    int a = 4;
    int b = 5; 

    //a = a + b;
    a += b;         //same for -=, *=, /=, %=

    printf("%d\n",a);
    return 0; 
}