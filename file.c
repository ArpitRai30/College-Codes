// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     FILE *fp;
//     char hread[2000];
//     fp=fopen("E:/hiii/hii.txt", "r");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     else{
//         fgets(hread, 200, fp);
//         printf("%s", hread);
//     }
//     fclose(fp);
// }




// #include <stdio.h>
// int main() {
//     FILE *fp;
//     char content[]="Today I am doing FILE prog";
//     fp=fopen("E:/hiii/hii.txt", "w");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     else{
//         fprintf(fp, "%s", content);
//     }
//     fclose(fp);
// }




// #include <stdio.h>
// int main() {
//     FILE *f;
//     char hread;
//     f=fopen("E:/hiii/hello.txt", "r");
//     if(f==NULL){
//         printf("file not found");
//     }
//     else{
//         while((hread=fgetc(f))!=EOF){
//             putchar(hread);
//         }
//     }
//     fclose(f);
// }




// #include <stdio.h>
// int main() {
//     FILE *fp;
//     char content[]="Today I am doing FILE prog. Hello I am Arpit. I love chess.";
//     fp=fopen("E:/hiii/hii.txt", "w");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     else{
//         fprintf(fp, "%s", content);
//     }
//     fclose(fp);
//     fp=fopen("E:/hiii/hii.txt", "r");
//     if(fp==NULL){
//         printf("file not found");
//     }
//     else{
//         char hread;
//         while((hread=fgetc(fp))!=EOF){
//             putchar(hread);
//         }
//     }
//     fclose(fp);
// }








// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     char text[100];

//     // open the file in append mode
//     fptr=fopen("E:/hiii/hii.txt", "a");

//     if(fptr==NULL){
//         printf("Error opening file!\n");
//         return 1;
//     }

//     printf("Enter text to append: ");
//     fgets(text, sizeof(text), stdin);

//     // Append to the file
//     fprintf(fptr, "%s", text);

//     fclose(fptr);
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("E:/hiii/hello.txt", "r");
//     if(fptr==NULL){
//         printf("file not found!");
//     }
//     char name[20];
//     int age;
//     double ph;
//     while(fscanf(fptr, "%s %d %lf", name, &age, &ph)!=EOF){
//         printf("\nName is %s, age is %d and ph is %.0lf", name, age, ph);
//     }
//     fclose(fptr);
// }




// #include <stdio.h>
// int main() {
//     FILE *inputfile, *evenfile, *oddfile;
//     int numbers[30];
//     int i;
//     // open the input file for writing
//     inputfile = fopen("E:/hiii/numbers.txt", "w");
//     if(inputfile==NULL){
//         printf("file not found");
//         return 1;
//     }
//     // taking 30 numbers as input from the user
//     printf("Enter 30 numbers: ");
//     for(i=0; i<30; i++){
//         scanf("%d", &numbers[i]);
//         fprintf(inputfile, "%d\n", numbers[i]); // write each number to the file
//     }
//     // close the input file after writing
//     fclose(inputfile);
//     // open the even and odd files for writing
//     evenfile = fopen("E:/hiii/even.txt", "w");
//     oddfile = fopen("E:/hiii/odd.txt", "w");
//     if(evenfile==NULL || oddfile==NULL){
//         printf("Error opening even.txt or odd.txt file\n");
//         return 1;
//     }
//     // separate the even and odd numbers and write them to respective files
//     for(i=0; i<30; i++){
//         if(numbers[i] % 2 == 0){
//             fprintf(evenfile, "%d\n", numbers[i]);
//         }
//         else{
//             fprintf(oddfile, "%d\n", numbers[i]);
//         }
//     }
//     // close the even and odd files after writing
//     fclose(evenfile);
//     fclose(oddfile);
//     return 0;
// }