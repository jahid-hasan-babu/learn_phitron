#include<stdio.h>

int main(){
    char s[10];
    scanf("%s", &s); //power of string for input
    printf("%c \n", s[2]);
    printf("%s\n", s);
    printf("%d", s[7]); //asci value
    printf("%d", s[5]); // null character

    
    return 0;
}