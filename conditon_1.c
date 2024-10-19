#include <stdio.h>


int main() {

    
    int N,i;
    scanf("%d",&N);
    
    
    for(i=1; i<=N; i++){
        //3 and 7 dhara bhag jay, orthat bhag sesh zero sei sokol sonkha.
        if(i%3 == 0 && i%7 == 0){
           printf("%d\n",i); 
        } 
        
    }
    
    return 0;
}
