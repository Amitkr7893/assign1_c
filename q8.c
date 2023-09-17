#include <stdio.h>
#include<math.h>
int main()
{
    int n, orig, res = 0,no_of_digit=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    orig = n;

    while(n){
        n/=10;
        no_of_digit++;
    }
    n = orig;

    while (n){
        int r = n % 10;
        res += pow(r,no_of_digit);
        n /= 10;
    }
    if (res == orig) printf("Its an Armstrong No. %d",res);
    else printf("Its not an Armstrong No. %d",res);

    return 0;
}