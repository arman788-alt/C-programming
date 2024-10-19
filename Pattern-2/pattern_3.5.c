#include<stdio.h>
int main(){

int n, k = 1;
scanf("%d",&n);

// first step
for(int i = 1; i<=n; i++){
    for(int j = 1; j<=k; j++)
     {
        printf("* ");

     }

     k++;
     printf("\n");
}


// 2nd step
k = n-1;
for(int i = n-1; i>=1; i--){
    for(int j = 1; j<=k; j++){
        printf("* ");
    }

    k--;
    printf("\n");
}

    return 0;
}