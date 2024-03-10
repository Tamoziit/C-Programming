#include <stdio.h>
#include <math.h>

int main()
{
    long a, b, r=0; 
    int d1=0, d2=0, d=0, i=0; 
    int c;
    printf("Enter 2 nos. in Binary: \n");
    scanf("%ld %ld", &a, &b);
    printf("Enter: \n 1 for AND \n 2 for OR \n");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            while(a>0 || b>0)
            {
                d1 = a%10;
                d2 = b%10;
                if(d1 == 1 && d2 == 1)
                {
                    d = 1;
                }
                else
                {
                    d = 0;
                }
                r = r + (d*pow(10,i++));
                a/=10;
                b/=10;
            }
            printf("Result = %ld", r);
            break;
        case 2:
            while(a>0 || b>0)
            {
                d1 = a%10;
                d2 = b%10;
                if(d1 == 0 && d2 == 0)
                {
                    d = 0;
                }
                else
                {
                    d = 1;
                }
                r = r + (d*pow(10,i++));
                a/=10;
                b/=10;
            }
            printf("Result = %ld", r);
            break;
        default:
            printf("Wrong Choice!\n");
    }
    return 0;
}