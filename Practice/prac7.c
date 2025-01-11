#include <stdio.h>
struct Dates
{
    int day, month, year;
};
int main(){
    struct Dates days[2];
    int finday;
    printf("Enter Date, Month and Year :");
    scanf("%d %d %d", &days[0].day, &days[0].month, &days[0].year);
    printf("Enter Date, Month and Year :");
    scanf("%d %d %d", &days[1].day, &days[1].month, &days[1].year);
    if(days[1].year > days[0].year){
        finday = (days[1].year - days[0].year)*365 + (days[1].month - days[0].month)*30 + days[1].day - days[0].day;
    }
    else
        finday = (days[0].year - days[1].year)*365 + (days[0].month - days[1].month)*30 + days[0].day - days[1].day;
    printf("The difference in number of days is %d", finday);
}

