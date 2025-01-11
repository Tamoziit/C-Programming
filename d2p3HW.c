#include<stdio.h>
int main(){
    int price, yrs, dep, salvage;
    printf("Enter the price of the item : ");
    scanf("%d", &price);
    printf("Enter the number of years of service : ");
    scanf("%d", &yrs);
    printf("Enter the depreciation value : ");
    scanf("%d", &dep);
    salvage = price - (yrs * dep);
    printf("The salvage value of the item is : %d", salvage);
}