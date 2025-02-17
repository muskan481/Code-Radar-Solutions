// Your code here...
#include<stdio.h>

int main(){
    int n,b ;
    scanf("%d",&n);
    b=n>>31;
    if(b==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}