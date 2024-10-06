#ifndef MAIN_H
#define MAIN_H
// Structure to represent a date
struct Date
{
    int day;
    int month;
    int year;
};

// Function to check if a year is a leap year
extern int isLeapYear(int year);
// Function to calculate the number of days in a month
extern int daysInMonth(int month, int year);
// Function to calculate the total number of days from 01/01/0000 to the given date
extern int totalDays(struct Date date);
// Function to calculate the difference in days between two dates
extern int daysBetween(struct Date start, struct Date end);

#endif