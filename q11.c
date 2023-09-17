#include <stdio.h>
int main()
{
    int n1,n2,a,b;
    printf("Enter two numbers seperated by a space: ");
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;

    while(a!=b){
        if(a>b) a=a-b;
        else b=b-a;
    }
    printf("\nThe HCF of given no is : %d",a);
    printf("\nThe LCM of given no is : %d",(n1*n2)/a);

    return 0;
}