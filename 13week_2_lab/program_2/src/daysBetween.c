#include "main.h"

// Function to check if a year is a leap year
int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the number of days in a month
int daysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0; // Invalid month
    }
}

// Function to calculate the total number of days from 01/01/0000 to the given date
int totalDays(struct Date date)
{
    int total = 0;

    // Add days for the years
    for (int year = 0; year < date.year; year++)
    {
        total += isLeapYear(year) ? 366 : 365;
    }

    // Add days for the months of the current year
    for (int month = 1; month < date.month; month++)
    {
        total += daysInMonth(month, date.year);
    }

    // Add days for the current month
    total += date.day;

    return total;
}

// Function to calculate the difference in days between two dates
int daysBetween(struct Date start, struct Date end)
{
    int diff = totalDays(end) - totalDays(start);
    return (diff < 0) ? diff * -1 : diff;
}
