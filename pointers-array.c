// pointer

// #include<stdio.h>
// #include<math.h>
// void main(){
//     int a=10;
//     int *addr=&a;
//     printf("value of a is %d\n", a);
//     printf("addr of a is %p", addr);
// }






// array

    // #include<stdio.h>
    // #include<math.h>
    // void main(){
    // int arr[5]={10, 20, 30, 40, 50}, i;
    // for(i=0; i<=4; i++){
    //     printf("index %d value is %d\n", i, arr[i]);
    // }
    


    // #include<stdio.h>
    // #include<math.h>
    // void main(){
    // int arr[5]={10, 20, 30, 40, 50}, i, sum=0;
    // for(i=0; i<=4; i++){
    //     sum=sum+arr[i];
    // }
    // printf("sum of number is %d\n", sum);

    

    // #include<stdio.h>
    // #include<math.h>
    // void main(){
    // int arr[5]={10, 20, 30, 40, 50}, i, sum=0, avg;
    // for(i=0; i<=4; i++){
    //     sum=sum+arr[i];
    // }
    // avg=sum/i;
    // printf("avg of number is %d\n", avg);
    // }




// #include<stdio.h>
// #include<math.h>
// void main(){
//     int arr[5]={}, i, sum=0, avg;
//     printf("enter 5 values:");
//     for(i=0; i<5; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<5; i++){
//         sum=sum+arr[i];
//     }
//     avg=sum/i;
//     printf("avf of numbers is %d\n", avg);

// }




#include<stdio.h>
#include<math.h>
void main(){
    int arr[5]={}, i, sum=0, avg, x;
    printf("enter 5 values:");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
        x=arr[i]*2;
        printf("%d\t", x);
    }
   arr[0]=100;
    printf("\n%d", arr[0]);
}
