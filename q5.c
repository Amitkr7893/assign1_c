#include <stdio.h>
int main()
{
    int n,res=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        res *=i; 
    }
    printf("The Factorial of the %d is : %d",n,res);
}