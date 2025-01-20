// # include <stdio.h>

// struct cse{
//     int RollNo;
//     char Name[20];
//     double Ph;
//     int marks;
// };

// int main(){
//     struct cse s[3]={{101, "Arpit", 8210728610, 98}, {102, "Utkarsh", 9140075233, 12}, {103, "Jethalal", 9707798078, 00}};
//     int i;
//     for(i=0; i<3; i++){
//         printf("Roll No is %d\nName is %s\nPhone number is %.0lf\nMarks is %d\n",s[i].RollNo, s[i].Name, s[i].Ph, s[i].marks);
//     }
// }





// # include <stdio.h>

// struct cse{
//     int RollNo;
//     char Name[20];
//     double Ph;
// };

// int main() {
//     int i, n;
//     printf("enter no of students you want to store ");
//     scanf("%d", &n);
//     struct cse s[n];
//     for(i=0; i<n; i++){
//         printf("\nEnter Roll No : ");
//         scanf("%d", &s[i].RollNo);
//         printf("\nEnter Name : ");
//         scanf("%s", &s[i].Name);
//         printf("\nEnter Phone No : ");
//         scanf("%lf", &s[i].Ph);
//     }
//     for(i=0; i<n; i++){
//         printf("\nRoll No is %d\nName is %s\nPhone No is %.0lf\n", s[i].RollNo, s[i].Name, s[i].Ph);
//     }
// }





// #include <stdio.h>

// struct cse{
//     int Roll;
//     char Name[20];
//     int Marks;
// };

// int main() {
//     int i, n;
//     printf("Enter number of students  : ");
//     scanf("%d", &n);
//     struct cse s[n];
//     for(i=0; i<n; i++){
//         printf("\nEnter Roll No : ");
//         scanf("%d", &s[i].Roll);
//         printf("\nEnter Name : ");
//         scanf("%s", &s[i].Name);
//         printf("\nEnter Marks : ");
//         scanf("%d", &s[i].Marks);
//     }
    
//     for(i=0; i<n; i++){
//         printf("\nRoll No is %d\nName is %s\nMarks is %d\n", s[i].Roll, s[i].Name, s[i].Marks);
//     }
// }





// #include <stdio.h>

// struct Parent {
//     char P_Name[20];
//     double P_Ph;
// };

// struct cse {
//     int RollNo;
//     char Name[20];
//     int Marks;
//     struct Parent par;
// };

// int main() {
//    struct cse s1={101, "Vikash", 80, {"Ajay", 8888888888}};
//    printf("Roll no of stu is %d\n", s1.RollNo);
//    printf("Name of stu is %s\n", s1.Name);
//    printf("Marks of stu is %d\n", s1.Marks);
//    printf("Name of Parent of stu is %s\n", s1.par.P_Name);
//    printf("Ph of Parent of stu is %.0lf\n", s1.par.P_Ph);
// }





// #include <stdio.h>
// struct management {
//     int emp_leave;
//     int emp_sal;
// };

// struct employee {
//     char emp_name[20];
//     double emp_ph;
//     char emp_dept[20];
//     struct management man;
// };

// int main() {
//     struct employee e1={"Arpit", 45787661, "tech", {24, 50000}};
//     printf("Employee name is %s\n", e1.emp_name);
//     printf("Employee ph is %.0lf\n", e1.emp_ph);
//     printf("Employee dept is %s\n", e1.emp_dept);
//     printf("Employee leave is %d\n", e1.man.emp_leave);
//     printf("Employee salary is %d\n", e1.man.emp_sal);
// }





// #include <stdio.h>
// struct management {
//     int emp_leave;
//     int emp_sal;
// };

// struct employee {
//     char emp_name[20];
//     double emp_ph;
//     char emp_dept[20];
//     struct management man;
// };

// int main() {
//     int i, n;
//     printf("Enter number of employees :");
//     scanf("%d", &n);
//     struct employee e[n];
//     for(i=0; i<n; i++){
//         printf("Enter employee name : ");
//         scanf("%s", &e[i].emp_name);
//         printf("Enter employee ph : ");
//         scanf("%lf", &e[i].emp_ph);
//         printf("Enter employee dept : ");
//         scanf("%s", &e[i].emp_dept);
//         printf("Enter employee leave : ");
//         scanf("%d", &e[i].man.emp_leave);
//         printf("Enter employee salary : ");
//         scanf("%d", &e[i].man.emp_sal);
//     }
//     for(i=0; i<n; i++){
//         printf("\nName of employee is %s\nPh no is %.0lf\ndept is %s\nEmployee leave is %d\nEmployee salary is %d\n", e[i].emp_name, e[i].emp_ph, e[i].emp_dept, e[i].man.emp_leave, e[i].man.emp_sal);
//     }
// }





// union

#include <stdio.h>
#include <string.h>
union student {
    int r_no;
    char name[20];
    double ph;
};

int main() {
    union student s;
    s.r_no = 101;
    printf("Roll No is %d\n", s.r_no);
    strcpy(s.name, "Arpit");
    printf("Name is %s\n", s.name);
    s.ph = 9999999;
    printf("Phone Number is %.0lf\n", s.ph);

    printf("Roll No is %d, Name is %s and Ph No is %.0lf", s.r_no, s.name, s.ph);

}