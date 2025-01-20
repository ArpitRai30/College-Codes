// print whole array and length

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]="Hello Arpit";
//     int i;
//     printf("%s", str);
//     printf("\nstr is %c", str[5]);
//     printf("\nlength of str is %d\n", strlen(str));

//     for(i=0; i<11; i++){
//         printf("%c", str[i]);
//     }
// }




// print individual char

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]={'H','e','l','l','o','\0','V'};
//     int i, len;
//     len=strlen(str);
//     printf("%s", str);
//     printf("\nstr is %c", str[3]);
//     printf("\nlength of str is %d\n", len);
// }




// print 2 array and individual char

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[2][5]={"Ajay", "Vijay"};
//     int i, len;
//     len=strlen(str);
//     printf("%s\n", str);
//     for(i=0; i<2; i++){
//         printf("%s ", str[i]);
//     }
//     printf("\n%c %c %c %c", str[0][2], str[0][3], str[1][1], str[1][3]);
// }




// string comparison

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[10];
//     char str2[10]={};
//     printf("enter first string:");
//     scanf("%s", &str1);
//     printf("\nenter second string:");
//     scanf("%s", &str2);
//     int res;
//     res=strcmp(str1, str2);
//     if (res==0){
//         printf("\nstring is same");
//     }
//     else{
//         printf("\nstring is not same");
//     }
    
// }




// string concatenation

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[10]={"Hello "};
//     char str2[10]={"Hii "};
//     char str3[10]={"Bye"};
//     strcat(str1, str2);
//     strcat(str1,str3);
//     printf("%s", str1);
// }




// sting copy

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[]={"Hello"};
//     char str2[]={};
//     strcpy(str2, str1);
//     printf("%s", str2);
// }




// string reverse

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[]={"Hello!"};
//     int i, j;
//     char temp;
//     j=strlen(str)-1;
//     for(i=0; i<=j; i++){
//         temp=str[j-1];
//         str[j-1]=str[i];
//         str[i]=temp;
//         j--;
//     }
//     printf("%s", str);
// }




// palindrome

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[10]={};
//     printf("enter char:");
//     scanf("%s", str);
//     int i, j, flag=0;
//     char temp;
//     j=strlen(str);
//     for(i=0; i<=j; i++){
//         if(str[i]!=str[j-1]){
//             flag=1;
//             printf("char is not a palindrome");
//             break;
//         }
//         j--;
//     }
//     if(flag==0){
//         printf("char is a palindrome");
//     }
// }




// copy limited characters

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char str1[]="Hello";
//     char str2[10]={};
//     strncpy(str2, str1, 3);
//     str2[10]='\0';
//     printf("%s", str2);
// }




// first occurence of a char

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[]="Hello I am Arpit";
//     char *ptr=strchr(str, 'a');
//     if(ptr){
//         printf("value found at %d", ptr-str);
//     }
//     else{
//         printf("value not found");
//     }
// }




//   sub string

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[]="Hello Hello Arpit";
//     char *substr=strstr(str1, " Hello");
//     if(substr){
//         printf("found substring at %d", substr-str1);
//     }
//     else {
//         printf("not found");
//     }
// }




// find length without using strlen func

// #include<stdio.h>
// #include <string.h>
// int main(){
//     char str[]="Arpit Rai";
//     char *pos=strchr(str, '\0');
//     printf("length of str is %d", pos-str);
// }


// #include<stdio.h>
// #include <string.h>
// int main(){
//     char str[]="Arpit Rai";
//     int count=0;
//     while(str[count]!='\0'){
//         count=count+1;
//     }
//     printf("len is %d", count);
// }




// compare without strcmp

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str1[100]={};
//     char str2[100]={};
//     printf("enter first string:");
//     scanf("%s\n", &str1);
//     printf("enter second string:");
//     scanf("%s\n", &str2);
//     int i, flag=0;
//     if(strlen(str1)==strlen(str2)){
//         for(i=0; i<strlen(str1); i++){
//             if(str1[i]!=str2[i]){
//                 printf("string is not same");
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//         printf("string is same");
//         }
//     }
//     else{
//         printf("string is not same");
//     }
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[10]="HELLOP"; 
//     char str2[10]="HELLO";
//     int i=0, flag =0;
//     while ( str1[i]!='\0' || str2[i]!='\0'){

//         if (str1[i]!=str2[i]){
//             flag =1;
//             printf(" string not same");
//             break;
//         }
//         i++;
//     }
// if (flag ==0){ 
//     printf(" string is same ");
// } 
// }