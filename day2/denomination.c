#include <stdio.h>
#include <math.h>
int main()
{
    int n, d;
    printf("Enter the Amount: \n");
    scanf("%d", &n);
    d=n/100;
    n=n%100;
    if(d!=0)
    {
        printf("Rs. 100: %d\n", d);
    }
    d=n/50;
    n=n%50;
    if(d!=0)
    {
        printf("Rs. 50: %d\n", d);
    }
    d=n/10;
    n=n%10;
    if(d!=0)
    {
        printf("Rs. 10: %d\n", d);
    }
    d=n/5;
    n=n%5;
    if(d!=0)
    {
        printf("Rs. 5: %d\n", d);
    }
    d=n/2;
    n=n%2;
    if(d!=0)
    {
        printf("Rs. 2: %d\n", d);
    }
    if(n!=0)
    {
        printf("Rs. 1: %d\n", n);
    }
    return 0;
}