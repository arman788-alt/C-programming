#include<stdio.h>

int count_before_one(int ar[],int size){

int count = 0;

for(int i = 0; i<size; i++){
    if(ar[i] == 1){
         break;
    }

    else{
        if(ar[i]!= 1){
            count++;
        }
    }
}

return count;

}


int main(){

 int n;
 scanf("%d\n",&n); 

int ar[n];
for(int i = 0; i<n; i++){
    scanf("%d ",&ar[i]);
}

int result = count_before_one(ar,n);

printf("result:");

printf("%d",result);


    return 0;
}