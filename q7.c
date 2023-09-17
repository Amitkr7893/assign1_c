#include <stdio.h>
int main()
{
    int n,a=0,b=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    if(n<1) printf("Invalid Number!");
    if(n==1) printf("%d",a);
    if(n==2) printf("%d %d",a,b);
    if(n>2){
        printf("%d %d ",a,b);
        for(int i=0;i<n-2;i++){
            int c = a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }
}