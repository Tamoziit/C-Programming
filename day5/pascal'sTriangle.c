#include <stdio.h>

int main()
{
    int n, t=1, i, j, k;
    printf("Enter no. lines: \n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(k=1; k<=(n-i); k++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            if(j==0 || i==0)
                t=1;
            else
            {
                t=t*(i-j+1)/j;
            }
            printf("%d ", t);
        }
        printf("\n");
    }
    return 0;
}