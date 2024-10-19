#include<stdio.h>

//ccout odd numbers.
int count_odd(int ar[],int size){

int cout_odd = 0;
for(int i = 0; i<size; i++){

  if(ar[i]%2==1){

      cout_odd++;
  }


}

return cout_odd;


}




int main(){

int n;
scanf("%d\n",&n);

int ar[n];

for(int i = 0; i<n; i++){
    scanf("%d ",&ar[i]);
}


//call function
int result = count_odd(ar,n);
printf("Count of total Odd numbers:%d\n",result);

    return 0;
}