// Function to toggle a bit at a specific position
unsigned int ToggleBit(unsigned int num, unsigned int position) {
    return num ^ (1 << position);
}