#include <stdio.h>

int main() {
    char ch;
    scanf("%s",&ch);
    if(ch>='Z' && ch<='A'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}