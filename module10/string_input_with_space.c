#include<stdio.h>

int main(){
    char s[50];
    //gets(s); // gets for input data with space
    fgets(s, 12, stdin);
    printf("%s", s);
    return 0;
}