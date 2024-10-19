#include<stdio.h>


void swap_it(int *ptr1, int *ptr2){


int temp;
temp = *ptr1;
*ptr1 = *ptr2;//dereference
*ptr2 = temp;


}  


int main(){



int a,b;
scanf("%d %d",&a,&b);

printf("Before swapping:\n");
printf("%d %d\n",a,b);

//call

swap_it(&a,&b);//pass by value by reference.

printf("After swapping:\n");
printf("%d %d\n",a,b);



    return 0;
}