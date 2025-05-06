#include<stdio.h>
#include<math.h>
// switch operator (a.) cases can be in any order (b.)nested switch cases are allowed
int main()
{
    int choice;
    float a, b;
    printf("Choose desired option:\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Division\n");
    printf("4. Power\n");
    scanf("%d",&choice);
    printf("Enter number a: ");
    scanf("%f",&a);
    printf("Enter number b: ");
    scanf("%f",&b);

    switch(choice){
        case 1:         //addition
        {
            printf("Sum of two numbers are: %f", a + b);
            break;
        }
        case 2:         //substraction
        {
            printf("Substraction of two numbers are: %f", a - b);
            break;
        }
        case 3:         //Division
        {
            printf("Division of two numbers are: %f", a / b);
            break;
        }
        case 4:         //power
        {
            printf("Power of number is: %d", pow(a,b));
            break;
        }
        default:
        {
            printf("Please enter valid option...");
        }
    }
    return 0;
}