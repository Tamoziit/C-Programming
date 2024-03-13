#include <stdio.h>

int main()
{
    float s = 1.0, x, term = 1.0;
    int n, i;
    printf("Enter x and n: \n");
    scanf("%f %d", &x, &n);
    for(i=1; i<n; i++)
    {
        term = term * (x/(float)(2*i*(2*i+1)));
        if(i%2 == 0)
            s+=term;
        else
            s-=term;
    }
    printf("Sum = %f", s);
    return 0;
}