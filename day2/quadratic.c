#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter coefficients:\n");
    scanf("%d %d %d", &a, &b, &c);
    float x1, x2;
    if(a == 0)
    {
        x1 = -c/(float)b;
        x2 = 0;
    }
    else
    {
        float d = b*b - 4*a*c;
        float sqd = sqrt(abs(d));
        if(d>0)
        {
            x1=(-b + sqd)/(float)(2*a);
            x2=(-b - sqd)/(float)(2*a);
        }
        else if(d==0)
        {
            x1=x2=-b/(float)(2*a);
        }
        else if(d<0)
        {
            float r = -b/(float)(2*a);
            float im = sqd/(float)(2*a);
            printf("The roots are: \n");
            printf("%f + %fi , %f - %fi", r, im, r, im);
            exit(0);
        }
    }
    printf("The roots are: \n");
    printf("%f , %f", x1, x2);
    return 0;
}