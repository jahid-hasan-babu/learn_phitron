// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

   

//     for (int i = n - 1; i > 0; i--)
//     {
//        if(i % 2 != 0){
//            printf("%d ",a[i]);
       
        

//        }
//     }


//     return 0;
// }

// #include<stdio.h>

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int posSum = 0;
//     int negSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//        if(arr[i] > 0){
//         posSum += arr[i];
//        }else{
//             negSum += arr[i];
//        }
   
       
//     }

//     printf("%d %d", posSum, negSum);
    
//     return 0;
// }

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, v;
    scanf("%d %d",&x, &v);

    for (int i = 0; i < n; i++)
    {
        
     if(i == x){
        
        arr[i] = v;
     }

    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}