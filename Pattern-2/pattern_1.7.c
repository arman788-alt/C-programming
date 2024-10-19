#include<stdio.h>
int main(){

int n,k = 1;
scanf("%d",&n);

for(int i = 1; i<=n; i++){

     for(int j = 1; j<=k; j++){

          printf("%c ",j+64);//A er Ascii value:65  now j = 1, j+64 = 65

}

k++;
printf("\n");


}

    return 0;
}