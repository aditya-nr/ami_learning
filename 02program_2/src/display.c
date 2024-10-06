#include "main.h"
#include <stdio.h>

#if STAGE == 1
    extern int side_g;  // Access the global variable from main.c
#elif STAGE == 2
    extern float radius_g;  // Access the global variable from main.c
#endif

void display_area() {
    #if STAGE == 1
        printf("The area of the square is: %d\n", AREA(side_g));
    #elif STAGE == 2
        printf("The area of the circle is: %.2f\n", AREA(radius_g));
    #endif
}
