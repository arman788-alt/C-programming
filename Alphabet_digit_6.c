#include<stdio.h>
int main(){

char x;


if(x>='0' && x<='9'){
    //jodi digit hoy(0-9)
    printf("IS DIGIT\n");
}

else {

printf("ALPHA\\n");

//jodi small letter hoy
if(x>='a' && x<='z'){
    printf("IS SMALL\n");
}

else {
    //jodi capital letter hoy
    printf("IS CAPITAL\n");
}


}

    return 0;
}




