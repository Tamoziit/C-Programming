#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,c;
    if(n==0)
        printf("0");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The fibonacci series is: ");
    fibonacci(n);
    return 0;
}