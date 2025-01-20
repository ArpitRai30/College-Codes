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
// sum=sum+arr[i];
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




// #include<stdio.h>
// #include<math.h>
// void main(){
//     int arr[5]={}, i, sum=0, avg, x;
//     printf("enter 5 values:");
//     for(i=0; i<5; i++){
//         scanf("%d", &arr[i]);
//         x=arr[i]*2;
//         printf("%d\t", x);
//     }
//    arr[0]=100;
//     printf("\n%d", arr[0]);
// }




// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// void main(){
//     int arr[5]={100, 200, 300, 400, 500};
//     int *ptr=arr;
//     printf("value of ptr is %d\n", *ptr);
//     ptr++;
//     printf("ptr++ is %d\n", *ptr);
//     *ptr=*ptr+1;
//     printf("value of ptr is %d\n", *ptr);
//     printf("array value %d", arr[1]);
// }





// linear search

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// void main(){
//     int arr[7]={10, 50, 30, 20, 70, 25, 40}, i, flag=0, key;
//     printf("enter a search key:");
//     scanf("%d", &key);
//     for(i=0; i<7; i++){
//         if(key==arr[i]){
//         flag=1;
//         }
//     }
//     if(flag==1){
//         printf("key is present\n");
//     }
//     if(flag==0){
//         printf("key is absent\n");
//     }
// }





// binary search

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// void main(){
//     int arr[7]={10, 20, 25, 30, 40, 50, 70}, key;
//     printf("enter search key:");
//     scanf("%d",&key);
//     b_search(arr, key);
// }
// b_search(int arr[], int key){
//     int low=0, high=6, mid;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==key){
//             printf("element is present");
//             return mid;
//         }
//         else if(arr[mid]<key){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//          }
//     }
//     printf("element is not present");

// }





// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// void main(){
//     int arr[5]={10, 20, 30, 40, 50};
//     int *ptr, i;
//     ptr=arr;
//     ptr=ptr+4;
//     *ptr=*ptr+10;
//     for(i=0; i<5; i++){
//         printf("%d ", arr[i]);
//     }
// }





// min/max

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// void main(){
//     int arr[5]={2, 7, 1, 9, 5}, i, max, min;
//     max=arr[0];
//     min=arr[0];
//     for(i=0; i<5; i++){
//         if(arr[i]>=max){
//             max=arr[i];
//         }
//         else if(arr[i]<min) {
//             min=arr[i];
//         }
//     }
//     printf("max value is %d\nmin value is %d\n", max, min);
// }





// bubble sort

// #include <stdio.h>
// void main(){
//     int arr[5]={2, 7, 1, 9, 5}, i, j, temp;
//     printf("before sorting array:");
//     for(i=0; i<5; i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=0; i<5; i++){
//         for(j=i+1; j<5; j++){
//             if(arr[j]<arr[i]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("\nafter sorting array:");
//     for (i=0; i<5; i++){
//         printf("%d ", arr[i]);
//     }
// }