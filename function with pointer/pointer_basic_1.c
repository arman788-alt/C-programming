#include<stdio.h>
int main(){

int x = 500;
int *ptr = &x;

printf("X er address:%p\n",&x);
printf("ptr er value-----manee er bitore x er address:%p\n",ptr);
printf("ptr er value:%p\n",&ptr);//ptr pointer nijer address
printf("ptr er value:%d\n",*ptr);//X er value dibee

printf("ptr er memory size:%d\n",sizeof(ptr));




    return 0;
}