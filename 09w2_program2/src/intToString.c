#include"main.h"

void IntToString(int num, char *str) {
    int isNegative = 0;
    int i = 0;

    // Handle negative numbers
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Extract digits and store them in reverse order
    do {
        str[i++] = (num % 10) + '0';
        num /= 10;
    } while (num > 0);

    // If the number was negative, add the minus sign
    if (isNegative) {
        str[i++] = '-';
    }

    str[i] = '\0';  // Null-terminate the string

    // Reverse the string to get the correct order
    ReverseString(str);
}

