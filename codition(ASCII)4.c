#include<stdio.h>
int main(){

char a;
scanf("%c",&a);

if(a>=97 && 122>=a)
//boro hater 
//if(a>'a' && 'z'>=a)
{

int ans = a - 32;
printf("%c",ans);

}

else {
    int ans = a + 32;
    printf("%c",ans);
}

    return 0;
}