#include <stdio.h>
#include<string.h>

int main() {
    int T;
    scanf("%d",&T);
    

    while (T--) {
        char s[10001];
        gets(s);

        int capital = 0, small = 0, digit = 0;

        for (int i = 0; i<strlen(s); i++)
        
        
         {
            if (s[i] >= 'A' && s[i] <= 'Z')
             {
                capital++;
             }


            else if (s[i] >= 'a' && s[i] <= 'z') 
            {
                small++;
            } 
            else if (s[i] >= '0' && s[i] <= '9')
             {
                digit++;
            }
        }

    
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
