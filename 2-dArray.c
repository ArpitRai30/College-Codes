// accessing 2-d matrix

// #include <stdio.h>
// void main(){
//     int arr[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int i, j;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }





// input 3x3 matrix

// #include <stdio.h>
// void main(){
//     int arr[3][3]={{}, {}, {}}, i, j;
//     printf("enter the array:");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }





// input 2x3 matrix

// #include <stdio.h>
// void main(){
//     int arr[2][3], i, j;
//     printf("enter array:");
//     for(i=0; i<2; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(i=0; i<2; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", arr[i][j]*2);
//         }
//         printf("\n");
//     }
// }





// input 3x2 matrix

// #include<stdio.h>
// void main(){
//     int arr[3][2], i, j;
//     printf("enter array:");
//     for(i=0; i<3; i++){
//         for(j=0; j<2; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<2; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }





// sum of two matrix

// #include<stdio.h>
// void main(){
//     int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//     int brr[3][3]={{10,20,30}, {40,50,60}, {70,80,90}};
//     int crr[3][3];
//     int i, j;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             crr[i][j]=arr[i][j]+brr[i][j];
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", crr[i][j]);
//         }
//         printf("\n");
//     }
// }





// sum of two input matrix

// #include<stdio.h>
// void main(){
//     int arr[3][2];
//     int brr[3][2];
//     int crr[3][2];
//     int i, j;
//     printf("enter array 1:");
//     for(i=0; i<3; i++){
//         for(j=0; j<2; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("enter array 2:");
//     for(i=0; i<3; i++){
//         for(j=0; j<2; j++){
//             scanf("%d", &brr[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<2; j++){
//         crr[i][j]=arr[i][j]+brr[i][j];
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<2; j++){
//         printf("%d ", crr[i][j]);
//         }
//     printf("\n");
//     }
// }





// sum of diagonal of a matrix

// #include <stdio.h>
// void main(){
//     int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//     int i, j, sum=0;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             if(i==j){
//                 sum=sum+arr[i][j];
//             }
//         }
//     }
//     printf("diagonal sum is %d", sum);
// }





// multiplication of a matrix

// #include<stdio.h>
// void main (){
//     int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//     int brr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//     int crr[3][3]={0};
//     int i, j, k;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             for(k=0; k<3; k++){
//             crr[i][j]=crr[i][j]+(arr[i][k]*brr[k][j]);

//             }
//         }
//     }
//      for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", crr[i][j]);
//         }
//         printf("\n");
//      }
// }





//  transpose of a matrix

// #include <stdio.h>
// void main(){
//     int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//     int trr[3][3];
//     int i,j;
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             trr[i][j]=arr[j][i];
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", trr[i][j]);
//         }
//         printf("\n");
//     }
// }





// #include <stdio.h>
// void main(){
//     int arr[3][3];
//     int trr[3][3];
//     int i,j;
//     printf("enter matrix:");
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             trr[i][j]=arr[j][i];
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", trr[i][j]);
//         }
//         printf("\n");
//     }
// }