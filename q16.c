#include <stdio.h>
int main()
{
    int i, j, h, k = 0, c1 = 0, c2 = 0;
    printf("Enter the height of Pattern : ");
    scanf("%d", &h);
    for (i = 1; i <= h; ++i)
    {
        for (j = 1; j <= h - i; ++j)
        {
            printf("  ");
            ++c1;
        }
        while (k != 2 * i - 1)
        {
            if (c1 <= h - 1)
            {
                printf("%d ", i + k);
                ++c1;
            }
            else
            {
                ++c2;
                printf("%d ", (i + k - 2 * c2));
            }
            ++k;
        }
        c2 = c1 = k = 0;
        printf("\n");
    }
    return 0;
}