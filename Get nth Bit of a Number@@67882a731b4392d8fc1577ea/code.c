// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int b=n>>a;
    if(b&1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}