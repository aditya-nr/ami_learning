// Conditional compilation for AREA macro
#if STAGE == 1
    #define AREA(side) ((side) * (side))  // Area of square
#elif STAGE == 2
    #define AREA(radius) (3.14159 * (radius) * (radius))  // Area of circle
#else
    #error "STAGE must be 1 (square) or 2 (circle)"
#endif
