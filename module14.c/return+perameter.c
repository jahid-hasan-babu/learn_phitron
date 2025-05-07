#include<stdio.h>

int sum(int num1, int num2){
    int ans = num1 + num2;
    return ans;

}   
int sub(int num1, int num2); // if we want to declare it after main function
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int val = sum(a, b); 
    int val2 = sub(50, 100);
    printf("%d %d", val, val2);
    return 0;
}

int sub(int num1, int num2){
    int ans = num1 - num2;
    return ans;

} 
