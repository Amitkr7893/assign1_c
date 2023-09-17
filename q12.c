#include <stdio.h>
#include <math.h>
int main()
{
    int ch, n;
    printf("Choose One from Below : \n1) Decimal to Binary\n2) Binary to Decimal\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter a Decimal no : ");
        scanf("%d", &n);
        printf("The Binary Equivalent is : ");
        int rem, res = 0, place = 1;
        while (n)
        {
            rem = n % 2;
            n /= 2;
            res = res + (place * rem);
            place *= 10;
        }
        printf("%d", res);
        break;
    case 2:
        printf("Enter a Binary no : ");
        scanf("%d", &n);
        printf("The Decimal Equivalent is : ");
        int remm, ress = 0, p = 0;
        while (n)
        {
            remm = n % 10;
            n /= 10;
            ress = ress + (remm * pow(2,p++));
        }
        printf("%d", ress);
        break;

    default:
        printf("Please choose from below!");
        break;
    }
    return 0;
}