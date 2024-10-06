// Function to reset (clear) a bit at a specific position
unsigned int ResetBit(unsigned int num, unsigned int position) {
    return num & ~(1 << position);
}