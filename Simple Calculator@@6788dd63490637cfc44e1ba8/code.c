#include <stdio.h>

int main() {
    int a,b,sum=0,diff=0,mul=0,div=0;
    scanf("%d %d",&a,&b);
    char ch;
    scanf("%c",&ch);
    sum=a+b;
    diff=a-b;
    mul=a*b;
    div=int(a/b);
    if(ch=='+'){
        printf("%d",sum);
    }
    else if(ch=='-'){
        printf("%d",diff);
    }
    else if(ch=='*'){
        printf("%d",mul);
    }
    else if(ch=='/'){
        printf("%d",div);
    }
    else{
        printf("Error");
    }
    return 0;
}