#include <stdio.h>

int main()
{
    int n, a=0, b=1, c, i;
    printf("Enter the range: \n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        if(a<0)
        {
            printf("Out of Range!");
            break;
        }
        if(i!=n-1)
            printf("%d, ", a);
        else
            printf("%d", a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}