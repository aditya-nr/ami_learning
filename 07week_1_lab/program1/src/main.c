#include <stdio.h>

int main() {
    int num, digit, divisor = 10000;  // Using divisor to extract digits

    printf("Enter a number between 1 and 9999: ");
    scanf("%d", &num);

    if (num < 1 || num > 9999) {
        printf("Invalid input. Please enter a number between 1 and 9999.\n");
        return 0;
    }

    printf("Number in words: ");

    // Start processing each digit
    while (divisor > 1) {
        divisor /= 10;
        digit = num / divisor;
        num = num % divisor;

        if (digit == 0 && divisor == 1000) {
            continue;  // Skip leading zeros for numbers less than 1000
        }

        switch (digit) {
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            case 0: printf("Zero "); break;
        }
    }

    printf("\n");
    return 0;
}
