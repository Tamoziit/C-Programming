#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float sp, ar;
    printf("Enter sides\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("It is a triangle\n");
        sp = (a + b + c) / 2.0;
        ar = sp * (sp - a) * (sp - b) * (sp - c);
        ar = sqrt(ar);
        printf("Area = %f\n", ar);
        if (a == b && b == c)
        {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Isosceles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }
        if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
        {
            printf("Right Angled Triangle\n");
        }
        else
        {
            printf("Not a Right Angled Triangle\n");
        }
    }
    else
    {
        printf("Triangle not Possible\n");
    }
    return 0;
}