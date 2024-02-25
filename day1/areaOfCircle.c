#include <stdio.h>

int main() {
    int r;
    printf("Enter radius\n");
    scanf("%d", &r);
    float area = 22.0/7*(r*r);
    printf("Area = %f", area);
    return 0;
}