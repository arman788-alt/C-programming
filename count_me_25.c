#include<stdio.h>
int main(){

int N;
scanf("%d",&N);

int ar[N];

for(int i = 0; i<N; i++){
    scanf("%d ",&ar[i]);
}



int two = 0,three = 0;


for(int i = 0; i<N; i++){


if(ar[i]%2 == 0 ){
    two++;
}

else if(ar[i]%2 == 0 && ar[i]%3 == 0){
    two++;
    
}

else if(ar[i]%3 == 0){
    three++;
}

}


printf("%d %d",two,three);


    return 0;
}