#include<stdio.h>
int main(){

int N;
int i;
scanf("%d",&N);

if(N>0){

   for(i = 1; i<=N; i++){

    printf("%d ",i);
   }

}

else if(0>=N)//user input negative value theke 0 porjonto.
{

    for(i = N; i<=0; i++){
        printf("%d ",i);
    }
}

    return 0;
}