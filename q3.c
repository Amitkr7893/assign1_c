#include <stdio.h>
int main()
{
    int n,j=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("%d\n",j++);
        j++;
    }
    printf("The Sum of %d Odd Natural no is : %d",n,n*n);
}
