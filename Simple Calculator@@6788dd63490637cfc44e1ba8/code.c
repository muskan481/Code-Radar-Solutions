#include <stdio.h>

int main() {
    int a,b;
    char ch; 
    scanf("%d %d %c ",&a ,&b ,&ch);
    float d=(float)a/b;
    if(ch=='+'){
        printf("%d", a+b);
    }
    else if(ch=='-'){
        printf("%d", a-b);
    }
    else if(ch=='*'){
        printf("%d", a*b);
    }
    else if(ch=='/'){ 
        if(b==0){
            printf("error");
        }
        else{
            printf("%d", (int)d );
    }
    }
    else{
        printf("error");
    } 
    return 0;
}