#include<stdio.h>
#include<math.h>
// same precedence
 int main()
 {
    int x = 4 * 3 / 6 * 2;      //associativity ...left to right
    printf("%d",x);
    return 0;
 }
 /* 
 precedence...(high to low)
    (,)
    *,/,%
    +,-
    = (assignment operator)
 */