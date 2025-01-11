#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of Lines :");
    scanf("%d",&n);
    for(i=1;i<=(n/2)+1;i++){
        for(j=1;j<i;j++)
            printf(" ");
        for(j=1;j<=n-(2*i)+2;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=n/2;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=n-(2*i)+2;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}