#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Invalid Number!");
    }
    else
    {
        printf("The prime numbers are : ");
        for (int i = 2; i <= n; i++)
        {
            int x = i;
            int flag = 0;

            for (int j = 2; j <= x / 2; j++)
            {
                if (x % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) printf("%d ", i);
        }
    }
}