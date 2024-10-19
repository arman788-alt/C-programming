#include<stdio.h>
int main (){

int n;
int a;
int max = 0;
scanf("%d",&n);

for(int i=1; i<=n; i++){

scanf("%d",&a);



//Check Maximum Value
if(max<a){
    max = a;
}

}


printf("%d",max);
    return 0;
}