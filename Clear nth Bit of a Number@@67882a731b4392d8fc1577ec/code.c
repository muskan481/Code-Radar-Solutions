// Your code here...
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    int b=n>>a;
    int ans=n^b;
    printf("%d",ans);
    return 0;
}