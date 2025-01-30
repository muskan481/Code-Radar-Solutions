#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a'|| ch=='e' ||ch=='i'||ch=='o'|| ch=='u'){
        printf("Vowel");
        return 0;;
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else if((ch>='A'&& ch<='Z')|| (ch>='a' && ch<='z')){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}