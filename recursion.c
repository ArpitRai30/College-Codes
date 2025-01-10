// factorial 

// #include<stdio.h>
// int main()
// {
//     int num=5, total;
//     total=fact(num);
//     printf("fact of num is %d", total);
// }
// int fact (int x){
//     if (x==1){
//         return 1;
//     }
//     else{
//         return (x*(fact(x-1)));
//     }
// }






// fibonacci sequence

// #include <stdio.h>
// int main(){
//     int num, total;
//     printf("enter n^th required fab num");
//     scanf("%d", &num);
//     total=fab(num);
//     printf("n^th fab num is %d", total);
// }
// int fab(int x){
//     if(x==0){
//         return 0;
//     }
//     else if(x==1){
//         return 1;
//     }
//     else{
//         return (fab(x-1)+fab(x-2));
//     }

// }






// static

// #include<stdio.h>
// int main(){
//     temp();
//     temp();
//     temp();
// }
// int temp(){
//     static int num=0;
//     num=num+2;
//     printf("Static value is %d\n", num);
// }