// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int b=n>>a;
    b%10==0;
    printf("%d",b);
    return 0;
}