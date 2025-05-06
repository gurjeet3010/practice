#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Upper case\n");
    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lower case\n");
    }
    else{
        printf("Not english letter");
    }
    return 0;
}
//debug this code