#include<stdio.h>

void change_it(int ar[],int size){


ar[9] = 100;



}





int main(){


int ar[10] = {33,44,55,65,67,434,31,100,9,430};

printf("show array list before update:\n");
for(int i = 0; i<10; i++){
    printf("%d ",ar[i]);
}

//call function
change_it(ar,10);

printf("\n\n");

printf("show array list after update:\n");
for(int i = 0; i<10; i++){
    printf("%d ",ar[i]);
}


    return 0;
}