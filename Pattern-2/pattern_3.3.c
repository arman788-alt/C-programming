#include<stdio.h>
int main(){

int n, k = 1; //n=3
scanf("%d",&n);

// first step
for(int i = 1; i<=n; i++){
    for(int j = 1; j<=k; j++)
     {
        printf("%c ",j+64); // A er Ascii value 65

     }

     k++;
     printf("\n");
}


// 2nd step
k = n-1; // n=3, k=2
for(int i = n-1; i>=1; i--){
    for(int j = 1; j<=k; j++){
        printf("%c ",j+64);
    }

    k--;
    printf("\n");
}

    return 0;
}