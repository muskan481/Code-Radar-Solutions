#include <stdio.h>

char* welcome() {
    float a=3.14
    printf("3.14");
    scanf("You entered: %f",a);
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}