#include <stdio.h>
#include <stdlib.h>
void multi(int **arr1,int **arr2,int r,int c){
    int i,j,k;
    int **marr = malloc(sizeof(int*)*r);
    for(i=0;i<r;i++){
        marr[i] = malloc(sizeof(int)*c);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            marr[i][j]=0;
            for(k=0;k<c;k++){
                marr[i][j]+=arr1[i][j]*arr2[j][i];
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",marr[i][j]);
        }
        printf("\n");
    }


}
int main(){
    int **arr1,**arr2;
    int r,c,i,j;
    printf("Enter rows:");
    scanf("%d",&r);
    printf("Enter columns:");
    scanf("%d",&c);
    arr1 = (int**)malloc(sizeof(int*)*r);
    arr2 = (int**)malloc(sizeof(int*)*r);
    for(i=0;i<r;i++){
        arr1[i]=(int*)malloc(sizeof(int)*c);
        arr2[i]=(int*)malloc(sizeof(int)*c);
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Element of arr 1 : ");
            scanf("%d",&arr1[i][j]);
            printf("Element of arr 2 : ");
            scanf("%d",&arr2[i][j]);
        }
    }
    multi(arr1,arr2,r,c);
    return 0;
}