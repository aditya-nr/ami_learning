#include <stdio.h>
#include"main.h"
int main() {
    unsigned int num = 0x0F;  // 0000 1111 in binary

    // Test bit manipulation functions
    printf("Original number: 0x%X\n", num);
    
    num = SetBit(num, 7);
    printf("After setting bit 7: 0x%X\n", num);

    num = ResetBit(num, 3);
    printf("After resetting bit 3: 0x%X\n", num);

    unsigned int bitValue = ReadBit(num, 7);
    printf("Bit at position 7: %u\n", bitValue);

    num = ToggleBit(num, 7);
    printf("After toggling bit 7: 0x%X\n", num);

    // Test string functions
    char str[100] = "Hello";
    ReverseString(str);
    printf("Reversed string: %s\n", str);

    int number = -12345;
    char numStr[100];
    IntToString(number, numStr);
    printf("Integer to string: %s\n", numStr);

    return 0;
}
