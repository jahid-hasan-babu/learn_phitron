#include<stdio.h>
#include<string.h>

int main(){
    char a[100000];
    scanf("%s", a);
    int length = strlen(a);
    int count = 0;
    for (int i = 0; i < length; i++) 
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            continue;
        }else{
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}
