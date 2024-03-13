#include <stdio.h>

int main()
{
    int n, i, s=0;
    printf("Enter a no.: \n");
    scanf("%d", &n);
    for(i=1; i<=n/2; i++)
    {
        if(n%i == 0)
            s+=i;
    }
    if(s == n)
        printf("Perfect No. \n");
    else
        printf("Not a Perfect No. \n");
    return 0;
}