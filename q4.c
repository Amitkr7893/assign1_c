#include <stdio.h>
int main()
{
    int n,j=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    printf("The reverse of the no : ");
    while(n>0){
        printf("%d",n%10);
        n/=10;
    }
}