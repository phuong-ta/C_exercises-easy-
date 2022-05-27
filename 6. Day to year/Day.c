#include <stdio.h>
/*
    User give a number as day. Program convert to year month and day.
*/
int main()
{
    int days, years, weeks;
    printf("Enter days: ");   // Read total number of days from user
    scanf("%d", &days);
    years = (days / 365);
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    return 0;
}