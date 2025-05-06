#include<stdio.h>
int main()
{
    if((4>5) && (9>8))          //both the statements should be valid &&(AND operator)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }                                   //1 for true 0 for false
    printf("%d\n",(3>2) || (1>8));      //dono mei se koi bhi parameter valid ko ||(OR operator)
    printf("%d\n", !(5>1) && (3>4));      //true ko false aur false ko true krdega !(NOT operator)  
    return 0;
}

/*
    Operator precedence(top to bottom)
        !
        *,/,%
        +,-
        <,<=,>,>=
        ==,!=
        &&
        ||
        =
*/