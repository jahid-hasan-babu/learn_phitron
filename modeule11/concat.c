#include<stdio.h>
#include<string.h>
int main(){
    char a[101], b[101];
    scanf("%s %s", a, b);
    int length = strlen(b);
    int length_a = strlen(a);
    for (int i = 0; i <= length; i++)
    {
       a[i + length_a] = b[i];
    }
    printf("%s %s", a,b);
    
    return 0;
}