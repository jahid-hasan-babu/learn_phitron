#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int capitalLetter = 0;
        int smallLetter = 0;
        int digit = 0;
        char c[10000];
        scanf("%s", c);
        int length = strlen(c);
        for (int i = 0; i < length; i++)
        {
            if(c[i] >= 'a' && c[i] <= 'z' ){
                smallLetter++;
            }else if (c[i] >= 'A' && c[i] <= 'Z')
            {
                capitalLetter++;
            }else if (c[i] >= '0' && c[i] <= '9')
            {
                digit++;
            }
            
            
        }
        printf("%d %d %d\n",capitalLetter, smallLetter,  digit);
        
    }
    
    return 0;
}