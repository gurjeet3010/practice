#include<stdio.h>
//syntax:condition ? if True : something if False; 
int main()
{
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult\n") : printf("not adult\n");  
    return 0;
}
//to avoid multiple lines in if-else condition ternery operator is used