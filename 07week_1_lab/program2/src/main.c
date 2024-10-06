#include <stdio.h>

// Macros to read specific bits
#define GET_BIT(value, bit) ((value >> bit) & 1)
#define SET_BIT(value, bit) (value |= (1 << bit))
#define CLEAR_BIT(value, bit) (value &= ~(1 << bit))

int main() {
    unsigned char Input;
    printf("Enter a number between 0 and 255: ");
    scanf("%hhu", &Input);

    // Read D0, D1, D2 (ignition and indicator switches)
    unsigned char D0 = GET_BIT(Input, 0); // Ignition Switch
    unsigned char D1 = GET_BIT(Input, 1); // Right Indicator Switch
    unsigned char D2 = GET_BIT(Input, 2); // Left Indicator Switch

    // Ignition logic
    if (D0) {  // If D0 (Ignition Switch) is ON
        SET_BIT(Input, 6);  // Set D6 (Ignition Status) to ON
        printf("IGNITION ON\n");

        // Check Indicator Switches
        if (D1 && D2) {
            SET_BIT(Input, 5);  // Right Indicator Status ON
            SET_BIT(Input, 7);  // Left Indicator Status ON
            printf("PARKING ON\n");
        } else if (D1) {
            SET_BIT(Input, 5);  // Right Indicator Status ON
            CLEAR_BIT(Input, 7);  // Left Indicator Status OFF
            printf("RIGHT INDICATOR ON\n");
        } else if (D2) {
            CLEAR_BIT(Input, 5);  // Right Indicator Status OFF
            SET_BIT(Input, 7);  // Left Indicator Status ON
            printf("LEFT INDICATOR ON\n");
        } else {
            CLEAR_BIT(Input, 5);  // Right Indicator Status OFF
            CLEAR_BIT(Input, 7);  // Left Indicator Status OFF
            printf("INDICATORS OFF\n");
        }
    } else {  // If D0 (Ignition Switch) is OFF
        CLEAR_BIT(Input, 6);  // Set D6 (Ignition Status) to OFF
        CLEAR_BIT(Input, 5);  // Right Indicator Status OFF
        CLEAR_BIT(Input, 7);  // Left Indicator Status OFF
        printf("IGNITION OFF\n");
        printf("INDICATORS OFF\n");
    }

    // Print modified Input value
    printf("Modified Input value: %d\n", Input);

    return 0;
}
