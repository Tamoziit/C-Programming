#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int any_to_decimal(int n, int b1)
{
    static int r, i;
    if(n>0)
    {
        int d=n%10;
        if(d>b1-1)
        {
            return -1;
        }
        r=r+d*pow(b1, i++);
        any_to_decimal(n/10, b1);
    }
    return r;
}

int decimal_to_any(int n, int b2)
{
    static int r, i;
    if(n>0)
    {
        int d=n%b2;
        r=r+d*pow(10, i++);
        decimal_to_any(n/b2, b2);
    }
    return r;
}

int main()
{
    int b1, b2, n;
    printf("Enter a no.\n");
    scanf("%d", &n);
    printf("Enter 1st base\n");
    scanf("%d", &b1);
    printf("Enter 2nd base\n");
    scanf("%d", &b2);
    if(b1<2 || b2<2 || b1>10 || b2>10)
    {
        printf("Invalid base\n");
        exit(0);
    }
    int x = any_to_decimal(n, b1);
    if(x == -1)
    {
        printf("Invalid No.\n");
        exit(0);
    }
    printf("Equivalent decimal = %d\n", x);
    int y = decimal_to_any(x, b2);
    printf("Equivalent no. in base %d = %d\n", b2, y);
    return 0;
}