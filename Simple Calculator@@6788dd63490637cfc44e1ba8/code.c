#include <stdio.h>

int main() {
    int a,b;
    char ch; 
    scanf("%d %d %c ",&a ,&b , &ch);
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
    //else if(ch=='/'){
      //  printf("%d", int(a/b));
   // }
    else{
        printf("Error");
    } 
    return 0;
}