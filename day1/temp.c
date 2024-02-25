#include <stdio.h>
int main()
{
    int c, f;
    printf("Enter temperature in Celcius\n");
    scanf("%d", &c);
    printf("Enter temperature in Fahrenheit\n");
    scanf("%d", &f);
    float cf, ff;
    ff = (c*9.0/5)+32;
    cf = (f-32)*5.0/9;
    printf("%d Celcius = %f Fahrenheit\n", c, ff);
    printf("%d Fahrenheit = %f Celcius\n", f, cf);
    return 0;
} 