#include<stdbool.h>
bool _stringCompare(char *str1,char *str2){
    int index=0;
    while((str1[index]!='\0') && (str2[index]!='\0')){
        if(str1[index]==str2[index]){
            index++;
        }else{
            return index; // at index, character not matched
        }
    }

    if(str1[index]=='\0' && str2[index]=='\0'){
        return -1; //both string are same
    }

    return index; //both string is not of same size;
}