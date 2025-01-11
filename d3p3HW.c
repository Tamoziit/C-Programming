#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("The first %d fibonacci numbers are : \n", n);
    for(int i=0; i<n; i++){
        printf("%d\t", a);
        c = a+b;
        a = b;
        b = c;
    }
}