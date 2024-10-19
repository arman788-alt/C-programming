#include <stdio.h>
#include <string.h>


int is_palindrome( char str[]) {


    int length = strlen(str);
    
    
    int start = 0;
    int end = length - 1;

    
    while (start<end) {
        if (str[start] != str[end]) {
            return 0; 
        }

        start++;
        end--;
    }
    
    return 1; 
}



int main() {
    
    char str[1001];

    
    scanf("%s", str);

    
    int result = is_palindrome(str);

    
    if (result) {
        printf("Palindrome\n");
    }
     
     else {
        printf("Not Palindrome\n");
    }

    return 0;
}
