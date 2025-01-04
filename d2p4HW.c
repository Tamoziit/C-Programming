#include<stdio.h>
int main(){
    int r;
    printf("Enter the amount in Rupees (Rs.): ");
    scanf("%d", &r);
    printf("Rs.100 notes : %d\n", r/100);
    r = r%100;
    printf("Rs.50 notes : %d\n", r/50);
    r = r%50;
    printf("Rs.20 notes : %d\n", r/20);
    r = r%20;
    printf("Rs.10 notes : %d\n", r/10);
    r = r%10;
    printf("Rs.5 notes : %d\n", r/5);
    r = r%5;
    printf("Rs.2 notes : %d\n", r/2);
    r = r%2;
    printf("Re.1 notes : %d", r);
    return 0;
}