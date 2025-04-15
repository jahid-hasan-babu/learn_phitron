// #include<stdio.h>

// int main(){
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     //minimum
//     if(a <= b && a <= c){
//         printf("%d ", a);
//     }else if(b <= a && b <= c){
//         printf("%d ", b);
//     }else if(c <= a && c <= b){
//         printf("%d ", c);
//     }
//     //maximum
//     if(a >= b && a >= c){
//         printf("%d", a);
//     }else if(b >= a && b >= c){
//         printf("%d", b);
//     }else if(c >= a && c >= b){
//         printf("%d", c);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int x = 5;
    int y = 4;
    if(x >=y && x<y+4 ){
        printf("hello");
    }
     
    return 0;
}