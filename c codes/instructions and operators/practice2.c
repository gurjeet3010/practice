#include<stdio.h>

int main()
{
    //if its sunday & its snowing print true(1)
    int issunday = 1;
    int issnowing = 1;
    printf("%d\n", issunday && issnowing);

    //if its monday or its raining print true(1)
    int ismonday = 0;
    int israining = 1;
    printf("%d\n", ismonday || israining);

    // if a number is greater than 9 & less than 100 then print true(1)
    int a;
    printf("Enter a number(2 digit): ");
    scanf("%d",&a);
    printf("%d\n", (a>9) && (a<100));
    return 0;
}