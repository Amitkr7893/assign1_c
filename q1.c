#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        printf("%d\n",i);
    }
    printf("The Sum of %d Natural no is : %d",n,n*(n+1)/2);
    
}

