#include <stdio.h>

int main() {
    int a,b;
    char ch; //sum=0,diff=0,mul=0,div=0;
    scanf("%d %d %c",&a ,&b , &ch);
    //char ch;
    //scanf("%c",&ch);
    //sum=a+b;
    //diff=a-b;
    //mul=a*b;
   // div=int(a/b);
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
        printf("%d", int(a/b));
    }
    else{
        printf("Error");
    }
    return 0;
}