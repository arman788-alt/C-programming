#include<stdio.h>
int main(){


int test;
scanf("%d",&test);
for(int t = 1; t<=test; t++){
int n;
scanf("%d",&n);
do{
// first 1bar 0 soho nibe tai do while loop use hoyeche.
printf("%d ",n%10);
n = n/10;

}

while(n!=0);
printf("\n");
}
    return 0;
}