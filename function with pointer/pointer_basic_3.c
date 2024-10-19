#include<stdio.h>
int main(){


int x = 1000;

int *ptr = &x;
//x = 430;

*ptr = 430;

// ekhanee x and *ptr same


printf("X er value: %d\n",x);
printf("x er value: %d\n",*ptr);// ekhanee x er value return korbe











    return 0;
}