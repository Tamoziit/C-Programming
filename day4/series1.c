#include <stdio.h>
#include <math.h>

int main()
{
    long term, sum = 0;
    int i, n, d=1;
    while(1)
    {
        printf("Enter a range within 10 \n");
        scanf("%d", &n);
        if(n <= 10)
        {
            for(i=0; i<n; i++)
            {
                d+=i;
                term = pow(d, 4);
                sum+=term;
            }
            printf("Sum = %ld\n", sum);
            break;
        }
        else
        {
            printf("Out of Range! Enter again...\n");
        }
    }
    return 0;
}