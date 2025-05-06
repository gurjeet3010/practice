#include<stdio.h>

void printaddress(int n);
 
int main()
{
    int n = 4;

    printf("%u\n",&n);
    printaddress(n);

    return 0;
}

void printaddress(int n)
{
    printf("%u\n", &n);
}