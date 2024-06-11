#include<stdio.h>
#include<math.h>

int main()
{
    float a;
    printf("Enter\n");
    scanf("%f", &a);
    float res = remainder(a, 1.0);
    if(res == 0.0)
        printf("Integer\n");
    else
        printf("Not\n");
    return 0;
}