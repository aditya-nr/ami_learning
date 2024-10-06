#include"main.h"

void ReverseString(char *str) {
    int start=0,end=_stringLength(str)-1;
    
    while (start<end) {
        _swapChar(&str[start],&str[end]);
        start++;
        end--;
    }
}