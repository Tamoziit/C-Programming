#include <stdio.h>

int main()
{
    int n, i, j, x, y;
    printf("Enter no. of lines: \n");
    scanf("%d", &n);
    int r = n/2;
    for(i=0; i<n; i++)
    {
        x=i<r?i:(r*2-i);
        for(j=0; j<n; j++)
        {
            y=j<r?j:(r*2-j);
            if(x+y>r)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}