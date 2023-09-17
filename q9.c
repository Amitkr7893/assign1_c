#include <stdio.h>
int main()
{
    int n,orig,res=0;

    printf("Enter a Number : ");
    scanf("%d",&n);
    orig = n;
    while(n>0){
        int rem = n%10;
        res = res*10 + rem;
        n/=10;
    }

    if(res == orig) printf("Its a Palindrome No");
    else printf("Its not a Palindrome No");
    return 0;
}