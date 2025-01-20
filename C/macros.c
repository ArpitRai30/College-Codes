#include <stdio.h>
#define PI 3.14
#define Area(r) (PI * (r) *(r))
int main(){
    int r=5,a;
    a=Area(r);
    printf("area is %d\n",a);
}