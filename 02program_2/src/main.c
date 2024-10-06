// main.c
#include "main.h"
#include <stdio.h>

extern void display_area();

#if STAGE == 1
    int side_g;  // Global variable for square side length
#elif STAGE == 2
    float radius_g;  // Global variable for circle radius
#endif

int main() {
    #if STAGE == 1
        printf("Enter the side length of the square: ");
        scanf("%d", &side_g);
    #elif STAGE == 2
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius_g);
    #endif

    // Call the display function to print the area
    display_area();

    return 0;
}
