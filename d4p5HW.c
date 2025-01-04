#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    n=n/2+1;
    #include <stdio.h> 
    for (int i = 0; i < 2 * n - 1; i++) { 
        int comp; 
        if (i < n)
            comp = 2 * i + 1; 
        else
            comp = 2 * (2 * n - i) - 3; 
        for (int j = 0; j < comp; j++)
            printf(" ");
        for (int k = 0; k < 2 * n - comp; k++)
            printf("* ");
        printf("\n"); 
    } 
    return 0; 
}
