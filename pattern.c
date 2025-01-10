#include<stdio.h>
int main(){

    // matrix



    // int i, j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=i; j++){
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }






    // int i,j;
    // for(i=1; i<=5; i++){
    //     for(j=1; j<=i; j++){
    //         if((i+j)%2==0){
    //             printf("A");}
    //         else{
    //                 printf("B");
    //             }
    //         }
    //         printf("\n");
    //     }






    // int i,j,k;
    // for(i=1; i<=5; i++){
    //      for(k=5; k>i; k--){
    //             printf(" ");
    //     }
    //       for(j=1; j<=2*i-1; j++){
    //           printf("*");
    //     }
    //     printf("\n");
    // }






    int row, i, j, k;
    printf("enter num");
    scanf("%d", row);
    for(i=1; i<=row; i++){
        if((i=1) || (i=5)){
            for(j=1; j<=5; j++){
                printf("*");
            }
        }
        else{
            for(j=1; j<=2; j++){
                printf("*");
            }
        }
    }


    return 0;
}