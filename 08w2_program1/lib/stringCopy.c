void _stringCopy(char *src,char *target){
    int index=0;
    while(src[index]!='\0'){
        target[index]=src[index];
        index++;
    }
    target[index]='\0';
}