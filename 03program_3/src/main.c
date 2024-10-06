#include"main.h"
#include<stdio.h>
#include<inttypes.h>

int main(){
    uint8_t inputValue,outputValue;

    // get inputValue from user
    printf("Enter 8-bit value (0 to 255 ) : ");
    scanf("%hhd",&inputValue);

    // read each bit using READBIT micro
    printf("value in Binary : ");
    int bit_pos; // bit position
    for(bit_pos=7;bit_pos>=0;bit_pos--){
        printf("%d",READBIT(inputValue,bit_pos));
    }
    printf("\n");

    // set 4 MSB bit using SETBIT micro
    outputValue=inputValue;
    for(bit_pos=7;bit_pos>=4;bit_pos--){
        SETBIT(outputValue,bit_pos);
    }
    printf("After setting 4 MSB : %u\n",outputValue);

    // reset 4 MSB bit using RESETBIT micro
    outputValue=inputValue;
    for(bit_pos=7;bit_pos>=4;bit_pos--){
        RESETBIT(outputValue,bit_pos);
    }
    printf("After resetting 4 MSB : %u\n",outputValue);
    return 0;
}