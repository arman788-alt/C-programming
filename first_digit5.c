#include<stdio.h>
int main(){
    
int x;
scanf("%d",&x);

//4 digit hole 1000 diye bhag, bhag dile first digit pawa jabe.
//3 digit hole 100 diye bhag
//2 digit hole 10 diye


int digit = x/1000;//only for four digit

if(digit%2 == 0){
    printf("EVEN\n");
}

else {
    printf("ODD\n");
}

    return 0;
}