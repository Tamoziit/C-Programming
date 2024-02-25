#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter 1st no.\n");
    scanf("%d", &a);
    printf("Enter 2nd no.\n");
    scanf("%d", &b);
    printf("Numbers before swapping: %d, %d\n", a, b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("Numbers after swapping: %d, %d", a, b);
    return 0;
}