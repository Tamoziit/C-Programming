#include<stdio.h>

int main()
{
    int i;
    for(i=48; i<=57; i++)
    {
        char ch = (char)i;
        printf("%c\n", ch);
    }
    return 0;
}