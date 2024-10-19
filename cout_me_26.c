#include<stdio.h>
#include<string.h>
int main(){


char s[100001];

gets(s); 

int con = 0;
for(int i = 0; i<strlen(s); i++){


     if(s[i]>='a' && s[i]<='z'){

         if(s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='u' && s[i]!='i'){

           con++;
         }

}

}
printf("%d",con);
    return 0;
}