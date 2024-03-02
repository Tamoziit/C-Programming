#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int a, b, c;
    float r;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("Enter:\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
    scanf("%d", &c);
    if(c == 1)
    {
        r=a+b;
    }
    else if(c == 2)
    {
        r=a-b;
    }
    else if(c == 3)
    {
        r=a*b;
    }
    else if(c == 4)
    {
        if(b == 0)
        {
            printf("Division not possible");
            exit(0);
        }
        r=a/(float)b;
    }
    else
    {
        printf("Invalid Choice");
        exit(0);
    }
    printf("Result: %f", r);
    return 0;
}