#include <stdio.h>
#include <stdlib.h>
int main(){
    int max=INT_MIN,n,i;
    int *arr;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    printf("Enter the elements of the array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (max<arr[i])
            max=arr[i];
    }
    printf("Max element of the array is : %d", max);

}