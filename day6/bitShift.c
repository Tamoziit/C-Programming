#include <stdio.h>

int bits(int x, int y)
{
    int z, ctr=0, c=0;
    z=x^y; //x (XOR) y
    while(z>0)
    {
        ctr+=(z&1); //digit masking
        c+=ctr; //counting no. of flipped digits
        z=z>>1; //right shift by 1 bit
    }
    return c;
}

int main()
{
    int x, y, b;
    printf("Enter 2 nos.\n");
    scanf("%d %d", &x, &y);
    b=bits(x, y);
    printf("No. of bits to be flipped = %d", b);
    return 0;
}