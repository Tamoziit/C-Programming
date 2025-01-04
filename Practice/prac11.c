#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr,n,i,s;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    printf("Enter the elements of the array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element you want to search :");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(arr[i]==s){
            printf("Poisition of the element is : %d",i+1);
            return 1;
        }
    }
    if(arr[n-1]!=s)
        printf("Element not found");
    return 0;
}