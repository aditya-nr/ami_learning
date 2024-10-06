// Function to read a bit at a specific position
unsigned int ReadBit(unsigned int num, unsigned int position) {
    return (num >> position) & 1;
}