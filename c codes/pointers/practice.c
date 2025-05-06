#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;    //stores address of age variable
    int _age = *ptr;    //assigns value of address stored in ptr variable

    printf("%d", _age);
    return 0;
}
/*      Declaring pointers
        int *ptr;
        char *ptr;
        float *ptr;
*/