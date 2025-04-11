#include <stdio.h>

// int main()
// {
// int i = 5;
// while(i<10)
// {
// printf("i");
// i++;
// }
// }

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!    I will succeed one day.\n");
//     return 0;
// }


// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     long long int  A,B;
//     scanf("%lld %lld",&A,&B);
//     int mul = A*B;
//     printf("%d",mul );
//     return 0;
// }

// int main(){
//     int N;
//     scanf("%d", &N);
//     int b = 3;
//     int c = 7;
//     // int mod = N % b;
//     // if(mod == 0){
//     //     printf("YES");
//     // }else{
//     //     printf("NO");
//     // }
//     for(int i; i <= N; i++){
//         if(i % b == 0 && i % c == 0){
//             if(i == 0){
//                 continue;
//             }
//             printf("%d\n",i);

//         }
//     }
//     return 0;
// }

int main(){
    int N;
    scanf("%d", &N);
    if(N > 1000){
      printf("I will buy Punjabi\n");
      if(N - 1000 >= 500){
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
      }
    }else{
        printf("Bad luck!");
    }
    return 0;
}
