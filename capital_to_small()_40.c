#include<stdio.h>

//user defined function
// small to capital latter

char capital_to_small(char x){

     
    int small = x + 32;
     



    return small;

}



int main(){

char capital;
scanf("%c",&capital);
char result = capital_to_small(capital);

printf("%c",result);




    return 0;
}









