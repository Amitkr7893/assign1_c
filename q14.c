#include<stdio.h>
int main(){
    int h;
    printf("Enter Length of Triangle : ");
    scanf("%d",&h);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j <i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}