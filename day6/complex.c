#include <stdio.h>

int r, i;
void add(int a, int b, int c, int d)
{
    r=a+b;
    i=c+d;
}

void subtract(int a, int b, int c, int d)
{
    r=a-b;
    i=c-d;
}

void multiply(int a, int b, int c, int d)
{
    r=(a*b)+((c*d)*(-1));
    i=(a*d)+(c*b);
}

int main()
{
    int a, b, c, d, ch;
    printf("Enter 1st complex no.\n");
    scanf("%d %d", &a, &c);
    printf("enter 2nd complex no.\n");
    scanf("%d %d", &b, &d);
    printf("Enter : \n 1. Add \n 2. Subtract \n 3. Multiply \n");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1:
            add(a, b, c, d);
            break;
        case 2:
            subtract(a, b, c, d);
            break;
        case 3:
            multiply(a, b, c, d);
            break;
        default:
            printf("Wrong Choice!\n");
    }
    if(i==0 && r==0)
        printf("0");
    else if(r==0)
        printf("%di", i);
    else if(i==0)
        printf("%d", r);
    else if(i>0)
        printf("%d + %di", r, i);
    else if(i<0)
        printf("%d %di", r, i);
    return 0;
}