#include<stdio.h>
int main(){

int x = 430;

int *ptr = &x;
int *ptr2 = ptr;

//*ptr = 500;

*ptr2 = 500;

printf("x er value :%d\n",x);
printf("x er value :%d\n",*ptr);
printf("x er value :%d\n",*ptr2);




    return 0;
}