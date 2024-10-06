#include <stdio.h>
#include<stdbool.h>
#include"main.h"


int main() {

    // - copy one string to another string
    char source[] = "Hello World";
    char destination[100];

    _stringCopy(source,destination);

    printf("Copied String: %s\n", destination);

    // - Compare two strings
    char str1[]="Hello World !";
    char str2[]="led blink";

    bool isSame=_stringCompare(str1,str2);
    
    if(isSame){
        printf("\"%s\" and \"%s\" is same string\n",str1,str2);
    }else{
        printf("\"%s\" and \"%s\" is not same string\n",str1,str2);
    }
    
    // - reverse a string and store it
    char str[100]="ABCEDFG";
    
    printf("\nBefore Reverse : \"%s\"\n",str);
    _reverseString(str);
    printf("After Reverse : \"%s\"\n",str);

    // - Remove all space in a string and store it
    char strr[]="American Megatrends International India";

    printf("\nBefore Space Removal : \"%s\"\n",strr);
    _stringNoSpace(strr);
    printf("After Space Removal : \"%s\"\n",strr);
    
    
     return 0;
}
