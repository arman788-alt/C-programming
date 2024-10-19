#include<stdio.h>
//call stack : mane sobar oporer function age exicute hoy, oporer function sesh holei nicher function e ashte pare.
//call stack e main function automatic call hobe.
// serail wise line by line exicute kore,
// or je function theke call korbo sathe sathe sei fun e chole jbo,
// and jekhan theke call kora hoise sekhane waiting mood e thakbe, 
//oy call kora func er kaj sesh hole, jekhan theke call hoyeche tarporer line theke exicute kora suru hbe.

void world()
{
    printf("world start\n");
    printf("world end\n");

}

void hello()
{
    printf("hello start\n");
    world();//waiting mood e
    printf("hello end\n");
}


int main(){


printf("main start\n");

hello(); //waiting mood e
printf("main end\n");


    return 0;
}



//**call stack**:

//world() : waiting por theke exicute hbe            
//hello()                                      //hello():....same
//main()                                       //main()             //main():.....same   //program ekhane off