#include<stdio.h>
int main(){
    int h;
    printf("Enter Length of Triangle : ");
    scanf("%d",&h);
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < 2 * (h - i) - 1; j++){
            printf(" ");
        }
        for (int k = 0; k < (2*i)+1; k++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}