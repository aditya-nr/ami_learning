#include"main.h"

void _swapChar(char *p1,char *p2){
    char tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}

void _reverseString(char *str) {
    int start=0,end=_stringLength(str)-1;
    
    while (start<end) {
        _swapChar(&str[start],&str[end]);
        start++;
        end--;
    }
}