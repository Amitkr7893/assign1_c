#include <stdio.h>
int main()
{
    int n, flag = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n <= 1) printf("Invalid no!");
    else{
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("%d is a Prime No.", n);
        else printf("%d is not a Prime No.", n);
    }

    return 0;
}