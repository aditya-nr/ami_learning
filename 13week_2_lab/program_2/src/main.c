#include <stdio.h>
#include "main.h"

int main()
{
    struct Date date1, date2;

    // Input for the first date
    printf("Enter the first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input for the second date
    printf("Enter the second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Calculate and print the number of days between the two dates
    int difference = daysBetween(date1, date2);
    printf("Number of days between the two dates: %d\n", difference);

    return 0;
}
