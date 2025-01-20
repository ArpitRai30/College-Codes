// malloc

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main() {
//     int *ptr, i, value=0;
//     ptr = (int *) malloc(5 * sizeof(int));
//     if(ptr==NULL){
//         printf("allocation is not possible");
//     }
//     for(i=0; i<5; i++){
//         value=value+10;
//         ptr[i]=value;
//     }
//     for(i=0; i<5; i++){
//         printf("%d value is %d\n", i+1, ptr[i]);
//     }
// }




// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     int *ptr, i, value=0;
//     for(i=0; i<5; i++){
//        ptr = (int *) malloc(sizeof(int));
//        if(ptr==NULL){
//            printf("allocation is not possible");
//        }
//        value=value+10;
//        ptr[i]=value;
//        printf("%d value is %d\n", i+1, ptr[i]);
//     }
// }




// calloc

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main() {
//     int *ptr, i, value=0;
//     ptr = (int*)calloc(5, sizeof(int));
//     if(ptr==NULL){
//         printf("addr is not free");
//     }
//     else{
//         for(i=0; i<5; i++){
//         value = value + 10;
//         ptr[i] = value;
//         }
//     }
//     for(i=0; i<5; i++){
//     printf("%d value is: %d\n", i+1, ptr[i]);
//     }
//     free(ptr);
// }




// realloc

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int *ptr, i, value=0;
    ptr = (int *)malloc(5 * sizeof(int));
    if(ptr==NULL){
        printf("alloc is not possible");
    }
    else{
        for (i=0; i<5; i++){
            value = value + 10;
            ptr[i] = value;
        }
    }
    ptr = (int *)realloc(ptr, 7 * sizeof(int));
    for(i=5; i<7; i++){
        value = value + 10;
        ptr[i] = value;
    }
    for(i=0; i<7; i++){
        printf("%d value is %d\n", i+1, ptr[i]);
    }
}