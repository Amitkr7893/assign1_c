#include <stdio.h>
#include <math.h>
int main()
{
    int ch;
    double a, b;

    printf("Choose from 1 to 5 : \n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exponential\n");

    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter two no seperated by a space : ");
        scanf("%lf %lf", &a, &b);
        printf("Result : %.2lf", a + b);
        break;
    case 2:
        printf("Enter large no : ");
        scanf("%lf", &a);
        printf("Enter smaller no : ");
        scanf("%lf", &b);
        printf("Result : %.2lf", a - b);
        break;
    case 3:
        printf("Enter two no seperated by a space : ");
        scanf("%lf %lf", &a, &b);
        printf("Result : %.2lf", a * b);
        break;
    case 4:
        printf("Enter Divident : ");
        scanf("%lf", &a);
        printf("Enter Divisor : ");
        scanf("%lf", &b);
        printf("Result : %.2lf", a / b);
        break;
    case 5:
        printf("Enter a no : ");
        scanf("%lf", &a);
        printf("Enter power : ");
        scanf("%lf", &b);
        printf("Result : %.2lf", pow(a, b));
        break;

    default:
        printf("Please enter a valid no!");
    }

    return 0;
}