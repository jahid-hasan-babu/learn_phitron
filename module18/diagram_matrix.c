// #include<stdio.h>
// #include<stdbool.h>

// int main(){
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     for (int i = 0; i < r; i++)
//     {
//        for (int j = 0; j < c; j++)
//        {
//         scanf("%d", &a[i][j]);
//        }
       
//     }
//     bool is_diagonal = true;
   
//     if(r ==c ){ //square matrix
//         for (int i = 0; i < r; i++)
//         {
//            for (int j = 0; j < c; j++)
//            {
//             if(i == j){
//                 // printf("%d ", a[i][j]);
//             }else{
//                 if(a[i][j] != 0){
//                     is_diagonal = false;
//                     printf("This is not a diagonal matrix");
//                 }
//             }
//            }
           
//         }
//         if(is_diagonal == true){
//             printf("This is diagonal");
//         }
//     }
    
//     return 0;
// }


#include<stdio.h>
#include<stdbool.h>

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%d", &a[i][j]);
       }
       
    }
    bool is_diagonal = true;
   
    if(r ==c ){ //square matrix
        for (int i = 0; i < r; i++)
        {
           for (int j = 0; j < c; j++)
           {
            if(i != j){
                if(a[i][j] != 0){
                    is_diagonal = false;
                    printf("This is not a diagonal matrix");
                }
                }
           }
           
        }
        if(is_diagonal == true){
            printf("This is diagonal");
        }
    }
    
    return 0;
}