#include<stdio.h>

int main(){
    int x = 10;

    int* ptr;
    ptr = &x;
    *ptr  = 100;
    printf("%p\n", ptr);
    printf("%d", *ptr);
    return 0;
}