#include <stdio.h>
int main() {
    int a = 2,b = 5,c;
    printf("Initial Values : a = %d, b = %d\n", a, b);
    c=a;
    a=b;
    b=c;
    printf("Final Values : a = %d, b = %d", a, b); 
}