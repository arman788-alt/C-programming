#include <stdio.h>

void fun(int i)
{

    if (i == 6)return; // base case // jodi i er value 6 hoy then fun function jekhan theke call koreche sekhane back korbe,.

    printf("%d\n", i);
    fun(i + 1);
}

int main()
{
 
    fun(1);

    return 0;
}