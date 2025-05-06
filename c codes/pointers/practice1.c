#include <stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;    //pointer variable declared 

    //address
    printf("%p\n", &age);   //hexadecimal address
    printf("%u\n", ptr);   //unsigned address
    printf("%u\n", &ptr);   //address of ptr
    printf("%d\n", *ptr);    //value at ptr
    printf("%d\n", *(&age)); //value at address of age
    return 0;
}