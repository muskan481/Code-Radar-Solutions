#include <stdio.h>

int main() {
    int N;
    int mul;
    scanf("%d",&N);
    for(int i=1; i<=N ;i++){
        mul=N*i;
        printf("%d x %d = %d\n",N,i, mul);
    }
    return 0;
}