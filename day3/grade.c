#include <stdio.h>

int main()
{
    char g;
    int m;
    printf("Enter marks: \n");
    scanf("%d", &m);
    g = m >= 80 ? 'E' : m >= 60 && m <= 79 ? 'A'
                    : m >= 40 && m <= 59   ? 'B'
                                           : 'P';
    printf("Grade: %c\n", g);
    return 0;
}