#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for(i=1; i<=(n/2)+1; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==i || j==n-i+1)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=(n/2); i>=1; i--)
    {
        for(j=1; j<=n; j++)
        {
            if(j==i || j==n-i+1)
                printf("%d", i);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;


}