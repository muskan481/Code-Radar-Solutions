#include <stdio.h>

int main() {
    int a,b;
    char ch; 
    scanf("%d %d %c ",&a ,&b ,&ch);
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
            printf("Error");
        }
        else{
            float d=(float)a/b;
            printf("%d", (int)d );
    }
    }
    else{
        printf("Error");
    } 
    return 0;
}