#include <stdio.h>
#define TOT_SUBS 5 // 5 subject 
#define FULL_MARK 100 //assuming each subject of 100 marks

int main() {
    float marks[TOT_SUBS], total = 0, percentage;
    char grade;

    // Input marks for 5 subjects
    int sub;
    for (sub = 0; sub < TOT_SUBS; sub++) {
        printf("Enter marks for subject %d: ", sub + 1);
        scanf("%f", &marks[sub]);
        total += marks[sub];  // Sum the marks
    }

    // Calculate percentage
    percentage = (total / (FULL_MARK * TOT_SUBS)) * 100;

    // Determine grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    // Print the percentage and grade
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
