#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows (odd): ");
    scanf("%d",&n);
    n=n/2+1;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=2*(n-i);j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    for (i=n-1;i>=1;i--){
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<=2*(n-i);j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}