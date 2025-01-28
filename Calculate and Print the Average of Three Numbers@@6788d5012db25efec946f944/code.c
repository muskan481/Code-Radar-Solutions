#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%.0f %.0f %.0f",&a,&b,&c);
    float n;
    printf("Average: %.2f",(a+b+c)/3);
    printf("%s", welcome());
    return 0;
}