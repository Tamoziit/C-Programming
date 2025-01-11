#include<stdio.h>
int main(){
    int a = 2,b = 5;
    printf("Initial Values : a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Final Values : a = %d, b = %d", a, b);
}