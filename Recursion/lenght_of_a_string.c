#include<stdio.h>


int fun(char ar[],int i)
{

if(ar[i]=='\0') return;//base case

int l=fun(ar,i+1);

return l+1;

}


int main()
{

char ar[6]="jessica";

int lenght=fun(ar,0);
printf("%d\n",lenght);

return 0;



}