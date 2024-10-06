void _stringNoSpace(char *str) {
    int i=0,j=0;
    while (str[j]!='\0') {
        if (str[j] != ' ') {
            str[i++]=str[j];
        }
        j++;
    }
    str[i]='\0';
}