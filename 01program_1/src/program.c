#include <stdio.h>

int main() {
    int intVar;
    float floatVar;

    // Input values
    printf("Enter an integer value: ");
    scanf("%d", &intVar);
    printf("Enter a float value: ");
    scanf("%f", &floatVar);

    // Display values and sizes
    printf("\n--------------------------------\n");
    printf("|%6s |%10s |%10s|\n","TYPE","SIZE","VALUE");
    printf("--------------------------------\n");
    printf("|%6s |%10zu |%10d|\n","int",sizeof(intVar),intVar);
    printf("|%6s |%10zu |%10.2f|\n","float",sizeof(floatVar),floatVar);
    printf("--------------------------------\n");

    return 0;
}
